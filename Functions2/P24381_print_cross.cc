#include <iostream>
using namespace std;


void cross(int n, char c) {
  for (int i = 0; i < (n - 1) / 2; ++i) {
    for (int j = 0; j < (n - 1) / 2; ++j) {
      std::cout << " ";
    }
    std::cout << c << std::endl;
  }
  for (int i = 0; i < n; ++i) {
    std::cout << c;
  }
  std::cout << std::endl;
  for (int i = 0; i < (n - 1) / 2; ++i) {
    for (int j = 0; j < (n - 1) / 2; ++j) {
      std::cout << " ";
    }
    std::cout << c << std::endl;
  }
}

int main() {
  int n;
  char c;
  while (cin >> n >> c) cross(n, c);
  return 0;
}