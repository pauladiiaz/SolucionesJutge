#include <iostream>
#include <cmath>

int main() {
  int numero, base;
  while (std::cin >> base) {
    std::cin >> numero;
    int logaritmo = log10(numero) / log10(base);
    std::cout << logaritmo << std::endl;
  }
}
