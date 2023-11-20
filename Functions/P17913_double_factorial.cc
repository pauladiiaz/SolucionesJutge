#include <iostream>
using namespace std;


int double_factorial(int n) {
  if ((n == 0) || (n == 1)) {
    return 1;
  } 
  int factorial = 1;
  // Doble factorial: n!! = n * (n-2) * (n-4)
  while (n > 0) {
    factorial *= n;
    n -= 2;
  }
  return factorial;
}
