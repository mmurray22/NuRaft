// 4/20: Logging library which should be integrated into existing systems
// System assumptions: TODO (e.g. all nodes have IDs) 

#include <fstream>
#include <vector>
#include <chrono>
#include <string>
#include <optional>
#include <mutex>
#include <boost/preprocessor.hpp>

#include "proto/trace.pb.h"

#define X_DEFINE_ENUM_WITH_STRING_CONVERSIONS_TOSTRING_CASE(r, data, elem)    \
    case elem : return BOOST_PP_STRINGIZE(elem);

#define DEFINE_ENUM_WITH_STRING_CONVERSIONS(name, enumerators)                \
    enum name {                                                               \
        BOOST_PP_SEQ_ENUM(enumerators)                                        \
    };                                                                        \
                                                                              \
    inline const char* ToString(name v)                                       \
    {                                                                         \
        switch (v)                                                            \
        {                                                                     \
            BOOST_PP_SEQ_FOR_EACH(                                            \
                X_DEFINE_ENUM_WITH_STRING_CONVERSIONS_TOSTRING_CASE,          \
                name,                                                         \
                enumerators                                                   \
            )                                                                 \
            default: return "[Unknown " BOOST_PP_STRINGIZE(name) "]";         \
        }                                                                     \
    }

/*
 * ORDERING type enumerating the different supported orderings
 */
enum ORDERING {
    TIME, // Ordering determined by time
    DEPENDENCY, // Ordering based on data dependency
    WEIGHT, // Ordering based on message priority
};

/*
 * EntryType enumerates the different types of supported trace entries
 */
DEFINE_ENUM_WITH_STRING_CONVERSIONS(EntryType,
    (RECEIVE) // Recorded when message enters the system  
    (ASSIGN) // Recorded when ordering assignment is given to message
    (ACCEPT) // Recorded when ordering assignment is accepted and committed into the system
);

/*
 * Note: Not currently in use. Might be useful sometime though.
 * Reasoning: Different programs have different ways of telling time.
 * This could affect their ordering guarantees.
 */
struct ProgramTime
{
    /*Struct which needs to be implemented by system maintainers*/
    // Currently has a dummy implementation
    uint64_t epoch;
    uint64_t round;
    uint64_t view;
};

/*
 * Contains necessary metadata about a node 
 */
struct node_info
{
    uint64_t node_id; // Uniquely identifies the node
    uint64_t num_nodes; // Number of nodes participating in the protocol
    ORDERING ordering_indicator; // Method that the node is using to assign message order
};

/*
 * TODO
 */
struct message_info
{
    std::string message; //TODO: Change this! Use templates
    uint64_t slot; // TODO: Change this! Use templates
    uint64_t clientID;
    // Any other properties?
};

// TODO
struct trace_entry
{
    std::chrono::time_point<std::chrono::system_clock> start_time;
    std::chrono::time_point<std::chrono::system_clock> end_time;
    EntryType trace_entry_type; 
    uint64_t leader_id; // 
    //std::optional<int64_t> thread_id; // Uniquely identifying the execution context TODO make optional?
    struct message_info msg;
};

/* Trace Class */
class Trace // TODO: Didn't even think about the fact that the traces are going to be in completely different parts of the code, resulting in trace class redefinition
{
    public:
        Trace(uint64_t node_id, uint64_t ordering_indicator, uint64_t num_nodes, std::string trace_name, uint64_t length_of_test);
        virtual ~Trace();
		static trace::OrderingType get_ordering_indicator(uint64_t ordering_idx);
        static trace::EntryType get_entry_type(uint64_t entry);
        bool add_trace_entry(uint64_t entry_type, uint64_t leader_id, std::string message, uint64_t slot, uint64_t client_id);

    private:
        /*Metadata related to the actual trace file*/
        std::string trace_file_name;
        std::ofstream trace_file;
        
        // Information about the local node performing the trace. TODO: Memory allocation?
        struct node_info node;
        
        /*Vector clock: keeping track of the orderings at all other nodes */
        std::vector<uint64_t> vector_clock;
        std::mutex vector_clock_lock; // TODO look into optimizing this in the future

        /* List of all local trace entries */
        std::vector<struct trace_entry> trace_entries;
        std::mutex trace_entries_lock;

        /* Timeout : Determines how long the tracing library will collect information */
        std::chrono::time_point<std::chrono::system_clock> start_time;
        uint64_t collection_time; // Time trace library will run in seconds TODO: Make a latent constant?
        bool timer_expired();
};
