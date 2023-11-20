// No funciona
/** 
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  * 
  * @file 
  * @author Israel Marrero Batista alu0101574714@ull.edu.es
  * @date Oct 3 2023
  * @brief 
  * 
  * @bug There are no known bugs
  * @see 
  *
  */
#include <iostream>

bool is_perfect(int n) {
    if (n <= 0) {return false;}
    int copia = n;
    int aux = n-1;
    int suma = 0;
    while (aux > 0) {
        if (n % aux == 0) { 
            suma += aux; 
        }
        aux--; 
    }
    return (copia == suma) ? true : false;
}

int main() {
    int numero;
    std::cin >> numero;
    std::cout << is_perfect(numero) << std::endl;
    return 0;
}
