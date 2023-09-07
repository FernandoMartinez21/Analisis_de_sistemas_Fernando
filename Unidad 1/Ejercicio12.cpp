# DESCRIPCION
Realice un programaque permita predeterminar la edad de hermanos muestre la mayor edad en pantalla 
# SOLUCION DEL PROBLEMA
# include <iostream>
# include <stdlio.h>
# include <stdio.h>
using namespace std;
int main (){
int edad_1,edad_2;
cout<<"Ingrese la primera edad";
cin>>edad_1;
cout<<"Ingese la segunda edad";
cin>>edad_2;
if(edad_1>edad_2){
cout<<"La primera edad es mayor";
}
else{
cout<<"la segunda edad es mayor";
}
}