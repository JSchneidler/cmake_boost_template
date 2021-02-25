#include "boost_test.hpp"

#include <boost/filesystem.hpp>

std::string getCurrentDirectory() {
  return boost::filesystem::current_path().filename().string();
}