#include <iostream>

int main() {
  int dimension;
  bool primero = true;
  std::cin >> dimension;
  for (int i = 0; i < dimension; ++i) {
    int numero = 0;
    if (!primero) std::cout << std::endl;
    else primero = false;
    for (int j = 0; j < dimension; ++j) {
      for (int k = 0; k < dimension; ++k) {
        std::cout << numero;
        if (numero == 9) numero = 0;
        else numero++;
      }
      std::cout << std::endl;
    }
  }
}
