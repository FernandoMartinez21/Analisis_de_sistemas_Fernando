# DESCRIPCIÓN DEL PROBLEMA 

 Dados los datos A,B,C y D que representan números, construya un programa que calcule el resultado de la siguiente expresión (si D es igual a 0 imprima el mensaje 'Error matemático') la expresión es la siguiente:
            
            (A-C)^2
             D*B

# SOLUCIÓN DEL PROBLEMA

 #include<iostream>
 #include<stdlib.h>
 #include<stdio.h>
  using namespace std;
  float expresion(float a, float b, float c, float d){
    if(d==0){
        cout<<"Error matematico"<<endl;
        return 0;
    }else{
        float exp;
        exp=pow(a-c,2)/(d*b);
        return exp;
    }
  }
   int main(){
    float A,B,C,D;

    cout<<"Ingrese el numero A: "<<endl;
    cin>>A;
    cout<<"Ingrese el numero B: "<<endl;
    cin>>B;
    cout<<"Ingrese el numero C: "<<endl;
    cin>>C;
    cout<<"Ingrese el numero D: "<<endl;
    cin>>D;

    cout<<"El resultado de la expresion es de: "<<expresion(A,B,C,D)<<endl;
    return 0;
   }