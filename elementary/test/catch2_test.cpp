#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>

#include <add.h>
#include <add_variadic.h>
#include <mul.h>
#include <pow.h>

TEST_CASE("Basic mathlib test")
{
  REQUIRE(add(2, 6) == 8);
  REQUIRE(mul(3, 5) == 15);
  REQUIRE(pow(2, 10) == 1024);
  REQUIRE(add_variadic(1, 2, 3, 4) == 10);
}
