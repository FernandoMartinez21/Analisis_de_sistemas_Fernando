# DESCRIPCIÓN DEL PROBLEMA

 Realice un programa que permita ingresar 5 calificaciones en un arreglo y obtenga el promedio de esas 5 calificaciones y cuente cuantas calificaciones son pares e impares.

# SOLUCIÓN DEL PROBLEMA

 #include<iostream>
 #include<stdlib.h>
 #include<stdio.h>
  using namespace std;
  int main(){
    int calif[5], par, imp, sum;
    float prom;

    cout<<"Ingrese la 1er. calificacion: "<<endl;
    cin>>calif[0];
    cout<<"Ingrese la 2da. calificacion: "<<endl;
    cin>>calif[1];
    cout<<"Ingrese la 3er. calificacion: "<<endl;
    cin>>calif[2];
    cout<<"Ingrese la 4ta. calificacion: "<<endl;
    cin>>calif[3];
    cout<<"Ingrese la 5ta. calificacion: "<<endl;
    cin>>calif[4];

    sum=(calif[0]+calif[1]+calif[2]+calif[3]+calif[4]);
    prom=sum/5;
     
     cout<<"La sumatoria de las calificaciones ingresadas es de: "<<sum<<endl;
     cout<<"El promedio de las calificaciones es de: "<<prom<<endl;

     cout<<"Las calificaciones pares ingresadas son: "<<endl;
     for (int i=0; i<5; i++)
     if ((int)calif[i]%2==0){
        cout<<calif[i]<<"   ";
     }
     cout<<"Las calificaciones impares ingresadas son: "<<endl;
     for (int i=0; i<5; i++)
     if ((int)calif[i]%2!=0){
        cout<<calif[i]<<"   ";
     }
     return 0;
     system("Pause");
     }