#include <iostream>
using namespace std;

bool is_leap_year(int year) {
  return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

bool is_valid_date(int d, int m, int y) {
  if (y < 1800 || y > 9999 || m < 1 || m > 12 || d < 1) return false; 
  int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

  if (is_leap_year(y)) {
    daysInMonth[2] = 29;
  }
  return (d >= 1 && d <= daysInMonth[m]);
}

int main() {
  int d, m, a;
  while (cin >> d >> m >> a)
    cout << (is_valid_date(d, m, a) ? "true" : "false") << endl;
  return 0;
}