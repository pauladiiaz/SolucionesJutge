#include <iostream>
using namespace std;


int number_of_digits(int n) {
  int digitos = 0;
  if (n == 0) return 1;
  while (n > 0) {
    n /= 10;
    digitos++;
  }
  return digitos;
}


int main() {
  int n;
  while (cin >> n) cout << number_of_digits(n) << endl;
  return 0;
}
