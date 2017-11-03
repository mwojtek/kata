#pragma once
#include <sstream>

namespace kata {

std::string diamond(char c) {
   std::ostringstream oss;
   if (c >= 'A') {
      auto dist = c-'A';
      while (dist--)
         oss << ' ';
      oss << 'A';
      if (c > 'A')
         oss << '\n';
   }
   return oss.str();
}

}
