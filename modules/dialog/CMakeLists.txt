cmake_minimum_required(VERSION 2.8.10)
message(" === /modules/dialog")
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/../../cmake")
set(MODULE_NAME "dialog")
project(${MODULE_NAME} C CXX)

set(${MODULE_NAME}_HEADERS
    include/dialog/dialog.h
)

set(${MODULE_NAME}_HEADERS_MOC
    include/dialog/dialog.h
)

set(${MODULE_NAME}_SOURCES
    src/dialog.cpp    
)

set(${MODULE_NAME}_UI
    ui/dialog.ui
)

set(${MODULE_NAME}_RESOURCES
    resources/icons.qrc
)

qt4_wrap_cpp(${MODULE_NAME}_PROCESSED_MOC ${${MODULE_NAME}_HEADERS_MOC})
qt4_wrap_ui(${MODULE_NAME}_FORMS_HEADERS ${${MODULE_NAME}_UI})
qt4_add_resources(${MODULE_NAME}_COMPILED_RESOURCES ${${MODULE_NAME}_RESOURCES})

message("dudee ${${MODULE_NAME}_COMPILED_RESOURCES}")

include_directories(include)
include_directories(${CMAKE_CURRENT_BINARY_DIR}) # this line is for the processed ui_dialog.h
add_library(${MODULE_NAME}
            ${${MODULE_NAME}_COMPILED_RESOURCES}
            ${${MODULE_NAME}_HEADERS}
            ${${MODULE_NAME}_SOURCES}
            ${${MODULE_NAME}_PROCESSED_MOC}
            ${${MODULE_NAME}_FORMS_HEADERS}

)
