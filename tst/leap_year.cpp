#include <kata/leap_year.h>
#include <doctest.h>
#include <experimental/array>

using namespace kata;

TEST_CASE("leap year") {
   SUBCASE("typical leap year") {
      constexpr auto leap_years = std::experimental::make_array(
            1804, 1808, 1812, 1816, 1820, 1824, 1996);

      for (auto year: leap_years) {
         CAPTURE(year);
         REQUIRE(year%4 == 0);
         REQUIRE(year%100 != 0);
         REQUIRE(year%400 != 0);
         CHECK(is_leap_year(year) == true);
      }
   }

   SUBCASE("typical year") {
      constexpr auto years = std::experimental::make_array(
            2001);

      for (auto year: years) {
         CAPTURE(year);
         REQUIRE(year%4 != 0);
         CHECK(is_leap_year(year) == false);
      }
   }

   SUBCASE("atypical leap year") {
      constexpr auto leap_years = std::experimental::make_array(
            2000);

      for (auto year: leap_years) {
         CAPTURE(year);
         REQUIRE(year%4 == 0);
         REQUIRE(year%100 == 0);
         REQUIRE(year%400 == 0);
         CHECK(is_leap_year(year) == true);
      }
   }

   SUBCASE("atypical year") {
      constexpr auto years = std::experimental::make_array(
            1900);

      for (auto year: years) {
         CAPTURE(year);
         REQUIRE(year%4 == 0);
         REQUIRE(year%100 == 0);
         REQUIRE(year%400 != 0);
         CHECK(is_leap_year(year) == false);
      }
   }
}
