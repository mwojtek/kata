#include <kata/diamond.h>
#include <doctest.h>

using namespace kata;

TEST_CASE("diamond") {
   REQUIRE(diamond('A') == "A");
}
