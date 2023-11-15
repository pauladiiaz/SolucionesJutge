#include <iostream>
using namespace std;


void count_and_add(int& num, int& sum) {
  num = 0, sum = 0; // Initialize the sum of numbers

  int numero_actual;
  while (cin >> numero_actual) {
    num++;  
    sum += numero_actual;
  }
}


int main() {
  int num = -1;
  int sum = -33;
  count_and_add(num, sum);
  cout << num << ' ' << sum << endl;
  return 0;
}