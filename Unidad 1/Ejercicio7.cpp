# DESCRIPCION 
Realice un programa que permita calcular el promedio de x notas utilizando siclo for 
# SOLUCION DEL PROBLEMA 
#include <iostream>

int main() {
    int numNotas;
    int total = 0;

    std::cout << "Ingrese el número de notas: ";
    std::cin >> numNotas;

    for (int i = 0; i < numNotas; ++i) {
        int nota;
        std::cout << "Ingrese la nota " << i+1 << ": ";
        std::cin >> nota;
        total += nota;
    }

    int promedio = total / numNotas;
    std::cout << "El promedio de las " << numNotas << " notas es: " << promedio << std::endl;

    return 0;
}
