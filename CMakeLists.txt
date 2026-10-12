cmake_minimum_required(VERSION 3.14)
project(CaseTask4)

set(CMAKE_CXX_STANDARD 17)

# Подключаем GoogleTest
include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/tags/v1.14.0.zip
)
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

include_directories(include)

add_library(data_structures
    src/Queue.cpp
    src/Heap.cpp
    src/BinaryTree.cpp
)

add_executable(test_queue tests/test_queue.cpp)
target_link_libraries(test_queue PRIVATE data_structures GTest::gtest_main)

add_executable(test_heap tests/test_heap.cpp)
target_link_libraries(test_heap PRIVATE data_structures GTest::gtest_main)

add_executable(test_binary_tree tests/test_binary_tree.cpp)
target_link_libraries(test_binary_tree PRIVATE data_structures GTest::gtest_main)

enable_testing()
add_test(NAME QueueTest COMMAND test_queue)
add_test(NAME HeapTest COMMAND test_heap)
add_test(NAME BinaryTreeTest COMMAND test_binary_tree)