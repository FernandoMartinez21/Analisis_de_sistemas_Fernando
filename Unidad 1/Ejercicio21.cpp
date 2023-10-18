# DESCRIPCION DEL PROBLEMA

 Realice un programa que permita ingresar n numeros y que muestre en pantalla cuantos pares e impares ingresamos.

 # SOLUCION DEL PROBLEMA

 #include<iostream>
 #include<stdlib.h>
 #include<stdio.h>
  using namespace std;

   int main() {
    int n, num, pares = 0, impares = 0;

    cout << "Ingrese la cantidad de numeros a ingresar: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Ingrese el numero " << i + 1 << ": ";
        cin >> num;

        if (num % 2 == 0) {
            pares++;
        } else {
            impares++;
        }
    }

    cout << "Cantidad de numeros pares: " << pares << endl;
    cout << "Cantidad de numeros impares: " << impares << endl;

    return 0;
}