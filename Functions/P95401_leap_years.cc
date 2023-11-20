#include <iostream>

bool is_leap_year(int year) {
  if (year < 1800 || year > 9999) return false;
  if ((year % 4 == 0) && (year % 100 != 0)) {
    return true;
  } else if (year % 400 == 0) {
    return true;
  } else {
    return false;
  }
}

int main() {
    int year;
    std::cin >> year;
    std::cout << is_leap_year(year) << std::endl;
}
