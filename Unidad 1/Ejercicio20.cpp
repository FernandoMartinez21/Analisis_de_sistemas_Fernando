# DESCRIPCION DEL PROBLEMA

 Realice un programa que permita la suma de los numeros pares e impares entre 1 y n.

 # SOLUCION DEL PROBLEMA

  #include<iostream>
  #include<stdlib.h>
  #include<stdio.h>
   using namespace std;

    int main() {
     int n, sumaPares = 0, sumaImpares = 0;

     cout << "Ingrese el valor de n: ";
     cin >> n;

     for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            sumaPares += i;
        } else {
            sumaImpares += i;
        }
     }

     cout << "La suma de los números pares entre 1 y " << n << " es: " << sumaPares << endl;
     cout << "La suma de los números impares entre 1 y " << n << " es: " << sumaImpares << endl;

     return 0;
}