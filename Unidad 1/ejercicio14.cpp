# DESCRIPCION
Realice un programa que realice un descuento de una compra si el total de la compra es mayor a Q. 5,000.00, con el descuento de 3%.
# SOLUCION DEL PROBLEMA
#include <iostream>
#include <stdlib.h>
#include<stdio.h>
using namespace std;

int main() {
    float totalCompra;
    float descuento = 0.03f;

    cout << "Ingrese el monto total de la compra en Q: ";
    cin >> totalCompra;

    if (totalCompra <= 5000.0f) {
        float montoDescuento = totalCompra * descuento;
        float totalConDescuento = totalCompra - montoDescuento;

        cout << "Se aplicó un descuento del 3%." << endl;
        cout << "Monto de descuento: Q" << montoDescuento << endl;
        cout << "Total con descuento: Q" << totalConDescuento << endl;
    } else {
        cout << "No se aplicó ningún descuento." << endl;
        cout << "Total a pagar: Q" << totalCompra << endl;
    }

    return 0;
}