#include <iostream>
#include <string>
#include <vector>

int main() {
  std::string palabra;
  int numero;
  std::cin >> numero;
  std::vector<std::string> palabras;
  for (int i = 1; i <= numero; ++i) {
    std::cin >> palabra;
    palabras.emplace_back(palabra);
  }
  for (int i = palabras.size() - 1; i >= 0; --i) {
    for (int j = palabras[i].size() - 1; j >= 0; --j) {
      std::cout << palabras[i][j];
    }
    std::cout << std::endl;
  }
}