#include <iostream>
#include <cassert>
using namespace std;

int gcd(int a, int b) {
  while (b != 0) {
    int temp = b;
    b = a % b;
    a = temp;
  }
  return a;
}

int main() {
  int x, y;
  while (cin >> x) {
    cin >> y;
    cout << gcd(x, y) << endl;
  }
}
