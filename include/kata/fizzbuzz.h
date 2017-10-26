#pragma once
#include <sstream>


namespace kata {

namespace detail {

constexpr bool has_digit(int n, int m, int base) noexcept {
   while (n > 0) {
      if (n%base == m)
         return true;
      n /= base;
   }
   return false;
}

constexpr bool is_divisible(int n, int m) noexcept {
   return n%m == 0;
}

}

inline std::string fizzbuzz(int n, int fizz=3, int buzz=5, int base=10) {
   using namespace detail;
   std::ostringstream oss;
   if (is_divisible(n, fizz) || has_digit(n, fizz, base))
      oss << "fizz";
   if (is_divisible(n, buzz) || has_digit(n, buzz, base))
      oss << "buzz";
   return oss.str().empty() ? std::to_string(n) : oss.str();
}

}
