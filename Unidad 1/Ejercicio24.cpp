# DESCRIPCION DEL PROBLEMA

Realice un programa que permita mostrar en pantalla la edad de una persona ingresando el año de nacimiento.
Utilice el método de funciones.

# SOLUCION DEL PROBLEMA

  #include<iostream>
  #include<stdlib.h>
  #include<stdio.h>
   using namespace std;
   int BuscaEdad(int a_ac, int naci){
    int edad_Actual;
    edad_Actual=a_ac-naci;
    return edad_Actual;
   }
   main(){
    int actual, nacimiento;
    cout<<"Ingrese anio actual: ";
    cin>>actual;
    cout<<"Ingrese anio de nacimiento: ";
    cin>>nacimiento;
    cout<<"Su edad es de: "<<BuscaEdad(actual, nacimiento);

    System("Pause");
   }