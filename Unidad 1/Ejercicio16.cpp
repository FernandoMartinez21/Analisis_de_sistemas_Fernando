# DESCRIPCION
Los clientes de un hospital tiene una credencial en la cual este registra una categoria que depende de los ingresos
economicos del nuclo familiar del ciente tiendo la categoriahacer hacen un descuento cuando deben de pagar su cuenta la siguiente cuenta 
clave                         descuento 
1                               35%
2                               22%
3                               15%
4                               5%
# SOLUCION DEL PROBLEMA
#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int main() {
    int clave;
    float cuenta, descuento;


    cout << "Ingrese la clave de categoría (1, 2, 3 o 4): ";
    cin >> clave;

    if (clave < 1 || clave > 4) {
        cout << "Clave de categoría no válida." << endl;
        return 1;
    }

    cout << "Ingrese la cantidad total de la cuenta: $";
    cin >> cuenta;


    switch (clave) {
        case 1:
            descuento = 0.35 * cuenta;
            break;
        case 2:
            descuento = 0.22 * cuenta;
            break;
        case 3:
            descuento = 0.15 * cuenta;
            break;
        case 4:
            descuento = 0.05 * cuenta;
            break;
    }


    float montoFinal = cuenta - descuento;


    cout << "Descuento aplicado: $" << descuento << endl;
    cout << "Monto a pagar despues del descuento: $" << montoFinal << endl;

    return 0;
}
