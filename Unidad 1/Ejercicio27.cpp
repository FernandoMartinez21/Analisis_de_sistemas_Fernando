# DESCRIPCÓN DEL PROBLEMA

 Realice un programa dado el sueldo de N trabajadores considere un aumento del 15% a cada uno de ellos si su sueldo es inferior a Q800.00. Imprima el sueldo con A si corresponde, hagalo con subprogramas.

# SOLUCIÓN DEL PROBLEMA

 #include<iostream>
 #include<stdlib.h>
 #include<stdio.h>
  using namespace std;

  float aumento(float sueldo){
    float aum_sueldo, n_sueldo;
    aum_sueldo=sueldo * .15;
    n_sueldo=sueldo + aum_sueldo;
    return n_sueldo;
  }

  int main(){
    float s;
    int numero,_traba, i=0;
     cout<<"Ingrese el numero de trabajadores";
     cin>>numero_traba;
     do{
        cout<<"Ingrese el"<<(i+1)<< "o. sueldo";
        cin>>s;
        if(s<800){
            cout<<"El sueldo del"<<(i+1)<< "" o. trabajador es de: "<< aumento(s)<< endl;
            i+=1;
        }else{
            cout<<"El sueldo de"<< (i+1)"o. trabajador no tiene aumento: "<< s << endl;
            i+1; 
        }
     }while (i < numero_traba);
     
     return 0; 
  }