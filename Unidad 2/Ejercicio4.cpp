# DESCRIPCIÓN DEL PROBLEMA

 Realice un programa que permita ingresar 15 calificaciones y las almacene en un arreglo unidimensional y calcule lo siguiente:
 1. Promedio de las calificaciones.
 2. Conteo de calificaciones pares e impares.
 3. Si el promedio es mayor a 59 muestre en pantalla APROBADO de lo contrario REPROBADO.

 NOTA: El programa deberá llenarlo con ciclo for. 

# SOLUCIÓN DEL PROBLEMA

 #include<iostream>
 #include<stdlib.h>
 #include<stdio.h>
  using namespace std;
  int main(){
    int cal[15], par, impar, sum;
    float prom;
    for (int i=0; i<15; i++){
        cout<<"Ingrese la "<<(i+1)<<"o. calificacion: "<<endl;
        cin>>cal[i];

        sum=(cal[0]+cal[1]+cal[2]+cal[3]+cal[4]+cal[5]+cal[6]+cal[7]+cal[8]+cal[9]+cal[10]+cal[11]+cal[12]+cal[13]+cal[14]);

        prom=sum/15;
    }
    cout<<"\nLas calificaciones pares son: "<<endl;
    for (int i=0; i<15; i++)
    if (cal[i]%2==0){
        cout<<cal[i]<<"   ";
    }
    cout<<"\nLas calificaciones impares son: "<<endl;
    for (int i=0; i<15; i++)
    if (cal[i]%2!=0){
        cout<<cal[i]<<"   ";
    }
    if (prom<60){
        cout<<"\nREPROBADO"<<endl;
    }else{
        cout<<"\nAPROBADO"<<endl;
    }
    cout<<"\nEl promedio es de: "<<prom<<endl;

    return 0;
    system("Pause");
  }