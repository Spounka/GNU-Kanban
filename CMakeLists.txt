cmake_minimum_required(VERSION 3.10)
project(GNU-Kanban)

set(CMAKE_CXX_STANDARD 17)


set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

message(${CMAKE_CURRENT_SOURCE_DIR})

find_package(wxWidgets REQUIRED)
include(${wxWidgets_USE_FILE})
#set(CMAKE_CXX_FLAGS "${wxWidgets_CXX_FLAGS}")

include_directories("${CMAKE_SOURCE_DIR}/extern")


set(HEADERS_DIRECTORY "${CMAKE_SOURCE_DIR}/include")
set(SRC_DIR "${CMAKE_SOURCE_DIR}/src")

add_subdirectory("${CMAKE_SOURCE_DIR}/extern")
add_subdirectory("${CMAKE_SOURCE_DIR}/src")
add_subdirectory("${CMAKE_SOURCE_DIR}/app")


