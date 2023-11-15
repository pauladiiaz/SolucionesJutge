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

bool read_rational(int& num, int& den) {
  char slash; 
  if (!(cin >> num >> slash >> den)) {
    return false;
  }

  int commonFactor = gcd(num, den);
  if (commonFactor != 0) {
    num /= commonFactor;
    den /= commonFactor;
  }
  return true; // Return true if a rational number is successfully read
}


int main() {
  int num, den;
  while (read_rational(num, den)) cout << num << ' ' << den << endl;
  return 0;
}