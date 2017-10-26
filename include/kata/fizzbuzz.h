#pragma once
#include <string>


namespace kata {

inline std::string fizzbuzz(int n) {
   return n%3 ? "buzz" : "fizz";
}

}
