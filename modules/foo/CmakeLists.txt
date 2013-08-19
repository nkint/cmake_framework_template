cmake_minimum_required(VERSION 2.8.10)
message(" === /modules/foo")
set(PROJECTNAME "foo")
project($(PROJECTNAME) C CXX)

include_directories(include/${PROJECTNAME})
include_directories(src)

set(${PROJECTNAME}_HEADERS
    include/foo/foo.h
)

set(${PROJECTNAME}_SOURCES
    src/foo.cpp    
)

add_library(${PROJECTNAME}
            ${${PROJECTNAME}_HEADERS}
            ${${PROJECTNAME}_SOURCES}
)
