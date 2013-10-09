cmake_minimum_required(VERSION 2.8)
message(" === apps/qtGL")
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/../../cmake")

# project
set(PROJECTNAME "qtGL")
project(${PROJECTNAME} C CXX)
set (CMAKE_CXX_FLAG "-Wall")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "bin/")

find_package(Qt4 COMPONENTS QtCore QtGUI REQUIRED)
include(${QT_USE_FILE})

# opengl
find_package(OpenGL REQUIRED)
find_package(GLUT)
set(QT_USE_QTOPENGL TRUE)
set(LIB ${LIB} ${OPENGL_LIBRARIES})

# Source Code
###########################################################

include_directories(${CMAKE_CURRENT_BINARY_DIR})

file(GLOB_RECURSE ${PROJECTNAME}_HEADERS ${CMAKE_SOURCE_DIR}/include/*.h)
file(GLOB_RECURSE ${PROJECTNAME}_SOURCES ${CMAKE_SOURCE_DIR}/src/*.cpp)
file(GLOB_RECURSE ${PROJECTNAME}_UI ${CMAKE_SOURCE_DIR}/ui/*.ui)
file(GLOB_RECURSE ${PROJECTNAME}_RESOURCES ${CMAKE_SOURCE_DIR}/resources/*.qrc)

include_directories (include)
include_directories (src)
include_directories (ui)
include_directories (resources)

SET(${PROJECTNAME}_SOURCES
    main.cpp
    ${${PROJECTNAME}_SOURCES}
)

qt4_add_resources(${PROJECTNAME}_RCS ${${PROJECTNAME}_RESOURCES})
qt4_wrap_cpp(${PROJECTNAME}_MOCFILES ${${PROJECTNAME}_HEADERS})
qt4_wrap_ui(${PROJECTNAME}_GEN_UI ${${PROJECTNAME}_UI})

ADD_EXECUTABLE(${PROJECTNAME}
    ${${PROJECTNAME}_SOURCES}
    ${${PROJECTNAME}_HEADERS}
    ${${PROJECTNAME}_MOCFILES}
    ${${PROJECTNAME}_GEN_UI}
    ${${PROJECTNAME}_RESOURCES}
    ${${PROJECTNAME}_RCS}
)
target_link_libraries(${PROJECTNAME} ${QT_LIBRARIES} ${LIB})
