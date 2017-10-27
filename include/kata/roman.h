#pragma once
#include <sstream>

namespace kata {

inline std::string to_roman(int n) {
   std::stringstream oss;
   while (n-- > 0)
      oss << "I";
   return oss.str();
}

}
