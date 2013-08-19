cmake_minimum_required(VERSION 2.8)

message(" === /")

project(myproject)

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake")
find_package(foo)

add_subdirectory(apps/test1)