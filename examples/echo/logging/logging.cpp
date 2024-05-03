// Implementation of the Trace logging class
#include "logging.h"
//#include <format>
//#include <fmt/core.h>

// TODO: Optimization - batch writes to disk
trace::EntryType Trace::get_entry_type(uint64_t entry)
{
	if (entry == 0) {
		return trace::EntryType::RECEIVE;
	} else if (entry == 1) {
		return trace::EntryType::ASSIGN;
	} else if (entry == 2) {
		return trace::EntryType::ACCEPT;
	}
	return trace::EntryType::MOOT;

}


Trace::Trace(uint64_t node_id, 
             uint64_t ordering_indicator, 
             uint64_t num_nodes, 
             std::string const trace_name,
             uint64_t length_of_test) 
	: trace_file_name(trace_name + "_" + std::to_string(node_id)),
	  trace_file(trace_file_name.c_str(), std::ios::out) 
{
    /*Initialize default class members*/
    node = {node_id, num_nodes, ORDERING(ordering_indicator)};
    vector_clock = std::vector<uint64_t>(num_nodes);
    trace_entries = std::vector<struct trace_entry>();

    /* Start trace timer */
    start_time = std::chrono::time_point_cast<std::chrono::milliseconds>(std::chrono::system_clock::now());
    collection_time = length_of_test;
    
    /* Create the local trace file */
    //trace_file_name = trace_name + "_" + std::to_string(node_id);
    trace::StartTrace start_trace;
    start_trace.set_node_id(node_id);
    start_trace.set_type(get_ordering_indicator(ordering_indicator)); // Sets ordering type
    auto start_time_since_epoch = std::chrono::duration_cast<std::chrono::milliseconds>(start_time.time_since_epoch());
    start_trace.set_start_time(start_time_since_epoch.count());
    //2. Serialize Message
    std::string serializeOutput = start_trace.SerializeAsString();
    if (serializeOutput.length() > 0) 
    {
	// 3. Write to output file
	trace_file << serializeOutput << std::endl;
	std::cout << "Trace file " << trace_file_name << " written to!" << std::endl;
    }
}

Trace::~Trace() {
    trace_file.close();
}

trace::OrderingType Trace::get_ordering_indicator(uint64_t ordering_idx)
{
	if (ordering_idx == 0) {
		return trace::OrderingType::TIME;
	} else if (ordering_idx == 1) {
		return trace::OrderingType::DEPENDENCY;
	} else if (ordering_idx == 2) {
		return trace::OrderingType::WEIGHT;
	}
	return trace::OrderingType::NONE;
}

bool Trace::add_trace_entry(uint64_t entry_type,
			    uint64_t leader_id,
			    std::string message,
			    uint64_t slot,
			    uint64_t client_id) // TODO: Use protobuf!
{
    if (timer_expired())
        return false; // TODO: Create custom error type
    // TODO: Fill in all of the protobuf functions!!
    // 1. Fill in all relevant protobuf information
    trace::TraceRecord trace_entry;
    // Get trace entry time of type std::chrono::time_point_cast<std::chrono::milliseconds>
    auto trace_timepoint = std::chrono::time_point_cast<std::chrono::microseconds>(std::chrono::system_clock::now());
    auto trace_time = std::chrono::duration_cast<std::chrono::microseconds>(trace_timepoint.time_since_epoch());
    trace_entry.set_trace_time(trace_time.count());
    trace_entry.set_leader_id(leader_id);
    // If you need thread_id, do: std::this_thread::get_id()
    trace_entry.set_type(get_entry_type(entry_type)); // TODO: WRONG NEED TO CHANGE!!!
    trace_entry.set_msg(message);
    trace_entry.set_slot(slot);
    trace_entry.set_client_id(client_id);   
    //2. Serialize Message
    std::string serializeOutput = trace_entry.SerializeAsString();
    if (serializeOutput.length() > 0) 
    {
	// 3. Write to output file
	trace_file << serializeOutput << std::endl;
    }
    return true;
}

bool Trace::timer_expired()
{
    return std::chrono::duration_cast<std::chrono::seconds>(std::chrono::system_clock::now() - start_time).count() >= collection_time;
}
