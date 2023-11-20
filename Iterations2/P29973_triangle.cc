#include <iostream>

int main() {
  int tamanio; 
  std::cin >> tamanio;
    
  for (int i = 1; i <= tamanio; i++) {
    for (int j = 1; j <= i; j++) {
      std::cout << '*';
    }
    std::cout << std::endl;
  }
    
  return 0;
}
