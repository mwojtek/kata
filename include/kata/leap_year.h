#pragma once

namespace kata {

constexpr bool is_leap_year(int year) noexcept {
   return year%4 == 0 && (year%100 != 0 || year%400 == 0);
}

}
