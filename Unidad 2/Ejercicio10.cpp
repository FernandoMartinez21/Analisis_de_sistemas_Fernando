# DESCRIPCIÓN DEL PROBLEMA

 Realice un programa que permita crear un arreglo bidimencional de 4 filas y 4 columnas y que permita ingresar datos del teclado, mostrandolos en pantalla.

# SOLUCIÓN DEL PROBLEMA

 #include<iostream>
 #include<stdlib.h>
 #include<stdio.h>
  using namespace std;
  int main(){
    int matriz[4][4];
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            cout<<"Ingrese el dato["<<(i+1)<<"] ["<<(j+1)<<"]"<<endl;
            cin>>matriz[i][j];
        }
    }
    for(int i=0, i<4; i++){
        cout<<"    "<<endl;
        for(int j=0, j<4; j++){
            cout<<matriz[i][j];
        }
    }
  }