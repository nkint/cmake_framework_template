cmake_minimum_required(VERSION 2.8.10)
message(" === Findfoo.cmake")

set(PACKAGE_NAME "foo")

add_subdirectory(${CMAKE_CURRENT_LIST_DIR}/../modules/${PACKAGE_NAME} 
                 ${CMAKE_CURRENT_LIST_DIR}/../modules/${PACKAGE_NAME}/build
)
include_directories(${CMAKE_CURRENT_LIST_DIR}/../modules/${PACKAGE_NAME}/include)

set(LIB ${LIB} foo)
