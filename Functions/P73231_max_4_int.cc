#include <iostream>
using namespace std;

int Mayor2(int a, int b) {
  int mayor = a;
  if (b > mayor) mayor = b;
  return mayor;
}

int max4(int a, int b, int c, int d) {
  return (Mayor2(Mayor2(a, b), Mayor2(c, d)));
}


int main() {
    int a, b, c, d;
    while (cin >> a >> b >> c >> d) {
        cout << max4(a, b, c, d) << endl;
    }
    return 0;   
}
