# DESCRIPCION DEL PROBLEMA

  Realice un programa que permita ingresar numeros pero al ingresar la letra x finalice la insercion de numeros, y muestre en la pantalla programa finalizado.
  Realizarlo con un do-while.

# SOLUCION DEL PROBLEMA
 
 #include <iostream>
#include<stdlib.h>
#include<stdio.h>
 using namespace std;

int main (){
    char entrada;
    int numero;
    do {
        cout << "Ingrese un numero o 'x' para finalizar: ";
        cin >> entrada;

        if (entrada != 'x') {
            numero = entrada - '0';
            cout << "Numero ingresado: " << numero << endl;
        }

    } while (entrada != 'x');

    cout << "Programa finalizado." << endl;

    return 0;
}