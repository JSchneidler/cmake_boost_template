#include <boost/test/unit_test.hpp>

#include "../src/boost_test.hpp"

BOOST_AUTO_TEST_CASE(fs_test) {
  std::cout << getCurrentDirectory() << std::endl;
  BOOST_TEST(getCurrentDirectory() == "tests");
}