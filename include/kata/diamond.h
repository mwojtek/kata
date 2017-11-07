#pragma once
#include <sstream>

namespace kata {

std::string diamond(char c) {
   std::ostringstream oss;
   const auto n = c-'A';
   for (auto i = 0; i <= n; ++i) {
      for (auto j = n-i; j; --j)
         oss << ' ';
      const char lett = 'A'+i;
      if (i)
         oss << '\n' << lett << ' ';
      oss << lett;
   }
   return oss.str();
}

}
