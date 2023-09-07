# DESCRIPCION 
Realice un programa que permita mostrar en pantalla el total a pagar de un restaurante tomando la siguiente tabla 
Cod                              Platillos                                Precio
33                               hamburguesa                             Q 25.00
8                                 Pizza                                  Q 10.00 
5                                  Papas                                 Q 15.00
9                                 Michelada                              Q 25.00
# SOLUCUON DEL PROBLEMA 
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
int main () {
float tot_pag,Resta,Plat;
char cod;
cout<<"33____________________Hamburgesa____________________Q25.00"<<endl;
cout<<"8_____________________Pizza_________________________Q10.00"<<endl;
cout<<"5_____________________Papas_________________________Q15.00"<<endl;
cout<<"9_____________________Michelada_____________________Q25.00"<<endl;

cout<<"Ingrese el precio del platillos";
cin>>Plat;
cout<<"Ingrese el codigo del area a llamar";
cin>>cod;
switch (cod){
case'33':
cout<<"selecciona hamburguesa"<<endl;
tot_pag=Plat*25.00;
cout<<"total a pagar es de:"<<tot_pag;
break;
case'8':
cout<<"selecciona Pizza"<<endl;
tot_pag=Plat*10.00;
cout<<"total a pagar es de:"<<tot_pag;
break;
case'5':
cout<<"selecciona Papas"<<endl;
tot_pag=Plat*15.00;
cout<<"total a pagar es de:"<<tot_pag;
break;
case'9':
cout<<"selecciona Michelada"<<endl;
tot_pag=Plat*25.00;
cout<<"total a pagar es de:"<<tot_pag;
break;
default:
cout<<"Ingrese un codigo correcto";
}
system ("pause");
}
