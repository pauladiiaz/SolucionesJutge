#include <iostream>

using namespace std;

int main() {
  int n, suma = 0;
  string numero;
  cin >> n;
  int k = n - 1; 

  for (int i = 0; i < n; ++i) {
    cin >> numero;
    if (i != k) {
      int digito = numero[i] - '0';
      suma += digito;
      digito = numero[k] - '0';
      suma += digito;
    } else {
      int digito = numero[i] - '0';
      suma += digito; 
    }
    --k;
  }
  cout << suma << endl;
}
