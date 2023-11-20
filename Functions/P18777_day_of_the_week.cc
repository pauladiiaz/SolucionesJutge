// No funciona

#include <iostream>
#include <string>
using namespace std;

string day_of_the_week(int d, int m, int y) {
  if (m < 3) {
    m += 12;
    y--;
  }
  int c = y / 100;
  int a = y % 100;
  int f = static_cast<int>((2.6 * m - 0.2) + d + a + a / 4 + c / 4 - 2 * c) % 7;
  f = (f + 7) % 7;

  std::string days[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
  return days[f];
}

int main()
{
    int d, m, a;
    while (cin >> d >> m >> a) {
        cout << day_of_the_week(d, m, a) << endl;
    }
    return 0;
}
