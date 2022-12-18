cmake_minimum_required(VERSION 3.5)

include(CTest)
include(gtest)
enable_testing()

add_executable(countTest countTest.cpp)

target_link_libraries(countTest gtest_main counter)
add_test(NAME count_test COMMAND countTest)
