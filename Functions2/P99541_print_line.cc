#include <iostream>
using namespace std;


void print(int s, char c, int n) {
  for (int i = 0; i < s; ++i) {
    std::cout << " ";
  }
  for (int i = 0; i < n; ++i) {
    std::cout << c;
  }
  std::cout << std::endl;
}


int main() {
  int s, n;
  char c;
  while (cin >> s >> c >> n) print(s, c, n);
  return 0;
}