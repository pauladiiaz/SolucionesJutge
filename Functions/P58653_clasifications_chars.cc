#include <iostream>
#include <string>
#include <vector>

void ImprimirLinea(char caracter, std::string tipo, bool es_tipo) {
  std::cout << tipo << "('" << caracter << "') = ";
  (es_tipo) ? std::cout << "true" : std::cout << "false";
  std::cout << std::endl;
}

bool ComprobarLetra(char caracter) {
  int ascii = static_cast<int>(caracter);
  return (((ascii >= 65) && (ascii <= 90)) || ((ascii >= 97) && (ascii <= 122))) ? true : false;
}

bool ComprobarNumero(char caracter) {
  int ascii = static_cast<int>(caracter);
  return ((ascii >= 48) && (ascii <= 57)) ? true : false;
}

bool ComprobarVocal(char caracter) {
  std::vector<char> vocales = {'a', 'A', 'e', 'E', 'i', 'I', 'o', 'O', 'u', 'U'};
  for (int i = 0; i < vocales.size(); ++i) {
    if (vocales[i] == caracter) return true;
  }
  return false;
}

bool ComprobarConsonante(char caracter) {
  if (ComprobarLetra(caracter)) {
    std::vector<char> vocales = {'a', 'A', 'e', 'E', 'i', 'I', 'o', 'O', 'u', 'U'}; 
    for (int i = 0; i < vocales.size(); ++i) {
      if (vocales[i] == caracter) return false;
    }
    return true;
  } else {
    return false;
  }
}

bool ComprobarMayuscula(char caracter) {
  int ascii = static_cast<int>(caracter);
  return ((ascii >= 65) && (ascii <= 90)) ? true : false;
}

bool ComprobarMinuscula(char caracter) {
  int ascii = static_cast<int>(caracter);
  return (((ascii >= 97) && (ascii <= 122))) ? true : false;
}

int main() {
  char entrada;
  std::cin >> entrada;
  ImprimirLinea(entrada, "letter", ComprobarLetra(entrada));
  ImprimirLinea(entrada, "vowel", ComprobarVocal(entrada));
  ImprimirLinea(entrada, "consonant", ComprobarConsonante(entrada));
  ImprimirLinea(entrada, "uppercase", ComprobarMayuscula(entrada));
  ImprimirLinea(entrada, "lowercase", ComprobarMinuscula(entrada));
  ImprimirLinea(entrada, "digit", ComprobarNumero(entrada));

