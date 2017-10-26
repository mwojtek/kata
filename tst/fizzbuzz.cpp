#include <kata/fizzbuzz.h>
#include <doctest.h>
#include <experimental/array>

using namespace kata;

TEST_CASE("number is fizz when divisible by 3") {
   const auto nums = std::experimental::make_array(3, 6, 9, 12, 18, 21, 24, 27,
         33, 36, 39);

   for (auto n: nums) {
      REQUIRE(n%3 == 0);
      REQUIRE(n%5 != 0);
      CHECK(fizzbuzz(n) == "fizz");
   }
}
