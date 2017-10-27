#include <kata/roman.h>
#include <doctest.h>

using namespace kata;

TEST_CASE("roman numerals") {
   SUBCASE("valid input") {
      CHECK(to_roman(1) == "I");
      CHECK(to_roman(2) == "II");
      CHECK(to_roman(3) == "III");
      CHECK(to_roman(4) == "IV");
      CHECK(to_roman(5) == "V");
      CHECK(to_roman(6) == "VI");
      CHECK(to_roman(7) == "VII");
      CHECK(to_roman(8) == "VIII");
      CHECK(to_roman(9) == "IX");
      CHECK(to_roman(10) == "X");
      CHECK(to_roman(11) == "XI");
      CHECK(to_roman(22) == "XXII");
      CHECK(to_roman(33) == "XXXIII");
      CHECK(to_roman(44) == "XLIV");
      CHECK(to_roman(55) == "LV");
      CHECK(to_roman(66) == "LXVI");
      CHECK(to_roman(77) == "LXXVII");
      CHECK(to_roman(88) == "LXXXVIII");
      CHECK(to_roman(99) == "XCIX");
      CHECK(to_roman(111) == "CXI");
      CHECK(to_roman(432) == "CDXXXII");
      CHECK(to_roman(542) == "DXLII");
      CHECK(to_roman(900) == "CM");
      CHECK(to_roman(3000) == "MMM");
   }
   SUBCASE("invalid input") {
      CHECK(to_roman(0) == "");
      CHECK(to_roman(-1) == "");
   }
}
