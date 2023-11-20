#include <iostream>

int main() {
  int numero;
  while (std::cin >> numero) {
    int contador = 0;
    while (numero > 1) {
      if (numero % 2 == 0) {
        numero /= 2;
      } else {
        numero *= 3;
        numero++;
      }
      contador++;
    }
    std::cout << contador << std::endl;
  }
}
