cmake_minimum_required(VERSION 3.13...3.20)
project(cmake_boost_template
  VERSION 1.0
  DESCRIPTION "Simple C++ project using CMake and Boost libraries"
  LANGUAGES CXX)

#set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin)

set(Boost_USE_STATIC_LIBS ON)
find_package(Boost 1.73 COMPONENTS filesystem REQUIRED)

add_executable(cmake_boost_test src/main.cpp src/boost_test.cpp)
target_compile_features(cmake_boost_test PRIVATE cxx_std_20)
target_include_directories(cmake_boost_test PRIVATE src ${Boost_INCLUDE_DIRS})
target_link_libraries(cmake_boost_test ${Boost_LIBRARIES})

enable_testing()
add_subdirectory(tests)
