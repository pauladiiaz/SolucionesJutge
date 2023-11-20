#include <iostream>

int main() {
  int numero;
  bool primero = true;
  while (std::cin >> numero) {
    if (!primero) std::cout << std::endl;
    else primero = false;
    for (int i = 0; i < numero; ++i) {
      for (int j = 0; j < numero; ++j) {
        std::cout << numero;
      }
      std::cout << "\n";
    }
  }
}
