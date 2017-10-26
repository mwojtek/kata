#include <kata/fizzbuzz.h>
#include <doctest.h>
#include <experimental/array>

using namespace kata;

TEST_CASE("fizzbuzz") {
   SUBCASE("number is \"fizz\" when divisible by 3") {
      const auto nums = std::experimental::make_array(3, 6, 9, 12, 18, 21, 24, 27,
            33, 36, 39);

      for (auto n: nums) {
         CAPTURE(n);
         REQUIRE(n%3 == 0);
         REQUIRE(n%5 != 0);
         CHECK(fizzbuzz(n) == "fizz");
      }
   }

   SUBCASE("number is \"fizz\" if it contains \"3\" digit") {
      const auto nums = std::experimental::make_array(13, 23, 31, 32, 34, 37,
            38, 43, 73, 83);

      for (auto n: nums) {
         CAPTURE(n);
         REQUIRE(n%3 != 0);
         REQUIRE(n%5 != 0);
         CHECK(fizzbuzz(n) == "fizz");
      }
   }

   SUBCASE("number is \"buzz\" when divisible by 5") {
      const auto nums = std::experimental::make_array(5, 10, 20, 25, 40, 50,
            55, 65, 70, 80, 85, 95);

      for (auto n: nums) {
         CAPTURE(n);
         REQUIRE(n%5 == 0);
         REQUIRE(n%3 != 0);
         CHECK(fizzbuzz(n) == "buzz");
      }
   }

   SUBCASE("number is \"buzz\" if contains \"5\" digit") {
      const auto nums = std::experimental::make_array(52, 56, 58, 59);

      for (auto n: nums) {
         CAPTURE(n);
         REQUIRE(n%5 != 0);
         REQUIRE(n%3 != 0);
         CHECK(fizzbuzz(n) == "buzz");
      }
   }

   SUBCASE("number is \"fizzbuzz\" when divisible both by 3 and 5") {
      const auto nums = std::experimental::make_array(15, 30, 45, 60, 75,
            90);

      for (auto n: nums) {
         CAPTURE(n);
         REQUIRE(n%3 == 0);
         REQUIRE(n%5 == 0);
         CHECK(fizzbuzz(n) == "fizzbuzz");
      }
   }

   SUBCASE("translate number to text when not divisible by 3 or 5") {
      const auto nums = std::experimental::make_array(1, 2, 4, 7, 8, 11,
            14, 16, 17, 19);

      for (auto n: nums) {
         CAPTURE(n);
         REQUIRE(n%3 != 0);
         REQUIRE(n%5 != 0);
         CHECK(fizzbuzz(n) == std::to_string(n));
      }
   }
}
