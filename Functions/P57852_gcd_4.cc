#include <iostream>
using namespace std;

int gcd(int a, int b) {
  while (b != 0) {
    int temp = b;
    b = a % b;
    a = temp;
  }
  return a;
}

int gcd4(int a, int b, int c, int d) {
  int gcd_ab = gcd(a, b);
  int gcd_cd = gcd(c, d);
  return gcd(gcd_ab, gcd_cd);
}


int main() {
  int a, b, c, d;
  while (cin >> a) {
    cin >> b >> c >> d;
    cout << gcd4(a, b, c, d) << endl;
  }
}
