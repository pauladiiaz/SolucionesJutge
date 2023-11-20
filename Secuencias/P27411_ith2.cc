#include <iostream>
#include <vector>

int main() {
  int posicion_deseada;
  std::cin >> posicion_deseada;
  if (posicion_deseada == 0) {
    std::cout << "Incorrect position." << std::endl;
    return 0; 
  }
  int numero;
  std::vector<int> numeros;
  while (std::cin >> numero) {
    numeros.emplace_back(numero);
    if (numero == -1) break;
  }
  if (posicion_deseada > numeros.size()) {
    std::cout << "Incorrect position." << std::endl;
  } else {
    std::cout << "At the position " << posicion_deseada << " there is a(n) " << numeros[posicion_deseada - 1] << "." << std::endl;
  }
}
















//bobo el que lo lea