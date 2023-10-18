# DESCRIPCIÓN DEL PROBLEMA

 Dada la estabilidad económica que existe en un determinado país de américa latina, las agencias automotrices comienzan a ofrecer distintos planes de financiamiento para la comercialización de sus vehículos. La empresa XGW ofrece el siguiente plan de financiación: dado el monto total del vehículo debe pagar el 35% de enganche y el resto en 18 mensualidades iguales sin intereses.
 Construya un programa que permita obtener cual es el importe del enganche y las mensualidades que debe pagar el cliente, usando subprogramas.

# SOLUCIÓN DEL PROBLEMA

 #include<iostream>
 #include<stdlib.h>
 #include<stdio.h>
  using namespace std;
  float enganche(float precio){
    float p;
    p=precio*0.35;
    return p;
  }
  float mensualidad (float pre){
    float prec;
    prec=(pre-pre*0.35)/18;
    return prec;
  }
  int main(){
    float pu;
    cout<<"Ingrese el precio del vehiculo que desea adquirir: "<<endl;
    cin>>pu;

    cout<<"El enganche que debera pagar es de: "<<enganche(pu)<<endl;
    cout<<"Debe pagar mensualmente durante 18 meses la cantidad de: "<<mensualidad(pu)<<endl;
  }