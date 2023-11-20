#include <iostream>
using namespace std;


bool is_palindromic(int n) {
  std::string numero = std::to_string(n);
  int j = numero.length() - 1;
  int i = 0;
  while (j >= i) {
    if (numero[i] != numero[j]) return false;
    i++;
    j--;
  }
  return true;
}


int main() {
    int n;
    while (cin >> n) cout << (is_palindromic(n) ? "true" : "false") << endl;
    return 0;
}
