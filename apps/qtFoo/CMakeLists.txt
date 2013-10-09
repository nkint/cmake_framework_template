cmake_minimum_required(VERSION 2.8)
message(" === apps/qtFoo")
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/../../cmake")

# project
set(PROJECTNAME "qtFoo")
project(${PROJECTNAME} C CXX)
set (CMAKE_CXX_FLAG "-Wall")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "bin/")

find_package(Qt4 COMPONENTS QtCore QtGUI REQUIRED)
include(${QT_USE_FILE})

find_package(foo)

# files
set(${PROJECTNAME}_SOURCES
    main.cpp
    mainwindow.cpp
)

set(${PROJECTNAME}_HEADERS
    mainwindow.h
)

set(${PROJECTNAME}_HEADERS_MOC
    mainwindow.h
)

set(${PROJECTNAME}_FORMS
    mainwindow.ui
)

# qt directives
qt4_wrap_ui(${PROJECTNAME}_FORMS_HEADERS ${${PROJECTNAME}_FORMS})
qt4_wrap_cpp(${PROJECTNAME}_PROCESSED_MOC ${${PROJECTNAME}_HEADERS_MOC})

include_directories(${CMAKE_CURRENT_BINARY_DIR})

add_executable(${PROJECTNAME} 
    ${${PROJECTNAME}_HEADERS}
    ${${PROJECTNAME}_SOURCES}
    ${${PROJECTNAME}_PROCESSED_MOC}
    ${${PROJECTNAME}_FORMS_HEADERS}
)
target_link_libraries(${PROJECTNAME} ${QT_LIBRARIES} ${LIB})
