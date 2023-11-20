#include <iostream>
#include <iomanip>
using namespace std;

int main () {
  int numero1, numero2;
  while (cin >> numero1) {
    cin >> numero2;
    double armonico = 0.0;
    for (double i = numero2 + 1; i <= numero1; i++) {
      armonico += 1.0/i;
    }
    if (armonico < 0.0 ) armonico *= -1; 
    cout << fixed << setprecision(10) << armonico << endl;
  }
}
