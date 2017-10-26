#include <kata/fizzbuzz.h>
#include <doctest.h>
#include <experimental/array>

using namespace kata;

TEST_CASE("fizzbuzz") {
   SUBCASE("number is fizz when divisible by 3") {
      const auto nums = std::experimental::make_array(3, 6, 9, 12, 18, 21, 24, 27,
            33, 36, 39);

      for (auto n: nums) {
         REQUIRE(n%3 == 0);
         REQUIRE(n%5 != 0);
         CHECK(fizzbuzz(n) == "fizz");
      }
   }

   SUBCASE("number is buzz when divisible by 5") {
      const auto nums = std::experimental::make_array(5, 10, 20, 25, 35, 40,
            50, 55, 65, 70);

      for (auto n: nums) {
         REQUIRE(n%5 == 0);
         REQUIRE(n%3 != 0);
         CHECK(fizzbuzz(n) == "buzz");
      }
   }
}
