#pragma once
#include <algorithm>
#include <experimental/array>
#include <string>

namespace kata {

namespace detail {

constexpr const auto numbers_and_words = std::experimental::make_array(
      std::make_pair(20, "twenty"), std::make_pair(19, "nineteen"), std::make_pair(18, "eighteen"), std::make_pair(17, "seventeen"), std::make_pair(16, "sixteen"), std::make_pair(15, "fifteen"), std::make_pair(14, "fourteen"), std::make_pair(13, "thirteen"), std::make_pair(12, "twelve"), std::make_pair(11, "eleven"), std::make_pair(10, "ten"), std::make_pair(9, "nine"), std::make_pair(8, "eight"), std::make_pair(7, "seven"), std::make_pair(6, "six"), std::make_pair(5, "five"), std::make_pair(4, "four"), std::make_pair(3, "three"), std::make_pair(2, "two"), std::make_pair(1, "one"));
}


inline std::string to_words(int n) noexcept {
   auto naw = std::find_if(detail::numbers_and_words.begin(),
         detail::numbers_and_words.end(), [=](const auto& nw) {
            return n == nw.first;
         });
   return naw != detail::numbers_and_words.end() ? naw->second : "";
}

}
