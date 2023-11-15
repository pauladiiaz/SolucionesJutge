#include <iostream>
#include <string>

int main() {
  std::string palabra;
  while (std::cin >> palabra) {
    for (int i = palabra.length() - 1; i >= 0; --i) {
      std::cout << palabra[i];
    }
    std::cout << std::endl;
  }
}