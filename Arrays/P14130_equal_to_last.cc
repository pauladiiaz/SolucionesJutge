#include <iostream>

int main() {
  int tamanio;
  std::cin >> tamanio;
  int numeros[tamanio];
  for (int i = 0; i < tamanio; ++i) {
    std::cin >> numeros[i];
  }
  int ultimo_elemento = numeros[tamanio - 1];
  int contador = 0;
  for (int i = 0; i < tamanio - 1; ++i) {
    if (numeros[i] == ultimo_elemento) contador++;
  }
  std::cout << contador << std::endl;
}