set(SOURCES
        Queue.cpp
        Queue.h)

add_library(Queue ${SOURCES})


target_include_directories(Queue PUBLIC ${SRC_ROOT_DIR})

source_group(TREE ${CMAKE_CURRENT_LIST_DIR} FILES ${SOURCES})

add_subdirectory(Tests)
