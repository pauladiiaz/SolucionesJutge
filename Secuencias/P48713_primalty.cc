// No funciona

#include <iostream>
#include <string>

std::string EsPrimo(int numero) {  
  for (int i = 2; i < numero; ++i) {
    if (numero % i == 0) return "is not prime";
  }
  return "is prime";
}


int main() {
  int numero_parametros;
  std::cin >> numero_parametros;
  for (int i = 0; i < numero_parametros; ++i) {
    int numero;
    std::cin >> numero;
    std::cout << numero << " " << EsPrimo(numero) << std::endl;
  }
}
