#include <iostream>
using namespace std;


void factor(int n, int& f, int& q) {
  f = 1, q = 0;
  for (int i = 2; i <= n; ++i) {
    int count = 0;
    while (n % i == 0) {
      n /= i;
      ++count;
    }

    if (count > q || (count == q && i < f)) {
      f = i;
      q = count;
    }
  }
}


int main() {
  int n;
  while (cin >> n) {
    int f = -1, q = 1000;
    factor(n, f, q);
    cout << f << ' ' << q << endl;
  }
  return 0;
}