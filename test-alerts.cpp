#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file

#include "test/catch.hpp"
#include "typewise-alert.h"

TEST_CASE("infers the breach according to limits") {
  REQUIRE(inferBreach(12, 20, 30) == TOO_LOW);
}

TEST_CASE("infers the breach according to limits") {
  REQUIRE(inferBreach(12, 12, 30) == NORMAL);
}

TEST_CASE("infers the breach according to limits") {
  REQUIRE(inferBreach(12, 10, 30) == NORMAL);
}

TEST_CASE("infers the breach according to limits") {
  REQUIRE(inferBreach(31, 10, 30) == TOO_HIGH);
}

TEST_CASE("Classify breach based on cooling type") {
  REQUIRE(classifyTemperatureBreach(HI_ACTIVE_COOLING,-1) == TOO_LOW)
}
          
TEST_CASE("Classify breach based on cooling type") {
  REQUIRE(classifyTemperatureBreach(HI_ACTIVE_COOLING,10) == NORMAL)
}

TEST_CASE("Classify breach based on cooling type") {
  REQUIRE(classifyTemperatureBreach(HI_ACTIVE_COOLING,50) == TOO_HIGH)
}
