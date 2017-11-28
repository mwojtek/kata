#include <kata/number.h>
#include <doctest.h>
#include <experimental/array>

using namespace kata;

TEST_CASE("integer to words") {
   for (auto& n: detail::numbers_and_words)
      CHECK(to_words(n.first) == n.second);

   CHECK(to_words(21) == "twenty one");
}
