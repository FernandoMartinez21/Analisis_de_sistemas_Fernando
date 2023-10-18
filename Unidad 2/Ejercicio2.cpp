# DESCRIPCIÓN DEL PROBLEMA

 Realice un programa que me permita ingresar una palabra, utilizando arreglos.

# SOLUCIÓN DEL PROBLEMA

 #include<iostream>
 #include<stdlib.h>
 #include<stdio.h>
  using namespace std;
   int main(){
    char palabra[5];
    string P,A,L,Ab,B,Palabra;

    cout<<"Ingrese la primer letra: "<<endl;
    cin>>P;
    cout<<"Ingrese la segunda letra: "<<endl;
    cin>>A;
    cout<<"Ingrese la tercer letra: "<<endl;
    cin>>L;
    cout<<"Ingrese la cuarta letra: "<<endl;
    cin>>Ab;
    cout<<"Ingrese la quinta letra: "<<endl;
    cin>>B;

    Palabra=P+A+L+Ab+B;

    cout<<"La palabra ingresada es: "<<Palabra<<endl;

    system("Pause"); 
   }