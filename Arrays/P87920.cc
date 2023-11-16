#include <iostream>
#include <vector>

bool EsIgualSuma(const std::vector<int>& numeros, const int& posicion) {
    int suma = 0;
    for (int i = 0; i < numeros.size(); ++i) {
        if (i != posicion) {
            suma += numeros[i];
        }
    }
    return suma == numeros[posicion];
}

int main() {
    int numero_parametros;
    while (std::cin >> numero_parametros) {

    std::vector<int> numeros(numero_parametros);
    for (int& numero : numeros) {
        std::cin >> numero;
    }

    bool es_igual = false;
    for (int i = 0; i < numeros.size(); ++i) {
        if (EsIgualSuma(numeros, i)) {
            es_igual = true;
            std::cout << "YES" << std::endl;
            break;
        }
    }

    if (!es_igual) {
        std::cout << "NO" << std::endl;
    }
    }

    return 0;
}
