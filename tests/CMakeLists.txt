project(tests)

set(SRC_LIST
        main.cpp
        TestBTree.cpp
        TestBplusTree.cpp
        TestSplayTree.cpp
        )

add_executable(${PROJECT_NAME} ${SRC_LIST})
target_link_libraries(${PROJECT_NAME} PRIVATE ${LIB_NAME})
