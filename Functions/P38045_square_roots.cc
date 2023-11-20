#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
  int numero;
  while (std::cin >> numero) {
    std::cout << numero * numero << " ";
    std::cout << std::fixed << std::setprecision(6) << sqrt(numero) << std::endl;
  }
}
