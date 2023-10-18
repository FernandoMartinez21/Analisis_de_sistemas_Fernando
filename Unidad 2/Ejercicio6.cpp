# DESCRIPCIÓN DEL PROBLEMA

 En un array se almacenan las calificaciones de 35 alumnos, construya un programa para calcular e imprimir lo siguiente:
 1. Promedio general del grupo.
 2. Número de alumnos aprobados y alumnos reprobados (si el alumno saco una calificación menor a 6 se le considera reprobado).
 3. Porcentaje de alumnos aprobados y reprobados.
 4. Número de alumnos cuya calificación fue mayor a 8.

# SOLUCIÓN DEL PROBLEMA

 #include<iostream>
 #include<stdlib.h>
 #include<stdio.h>
  using namespace std;
  int C=35;
  int main(){
    int cal[35];
    int aprobados, reprobados, mayores;
    float prom;

    for(int i=0; i<C; i++){
        cout<<"Ingrese la calificacion del alumno: "<<i+1<<" : " ;
        cin>>cal[i];

        prom+=cal[i];
        
        if(cal[i]>=6){
            aprobado++;
        }else{
            reprobados++;
        }
        if(cal[i]>8){
            mayores++;
        }
    }
     prom/=C;

     float porcentaje_aprob=(float)aprobados/C*100;
     float porcentaje_reprob=(float)reprobados/C*100;

     cout<<"El promedio general del grupo es de: "<<prom<<endl;
     cout<<"El numero de alumnos aprobados es de: "<<aprobados<<endl;
     cout<<"El numero de alumnos reprobados es de: "<<reprobados<<endl;
     cout<<"El porcentaje de alumnos aprobados es de: "<<porcentaje_aprob<<"%"<<endl;
     cout<<"El porcentaje de alumnos reprobados es de: "<<porcentaje_reprob<<"%"<<endl;
     cout<<"El numero de alumnos con calificacion mayor a 8 es de: "<<mayores<<endl;

     return 0;
     system("Pause");

  }