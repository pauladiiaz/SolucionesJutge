// No funciona
#include <iostream>

std::string EsPrimo(int numero) {  
  for (int i = 2; i < numero; ++i) {
    if (numero % i == 0) return "is not prime";
  }
  return "is prime";
}


int main() {
  int numero_primo;
  while (std::cin >> numero_primo) {
    int siguiente_numero_primo = numero_primo + 1;
    if (EsPrimo(numero_primo) == "is prime") {
      while (EsPrimo(siguiente_numero_primo) != "is prime") {
        siguiente_numero_primo++;
      }
    std::cout << siguiente_numero_primo << std::endl;
    } 
  }
}
