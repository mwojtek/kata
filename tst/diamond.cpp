#include <kata/diamond.h>
#include <doctest.h>

using namespace kata;

TEST_CASE("diamond") {
   CHECK(diamond('A'-1) == "");
   CHECK(diamond('A') == "A");
}
