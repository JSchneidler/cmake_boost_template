#define BOOST_TEST_MODULE Boost Tests
#include <boost/test/included/unit_test.hpp>

#include "../src/boost_test.hpp"

BOOST_AUTO_TEST_CASE(pi_test) {
  BOOST_TEST(pi == 3.1415926535897931);
}