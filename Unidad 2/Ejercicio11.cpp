# DESCRIPCIÓN DEL PROBLEMA

 Realice un programa que permita crear un arreglo bidimencional que permita almacenar números enteros, que tenga un tamaño de 3*3 y que obtenga la sumatoria de filas y columnas y mostrar en pantalla.

# SOLUCIÓN DEL PROBLEMA

 #include<iostream>
 #include<stdlib.h>
 #include<stdio.h>
  using namespace std;
  int main(){
    int suma[3][3];
    int acum_fila; acum_col, tot;

    for(int i=0; i<3; i++){
        for(int j=0, j<3; j++){
            cout<<"Ingrese un numero";
            cin>>suma[i][j];
            acum_col+=suma[i][j];
            cout<<acum_col<<endl;
        }
    }
    for(int i=0; i<3; i++){
        cout<<"   "<<endl;
        for(int j=0, j<3; j++){
            cout<<suma[i][j];
        }
    }
  }