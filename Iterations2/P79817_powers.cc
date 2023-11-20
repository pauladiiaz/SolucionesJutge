#include <iostream>

int main() {
  int numero, power;
  while (std::cin >> numero) {
    std::cin >> power;
    if ((numero == 0) && (power == 0)) {
      std::cout << 1 << std::endl;
    } else {
      int resultado = 1;
      for (int i = 0; i < power; ++i) {
        resultado *= numero;
      }
      std::cout << resultado << std::endl;
    }
  }
  return 0;
}
