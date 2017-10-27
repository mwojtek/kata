#include <kata/roman.h>
#include <doctest.h>

using namespace kata;

TEST_CASE("roman numerals") {
   CHECK(to_roman(1) == "I");
}
