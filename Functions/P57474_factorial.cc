#include <iostream>
using namespace std;

int factorial(int n) {
  int factorial = 1;
  for (int i = 1; i <= n; ++i) {
    factorial *= i;
  }
  return factorial;
}

int main()
{
    int x;
    while (cin >> x) {
        cout << factorial(x) << endl;
    }
    return 0;
}
