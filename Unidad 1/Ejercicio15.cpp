# DESCRIPCION
contruya un programa que permita las operaciones aritmeticas elementales segun la siguiente tabla 
clave         operacion
+               suma
-               resta 
*             multiplicacion
/            division 
%             modulo
# SOLUCION DEL PROBLEMA
#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int main() {
    char clave;
    int a, b, resultado;

    cout << "Ingrese la clave de la operación (+, -, *, /, %): ";
    cin >> clave;

    cout << "Ingrese el primer número: ";
    cin >> a;

    cout << "Ingrese el segundo número: ";
    cin >> b;

    if (clave == '+') {
        resultado = a + b;
        cout << "Resultado de la suma: " << resultado << endl;
    } else if (clave == '-') {
        resultado = a - b;
        cout << "Resultado de la resta: " << resultado << endl;
    } else if (clave == '*') {
        resultado = a * b;
        cout << "Resultado de la multiplicación: " << resultado << endl;
    } else if (clave == '/') {
        if (b != 0) {
            resultado = a / b;
            cout << "Resultado de la división: " << resultado << endl;
        } else {
            cout << "Error: División por cero." << endl;
        }
    } else if (clave == '%') {
        if (b != 0) {
            resultado = a % b;
            cout << "Resultado del módulo: " << resultado << endl;
        } else {
            cout << "Error: Módulo por cero." << endl;
        }
    } else {
        cout << "Clave de operación no válida." << endl;
    }

    return 0;
}

