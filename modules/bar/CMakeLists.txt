cmake_minimum_required(VERSION 2.8.10)
message(" === /modules/bar")
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/../../cmake")
set(MODULE_NAME "bar")
project(${MODULE_NAME} C CXX)

set(${MODULE_NAME}_HEADERS
    include/bar/bar.h
)

set(${MODULE_NAME}_SOURCES
    src/bar.cpp    
)

add_library(${MODULE_NAME}
            ${${MODULE_NAME}_HEADERS}
            ${${MODULE_NAME}_SOURCES}
)
include_directories(include)
