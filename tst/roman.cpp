#include <kata/roman.h>
#include <doctest.h>

using namespace kata;

TEST_CASE("roman numerals") {
   CHECK(to_roman(1) == "I");
   CHECK(to_roman(2) == "II");
   CHECK(to_roman(3) == "III");
   CHECK(to_roman(4) == "IV");
   CHECK(to_roman(5) == "V");
   CHECK(to_roman(6) == "VI");
   CHECK(to_roman(7) == "VII");
   CHECK(to_roman(8) == "VIII");
}
