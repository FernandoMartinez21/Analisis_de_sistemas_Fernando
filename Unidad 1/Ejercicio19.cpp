# DESCRIPCION DEL PROBLEMA

 Realice un programa que permita mostrar el resultado de una potencia de base n y exponente x, utilizando ciclo while.

 # SOLUCION DEL PROBLEMA

 #include<iostream>
 #include<stdlib.h>
 #include<stdio.h>
  using namespace std;

   int main() {
    int n, x;
    int resultado = 1; 
    int contador = 0;

    cout << "Ingrese la base (n): ";
    cin >> n;

    cout << "Ingrese el exponente (x): ";
    cin >> x;

    while (contador < x) {
        resultado *= n; 
        contador++;
    }

    cout << "El resultado de " << n << " elevado a la " << x << " es: " << resultado << endl;

    return 0;
}