#pragma once
#include <sstream>

namespace kata {

inline std::string to_roman(int n) {
   std::stringstream oss;
   if (n > 3) {
      n -= 4;
      oss << "IV";
   }
   while (n-- > 0)
      oss << "I";
   return oss.str();
}

}
