#include <iostream>

int main() {
  int numero_original;
  while (std::cin >> numero_original) {
    int numero = numero_original;
    int suma = 0;
    while (numero != 0) {
      suma += numero % 10;
      numero /= 10;
    }
    std::cout << "The sum of the digits of " << numero_original << " is " << suma << "." << std::endl;
  }
}
