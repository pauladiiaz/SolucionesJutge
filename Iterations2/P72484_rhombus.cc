#include <iostream>

int main() {
  int tamanio;
  std::cin >> tamanio;
  for (int i = 1; i <= tamanio; i++) {
    for (int j = 1; j <= tamanio - i; j++) {
      std::cout << " ";
    }
    for (int j = 1; j <= 2 * i - 1; j++) {
      std::cout << "*";
    }
    std::cout << std::endl;
  }
  for (int i = tamanio - 1; i >= 1; i--) {
    for (int j = 1; j <= tamanio - i; j++) {
      std::cout << " ";
    }
    for (int j = 1; j <= 2 * i - 1; j++) {
      std::cout << "*";
    }
    std::cout << std::endl;
  }
  return 0;
}
