cmake_minimum_required(VERSION 2.8.10)
message(" === Findfoo.cmake")

set(PACKAGE_NAME "foo")

# here the sould be a check if it is already built or not..
# with this line it is building in modules/foo/build
add_subdirectory(${CMAKE_CURRENT_LIST_DIR}/../modules/${PACKAGE_NAME} 
                 ${CMAKE_CURRENT_LIST_DIR}/../modules/${PACKAGE_NAME}/build
)

include_directories(${CMAKE_CURRENT_LIST_DIR}/../modules/${PACKAGE_NAME}/include)

set(LIB ${LIB} foo)
