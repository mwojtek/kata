#pragma once
#include <sstream>


namespace kata {

namespace detail {

constexpr bool has_digit(int n, int m) noexcept {
   while (n > 0) {
      if (n%10 == m)
         return true;
      n /= 10;
   }
   return false;
}

constexpr bool is_fizz(int n) noexcept {
   return n%3 == 0 || has_digit(n, 3);
}

constexpr bool is_buzz(int n) noexcept {
   return n%5 == 0;
}

}

inline std::string fizzbuzz(int n) {
   std::ostringstream oss;
   if (detail::is_fizz(n))
      oss << "fizz";
   if (detail::is_buzz(n))
      oss << "buzz";
   return oss.str().empty() ? std::to_string(n) : oss.str();
}

}
