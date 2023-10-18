# DESCRIPCIÓN DEL PROBLEMA

 La compañia del "centro" desea imprimir el recibo del cobro de las cuentas habientes en el último período. 
  1.Desea obtener el total de cobros del período.
  2.Por cada cliente se ingresa el nombre, dirección, registro inicial y registro final, el cobro se efectúa con base a lo siguiente:
    140KuH o menos--->     Q. 35.00
    los siguientes 170KuH--Q. 0.90 por KuH
    Exceso sobre 310KuH----Q. 0.67 por KuH

# SOLUCIÓN DEL PROBLEMA
 
 #include<iostream>
 #include<stdlib.h>
 #include<stdio.h>
  using namespace std;
  float periodo(float reg_inic, float reg_final){
    float Kuh_tot, n_totoKuH, tot_1, tot_pagar, tot_2;

    KuH_tot=reg_final-reg_inic;
    if(Kuh_tot<=140){
      return 35;
    }
     else if((Kuh_tot>140)&&(Kuh_tot<310)){
      n_totKuH=Kuh_tot-140;
      tot_1=n_totKuH*.98;
      tot_pagar=tot_1+35;
      return tot_pagar;
     }
     else if(Kuh_tot>310){
      n_totKuH=Kuh_tot-140;
      tot_2=n_totKuH*.67;
      tot_pagar=tot_2+35;
      return tot_pagar;
     }
  }

     int main (){
      float registro_in, registro_fin;
      string nombre, dirección;

      cout<<"Ingrese su nombre:"<<endl;
      cin>>nombre;
      cout<<"Ingrese su direccion: "<<endl;
      cin>>direccion;
      cout<<"Ingrese su registro inicial: "<<endl;
      cin>>registro_in;
      cout<<"Ingrese su registro final: "<<endl;
      cin>>registro_fin;

      cout<<"Su nombre es: "<<nombre<<endl;
      cout<<"Su direccion es: "<<direccion<<endl;
      cout<<"Su registro inicial es de: "<<registro_in<<endl;
      cout<<"Su registro final es de: "<<registro_fin<<endl;

      cout<<"Su total a pagar es de: "<<periodo(registro_in, registro_fin)<<endl;

  }