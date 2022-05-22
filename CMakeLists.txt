cmake_minimum_required(VERSION 3.0)
project(dfl_test)

option(BUILD_TESTING OFF)
add_subdirectory(lib/data_flow_library)
add_executable(main main.cpp)
target_link_libraries(main PRIVATE dfl)