cmake_minimum_required(VERSION 2.8.10)
message(" === /modules/foo")
set(MODULE_NAME "foo")
project(${MODULE_NAME} C CXX)

set(${MODULE_NAME}_HEADERS
    include/foo/foo.h
)

set(${MODULE_NAME}_SOURCES
    src/foo.cpp    
)

add_library(${MODULE_NAME}
            ${${MODULE_NAME}_HEADERS}
            ${${MODULE_NAME}_SOURCES}
)
include_directories(include)
