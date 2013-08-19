cmake_minimum_required(VERSION 2.8)
project(test1)
message(" === apps/test1")

# global variables
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/../../cmake")
set(LIB) # to be filled with libraries to use in this project

# local modules
find_package(foo)

# source files
add_executable(test1 main.cpp)

# linker
target_link_libraries(test1 ${LIB})
