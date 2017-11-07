#include <kata/diamond.h>
#include <doctest.h>

using namespace kata;

TEST_CASE("diamond") {
   CHECK(diamond('A'-1) == "");
   CHECK(diamond('A') == "A");

   SUBCASE("B") {
      const auto b = diamond('B');
      CAPTURE(b);
      CHECK(b.substr(0, 2) == " A");
      CHECK(b.substr(2, 1) == "\n");
      CHECK(b.substr(3, 3) == "B B");
   }
}
