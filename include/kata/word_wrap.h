#pragma once
#include <string>


namespace kata {


inline void word_wrap_in_place(std::string& txt, unsigned n) {
   for (auto i = n; i < txt.size(); ) {
      auto s = txt.rfind(' ', i);
      if (s ==  std::string::npos)
         s = txt.find(' ', i);
      if (s == std::string::npos)
         break;
      txt.at(s) = '\n';
      i += s;
   }
}


inline std::string word_wrap(std::string txt, unsigned n) {
   word_wrap_in_place(txt, n);
   return txt;
}


}
