cmake_minimum_required(VERSION 2.8.10)
message(" === Finddialog.cmake")

set(PACKAGE_NAME "dialog")

include_directories(${CMAKE_CURRENT_LIST_DIR}/../modules/${PACKAGE_NAME}/include)
add_subdirectory(${CMAKE_CURRENT_LIST_DIR}/../modules/${PACKAGE_NAME} 
                 ${CMAKE_CURRENT_LIST_DIR}/../modules/${PACKAGE_NAME}/build
)

set(LIB ${LIB} ${PACKAGE_NAME})
