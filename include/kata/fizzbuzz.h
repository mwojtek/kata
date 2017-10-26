#pragma once
#include <sstream>


namespace kata {

namespace detail {

constexpr bool is_fizz(int n) noexcept {
   return n%3 == 0;
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
