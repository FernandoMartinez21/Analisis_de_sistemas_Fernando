# DESCRIPCIÓN DEL PROBLEMA

 Realice un programa que permita crear un arreglo de 5 índices donde el índice 0 vale 8, el índice 1 vale 50, el índice 2 vale 85, el índice 3 vale 666, donde el índice 4 almacene la sumatoria de los índices anteriores.

# SOLUCIÓN DEL PROBLEMA

 #include<iostream>
 #include<stdlib.h>
 #include<stdio.h>
  using namespace std;
  int main(){
    int numeros[5]={8,50,85,666,0};
    
    numeros[4]=numeros[0]+numeros[1]+numeros[2]+numeros[3];

    cout<<"La sumatoria de los indices es de: "<<numeros[4]<<endl;

    system("Pause");
    
  }