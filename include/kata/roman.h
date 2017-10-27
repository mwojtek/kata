#pragma once
#include <experimental/array>
#include <sstream>

namespace kata {

inline std::string to_roman(int n) {
   constexpr auto nums = std::experimental::make_array(std::make_pair(5, "V"),
         std::make_pair(4, "IV"), std::make_pair(1, "I"));
   std::stringstream oss;
   for (const auto& d: nums) {
      while (n >= d.first) {
         n -= d.first;
         oss << d.second;
      }
   }
   return oss.str();
}

}
