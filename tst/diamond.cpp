#include <kata/diamond.h>
#include <doctest.h>

using namespace kata;

TEST_CASE("diamond") {
   CHECK(diamond('A'-1) == "");
   CHECK(diamond('A') == "A");

   SUBCASE("B") {
      const auto str = diamond('B');
      CHECK(str.substr(0, 3) == " A\n");
   }
}
