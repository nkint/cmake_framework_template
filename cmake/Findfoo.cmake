message(" === Findfoo.cmake")

# add_subdirectory hack : 
# repository_path/modules/foo is not a subdirectory if called from repository/apps/test1
# http://stackoverflow.com/questions/7980784/cmake-add-sub-directory-which-is-not-sub-directory-on-real-directory
add_subdirectory(${CMAKE_CURRENT_LIST_DIR}/../modules/foo ${CMAKE_CURRENT_LIST_DIR}/foo)

include_directories(${CMAKE_CURRENT_LIST_DIR}/../modules/foo)
link_directories(${CMAKE_CURRENT_LIST_DIR}/../modules/foo)

set(LIB ${LIB} foo)