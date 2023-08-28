# DESCRIPCION 
Realice un programa que permita mostrar en pantalla el resultado de la siguiente ecuacion (36*9/2)²
# SOLUCION DEL PROKBLEMA 
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

int main() {
    double resultado = (36 * 9 / 2) * (36 * 9 / 2);  // Calculamos el resultado de la ecuación

    cout << "El resultado de la ecuación (36 * 9 / 2)² es: " << resultado << endl;

    return 0;
}
