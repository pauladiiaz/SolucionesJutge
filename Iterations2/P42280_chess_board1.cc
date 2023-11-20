#include <iostream>
#include <string>

int main() {
  int numero_filas, numero_columnas;
  long long suma{0};
  std::string numero;
  std::cin >> numero_filas >> numero_columnas;
  for (int i = 1; i <= numero_filas; ++i) {
    std::cin >> numero;
    for (auto digito : numero) {
      std::string digito_string{digito};
      suma += std::stoi(digito_string); 
    }
  }
  std::cout << suma << std::endl;
}
