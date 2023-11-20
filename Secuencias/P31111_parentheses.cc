#include <iostream>
#include <stack>
#include <string>

bool ComprobarParentesis(const std::string& entrada) {
  std::stack<char> pila;
  for (char caracter : entrada) {
    if (caracter == '(') {
      pila.push(caracter);
    } else if (caracter == ')') {
      if (pila.empty()) {
        return false; // No hay una pareja
      } else {
        pila.pop();
      }
    }
  }
  return pila.empty(); 
}

int main() {
  std::string entrada;
  std::cin >> entrada;
  if (ComprobarParentesis(entrada)) {
    std::cout << "yes" << std::endl;
  } else {
    std::cout << "no" << std::endl;
  }
}
