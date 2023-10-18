# DESCRIPCIÓN DEL PROBLEMA

 Realice un programa que permita obtener la cantidad de monedas de 0.10 centavos, 0.25 centavos, 0.50 centavos, 1 quetzal de una cantidad de dinero ingresado por el usuario.

# SOLUCIÓN DEL PROBLEMA

 #include<iostream>
 #include<stdlib.h>
 #include<stdio.h>
  using namespace std;
  float monedas(float d){
    float mon;
    mon=d/0.10;
    return mon;
  }
  float fichas(float din){
    float mon_1;
    mon_1=din/0.25;
    return mon_1;
  }
  float pisto(float diner){
    float mon_2;
    mon_2=diner/0.50;
    return mon_2;
  }
  float quetzales(float money){
    float mon_3;
    mon_3=money/1.00;
    return mon_3;
  }
  int main(){
    float dinero;
    cout<<"Ingrese la cantidad de dinero a calcular: "<<endl;
    cin>>dinero;

    cout<<"La cantidad de monedas de diez centavos que contiene el dinero ingresado es de: "<<monedas(dinero)<<endl;

    cout<<"La cantidad de monedas de veinticinco centavos que contiene el dinero ingresado es de: "<<fichas(dinero)<<endl;

    cout<<"La cantidad de monedas de cincuenta centavos que contiene el dinero ingresado es de: "<<pisto(dinero)<<endl;

    cout<<"La cantidad de monedas de un quetzal que contiene el dinero ingresado es de: "<<quetzales(dinero)<<endl;

    cout<<"La cantidad de dinero ingresada fue de: "<<dinero<<endl; 
  }