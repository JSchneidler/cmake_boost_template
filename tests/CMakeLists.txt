cmake_minimum_required(VERSION 3.13)

add_executable(tests test1.cpp tests2.cpp)
target_include_directories(tests PRIVATE ${Boost_INCLUDE_DIRS})

add_test(tests Boost_Tests)