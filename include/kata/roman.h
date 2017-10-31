#pragma once
#include <cstring>
#include <experimental/array>
#include <sstream>

namespace kata {

namespace detail {

constexpr auto roman_digits = std::experimental::make_array(
      std::make_pair(1000, "M"), std::make_pair(900, "CM"),
      std::make_pair(500, "D"), std::make_pair(400, "CD"),
      std::make_pair(100, "C"), std::make_pair(90, "XC"),
      std::make_pair(50, "L"), std::make_pair(40, "XL"),
      std::make_pair(10, "X"), std::make_pair(9, "IX"),
      std::make_pair(5, "V"), std::make_pair(4, "IV"),
      std::make_pair(1, "I"));

struct not_a_roman_numeral_error: std::runtime_error {
   not_a_roman_numeral_error():
      std::runtime_error("not a roman numeral") {}
};

}


namespace v0 {

inline std::string to_roman(int n) noexcept {
   std::stringstream oss;
   for (const auto& d: detail::roman_digits)
      while (n >= d.first) {
         n -= d.first;
         oss << d.second;
      }
   return oss.str();
}

}


inline namespace v1 {

inline std::string to_roman(int n) {
   if (n < 0)
      throw detail::not_a_roman_numeral_error();
   return v0::to_roman(n);
}

}


inline int from_roman(const std::string& str) {
   auto n = 0;
   auto i = 0u;
   for (auto j = 0u; j < detail::roman_digits.size(); ++j) {
      const auto& digit = detail::roman_digits.at(j);
      auto len = std::strlen(digit.second);
      auto cnt = 0;
      while (!str.compare(i, len, digit.second)) {
         i += len;
         n += digit.first;
         if (j && ++cnt >= 3)
            break;
         if (len > 1) {
            j += 3;
            break;
         }
      }
   }
   if (i != str.length())
      throw detail::not_a_roman_numeral_error();
   return n;
}

}
