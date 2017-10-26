#pragma once
#include <sstream>


namespace kata {

inline std::string fizzbuzz(int n) {
   std::ostringstream oss;
   if (n%3 == 0)
      oss << "fizz";
   if (n%5 == 0)
      oss << "buzz";
   return oss.str();
}

}
