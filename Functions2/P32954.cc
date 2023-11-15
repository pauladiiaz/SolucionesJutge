#include <iostream>
using namespace std;


void sort3(int& a, int& b, int& c) {
  if (a > b) {
    swap(a, b);
  }
  if (b > c) {
    swap(b, c);
  }
  if (a > b) {
    swap(a, b);
  }
}


int main() {
  int x, y, z;
  while (cin >> x >> y >> z) {
    sort3(x, y, z);
    cout << x << ' ' << y << ' ' << z << endl;
  }
  return 0;
}