cmake_minimum_required(VERSION 3.13...3.20)

add_executable(tests test1.cpp tests2.cpp ../src/boost_test.cpp)
target_compile_features(tests PRIVATE cxx_std_20)
target_include_directories(tests PRIVATE ../src/ ${Boost_INCLUDE_DIRS})
target_link_libraries(tests ${Boost_LIBRARIES})

add_test(unit_tests tests)