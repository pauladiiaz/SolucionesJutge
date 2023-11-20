// No funciona

#include <iostream>
using namespace std;


int sum_divisors(int x) {
  int suma = 0;
  for (int i = 1; i <= x; ++i) {
    if (x % i == 0) suma += i;
  }
  return suma;
}


int main () {
    int x;
    while (cin >> x) cout << sum_divisors(x) << endl;
    return 0;
}
