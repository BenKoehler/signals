cmake_minimum_required(VERSION 3.9)
project (signals LANGUAGES CXX)

add_library(signals INTERFACE)
target_compile_definitions(signals INTERFACE LIBRARY_HEADER_ONLY)
target_include_directories(signals SYSTEM INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})
