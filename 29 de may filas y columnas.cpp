#include <iostream>

int main() {
    const int fil = 4;
    const int colum = 3;
    int tabla[fil][colum];

    std::cout << "Ingrese los valores de la tabla" << std::endl;
    for (int i = 0; i < fil; ++i) {
        for (int j = 0; j < colum; ++j) {
           std::cout << "Ingrese el num en la fila " << i + 1 << " y columna " << j + 1 << ": ";
            std::cin >> tabla[i][j];
        }
    }

    int suma_columnas[colum] = {0};
    int mayor_suma = 0;
    for (int j = 0; j < colum; ++j) {
        for (int i = 0; i < fil; ++i) {
            suma_columnas[j] += tabla[i][j];
        }
        if (suma_columnas[j] > mayor_suma) {
            mayor_suma = suma_columnas[j];
        }
    }
    std::cout << "La suma mayor de las columnas es: " << mayor_suma << std::endl;

    return 0;
}
