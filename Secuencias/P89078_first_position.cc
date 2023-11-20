#include <iostream>
#include <vector>

int main() {
  int numero, posicion = 1;
  while (std::cin >> numero) {
    if (numero % 2 == 0) {
      std::cout << posicion << std::endl;
      break;
    }
    posicion++;
  }
}