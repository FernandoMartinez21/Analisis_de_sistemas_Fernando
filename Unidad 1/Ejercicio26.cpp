 # DESCRIPCION
 Realice un programa que permita hacer un descuento a una compra realizada, si el monto supera Q1350.00. El descuento será de 15%.

# SOLUCIÓN DEL PROBLEMA

 #iclude<iostream>
 #include<stdlib.h>
 #include<stdio.h>
  using namespace std;
   float descuento,(float mont)
   float desc;
   if(mont >= 1350){
    desc = (mont*.15)/100;
    return desc;
   }
   else{
    return desc = 0;
   }
   }
    int main(){
        float monto;
        cout<<"Ingrese el monto: ";
        cin>>monto;
        cout<<"La compra es mayor a Q1350.00 se le hara un descuento del 15%, el total a pagar es de: "<<descuento(monto)<<endl;
        
        return 0;
    }