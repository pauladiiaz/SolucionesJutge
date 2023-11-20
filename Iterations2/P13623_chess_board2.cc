#include <iostream>
#include <string>

int main() {
  int numero_filas, numero_columnas, suma = 0;
  std::string numero;
  std::cin >> numero_filas >> numero_columnas;
  
  for (int i = 0; i < numero_filas; ++i) {
    std::cin >> numero;
    for (int j = 0; j < numero_columnas; ++j) {
      if ((i % 2 == 0) && (j % 2 == 0)) {
        int digito = std::stoi(std::string(1, numero[j]));
        suma += digito;
      } else if ((i % 2 != 0) && (j % 2 != 0)) {
        int digito = std::stoi(std::string(1, numero[j]));
        suma += digito;
      }
    }
  }
  std::cout << suma << std::endl;
}
