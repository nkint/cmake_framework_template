cmake_minimum_required(VERSION 2.8)
project(fooTest)
message(" === apps/fooTest")
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/../../cmake")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "bin/")
find_package(foo)
add_executable(fooTest main.cpp)
target_link_libraries(fooTest ${LIB})
