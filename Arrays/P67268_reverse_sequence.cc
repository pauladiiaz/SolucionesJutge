#include <iostream>

int main() {
  int tamanio;
  while (std::cin >> tamanio) {
  if (tamanio > 0) {
    int numeros[tamanio];
    for (int i = 0; i < tamanio; ++i) {
      std::cin >> numeros[i];
    }
    std::cout << numeros[tamanio - 1];
    for (int i = tamanio - 2; i >= 0; --i) {
      std::cout << " " << numeros[i];
    }
    std::cout << std::endl;
  } else {
    std::cout << std::endl;
  }
  }
}