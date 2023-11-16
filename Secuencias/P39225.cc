#include <iostream>

int main() {
  int posicion, contador = 1, numero;
  std::cin >> posicion;
  while (contador <= posicion) {
    std::cin >> numero;
    if (contador == posicion) {
        std::cout << "At the position " << posicion << " there is a(n) " << numero << "." << std::endl;
        break;
    } 
    contador++;
  }
}