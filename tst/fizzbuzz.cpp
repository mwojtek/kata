#include <kata/fizzbuzz.h>
#include <doctest.h>

using namespace kata;

TEST_CASE("number is fizz when divisible by 3") {
    CHECK(fizzbuzz(3) == "fizz");
}
