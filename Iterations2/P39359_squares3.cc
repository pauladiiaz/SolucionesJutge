#include <iostream>

int main() {
  int dimension;
  bool primero = true;
  int numero = 0;
  while (std::cin >> dimension) {
    if (!primero) std::cout << std::endl;
    else primero = false;  
    for (int i = 0; i < dimension; ++i) {
      for (int j = 0; j < dimension; ++j) {
        std::cout << numero;
        if (numero == 9) numero = 0;
        else ++numero;  
      }
      std::cout << std::endl;
    }
  }
}
