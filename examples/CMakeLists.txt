
# === Example replicated calculator ===
add_executable(calc_server
               calculator/calc_server.cxx
               logger.cc
               in_memory_log_store.cxx)
add_dependencies(calc_server
                 static_lib)
target_link_libraries(calc_server
                      ${BUILD_DIR}/${LIBRARY_OUTPUT_NAME}
                      ${LIBRARIES})

add_executable(echo_server
               echo/echo_server.cxx
               logger.cc
               in_memory_log_store.cxx
	       echo/logging/logging.cpp
	       echo/logging/proto/trace.pb.h
	       echo/logging/proto/trace.pb.cc)
add_dependencies(echo_server
                 static_lib)
target_link_libraries(echo_server
                      ${BUILD_DIR}/${LIBRARY_OUTPUT_NAME}
                      ${LIBRARIES})

add_executable(quick_start
               quick_start.cxx
               logger.cc
               in_memory_log_store.cxx)
add_dependencies(quick_start
                 static_lib)
target_link_libraries(quick_start
                      ${BUILD_DIR}/${LIBRARY_OUTPUT_NAME}
                      ${LIBRARIES})

