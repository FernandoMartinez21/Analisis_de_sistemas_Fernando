# DESCRIPCIÓN DEL PROBLEMA

 Realice un programa que permita crear una matriz de 3*3 y que en pantalla me muestre el promedio de los datos ingresados por el usuario.

# SOLUCIÓN DEL PROBLEMA

#include<iostream>
 using namespace std;
 int main(){
    int suma[3][3];
    int acum_fila, acum_col;
    float prom;

    for(int i=0, i<3; i++){
        for(int j=0; j<3; j++){
            cout<<"Ingrese un dato: "<<endl;
            cin>>suma[i][j];
            acum_col+=suma[i][j];
            prom/=suma[i][j];
        }
    }
    cout<<"El resultado de la suma ingresada es de: "<<acum_col<<endl;
    cout<<"El promedio de las suma de los numeros ingresados es de: "<<prom<<endl;
    
 }