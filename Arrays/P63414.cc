#include <iostream>
#include <vector>
#include <map>

void ContarApariciones(const std::vector<int>& numeros) {
    std::map<int, int> conteo;

    for (int numero : numeros) {
        ++conteo[numero];
    }

    for (const auto& par : conteo) {
        std::cout << par.first << " : " << par.second << std::endl;
    }
}

int main() {
    int numero_parametros;
    std::cin >> numero_parametros;

    std::vector<int> numeros(numero_parametros);

    for (int i = 0; i < numero_parametros; ++i) {
        int nuevo_numero;
        std::cin >> nuevo_numero;
        numeros[i] = nuevo_numero;
    }

    ContarApariciones(numeros);

    return 0;
}
