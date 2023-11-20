#include <iostream>
#include <iomanip>
#include <math.h>
#include <cmath>
using namespace std;

int main () {
  double numero;
  const double factor = M_PI / 180;
  while (cin >> numero) {
    cout << fixed << setprecision(6) << sin(numero*factor) << ' ' << cos(numero*factor) << endl;
  }
}
