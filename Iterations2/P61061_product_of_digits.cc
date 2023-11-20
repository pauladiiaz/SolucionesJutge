#include <iostream>
using namespace std;

int main () {
  long long numero;
  bool primer0 = true;
  while (cin >> numero) {
    long long res = 1, m = numero;
    if (numero < 10) cout << "The product of the digits of " << numero << " is " << numero << '.' << endl;
      while (m >= 10) {
        res = 1;
        while (m >= 1) {
          res *= m%10;
          m/=10;
        }
        cout << "The product of the digits of " << numero << " is " << res << '.' << endl;
        numero = res;
        m = numero;
    }
    cout << "----------" << endl;
  }
}
