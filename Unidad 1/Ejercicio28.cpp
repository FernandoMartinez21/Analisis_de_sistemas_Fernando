# DESCRIPCIÓN DEL PROBLEMA

 Realice un programa tal que dada la compra en un almacen muestre en pantalla el cambio que hay que darle al cliente.

# SOLUCIÓN DEL PROBLEMA

 #include<iostream>
 #include<stdlib.h>
 #include<stdio.h>
  using namespace std;
  
  float cambio(float com, float din){
  float cam;
  cam = din-com;
  return cam;
  }

  int main (){
    float compra, dinero;
     cout<<"Ingrese el total de la compra: ";
     cin>>compra;
     cout<<"Ingrese la cantidad de dinero con la que ha pagado: ";
     cin>>dinero;

     cout<<"El cambio es de: "<<cambio(compra,dinero)<<endl;

     return 0;
  }