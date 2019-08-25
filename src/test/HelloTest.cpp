// xjen by (c) Matthew James Briggs

#include "xjen/Hello.h"
#include "catch.hpp"

namespace xjen
{
  TEST_CASE( "Factorials are computed" ) {
    const auto hello = Hello{};
    CHECK( 5 == hello.getFive() );
  }
}
