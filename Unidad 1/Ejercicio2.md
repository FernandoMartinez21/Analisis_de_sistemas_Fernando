# DESCRIPCION
realiza un programa que permita identificar un numero entero ingresado de la siguiente manera
si es par 
si es inpar 
si es nulo 


# SOLUCION DEL PROBLEMA  

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

string identificarNumero(int numero) {
    if (numero == 0) {
        return "nulo";
    } else if (numero % 2 == 0) {
        return "par";
    } else {
        return "impar";
    }
}

int main() {
    int numeroIngresado;
    cout << "Ingresa un número entero: ";
    
    if (cin >> numeroIngresado) {
        string resultado = identificarNumero(numeroIngresado);
        cout << "El número " << numeroIngresado << " es " << resultado << "." << endl;
    } else {
        cout << "Error: Ingresa un valor entero válido." << endl;
    }
    
    return 0;
}

