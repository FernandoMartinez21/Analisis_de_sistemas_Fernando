# DESCRIPCION
Realice un programa que permita conbertir una cantidad x de 10 piesa kilometros tomando en cuenta lo siguiente
1km= 3208.84
# SOLUCION DEL PROBLEMA
#include <iostream>

int main() {
    using namespace std;

    float pies;
    float kilometros;

    cout << "Ingrese una cantidad en pies: ";
    cin >> pies;

    kilometros = pies / 3208.84;  // Convertir pies a kilómetros

    cout << "La cantidad en kilómetros es: " << kilometros << endl;

    return 0;
}
