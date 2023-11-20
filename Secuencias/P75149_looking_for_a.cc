#include <iostream>
#include <string>

int main() {
  std::string entrada;
  bool hay_a = false;
  while (std::cin >> entrada) {
    for (const auto& caracter : entrada) {
      if (caracter == 'a') {
        hay_a = true;
        break;
      }
    }
    if (hay_a) break;
  }
  (hay_a) ? std::cout << "yes": std::cout << "no";
  std::cout << std::endl;
}