#include <kata/roman.h>
#include <doctest.h>

using namespace kata;

TEST_CASE("roman numerals") {
   SUBCASE("integer to roman") {
      SUBCASE("single digit") {
         for (const auto& rd: detail::roman_digits)
            CHECK(to_roman(rd.first) == rd.second);
      }
      SUBCASE("valid input") {
         CHECK(to_roman(0) == "");
         CHECK(to_roman(2) == "II");
         CHECK(to_roman(3) == "III");
         CHECK(to_roman(4) == "IV");
         CHECK(to_roman(6) == "VI");
         CHECK(to_roman(7) == "VII");
         CHECK(to_roman(8) == "VIII");
         CHECK(to_roman(9) == "IX");
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
         CHECK(to_roman(-1) == "");
      }
   }
   SUBCASE("roman to integer") {
      SUBCASE("single digit") {
         for (const auto& rd: detail::roman_digits)
            CHECK(from_roman(rd.second) == rd.first);
      }
      SUBCASE("valid input") {
         CHECK(from_roman("") == 0);
         CHECK(from_roman("II") == 2);
         CHECK(from_roman("III") == 3);
      }
      SUBCASE("invalid input") {
         constexpr auto not_a_roman = std::experimental::make_array("i", "IIII");

         for (const auto nar: not_a_roman) {
            bool exception_catch = false;
            CAPTURE(nar);
            try {
               from_roman(nar);
            } catch (const std::runtime_error& re) {
               exception_catch = true;
               CHECK(!std::strcmp(re.what(), "not a roman numeral"));
            }
            CHECK(exception_catch);
         }
      }
   }
}
