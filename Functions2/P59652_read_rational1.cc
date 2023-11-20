#include <iostream>
using namespace std;


int gcd(int a, int b) {
  while (b != 0) {
    int aux = b;
    b = a % b;
    a = aux;
  }
  return a;
}

void read_rational(int& num, int& den) {
  char slash;
  cin >> num >> slash >> den;
  int factor_comun = gcd(num, den);
  if (factor_comun != 0) {
    num /= factor_comun;
    den /= factor_comun;
  }
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    int num, den;
    read_rational(num, den);
    cout << num << ' ' << den << endl;
  }
  return 0;
}