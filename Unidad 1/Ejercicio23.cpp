# DESCRIPCION DEL PROBLEMA

 Del programa anterior (22) obtener los siguientes datos:
  1.Obtener la suma de todos los numeros ingresados.
  2.Obtener la multiplicacion de todos los numeros ingresados.
  3.Obtener el promedio de todos los numeros ingresados.
 Realizarlo con do_while.

# SOLUCION DEL PROBLEMA

 #include<iostream>
 #include<stdlib.h>
 #include<stdio.h>
 using namespace std;

  int main() {
    char entrada;
    int numero, suma = 0, multiplicacion = 1;
    int contador = 0 ;
    float promedio;
    do {
        cout << "Ingrese un numero o 'x' para finalizar: ";
        cin >> entrada;

        if (entrada != 'x') {
            numero = entrada - '0';
            cout << "Numero ingresado: " << numero << endl;

            suma += numero;
            multiplicacion *= numero;
            contador++;
        }

    } while (entrada != 'x');

    cout << "Programa finalizado." << endl;

    if (contador > 0) {
        promedio = static_cast<double>(suma) / contador;

        cout << "Suma de los numeros ingresados: " << suma << endl;
        cout << "Multiplicacion de los numeros ingresados: " << multiplicacion << endl;
        cout << "Promedio de los numeros ingresados: " << promedio << endl;
    } else {
        cout << "No se ingresaron numeros." << endl;
    }

    return 0;
}