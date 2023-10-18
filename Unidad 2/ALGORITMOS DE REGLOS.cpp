 
 Algoritmo para poder sumar filas y columnas de un arreglo bidimencional.

 # SOLUCIÓN DEL PROBLEMA

 #include<iostream>
  using namespace std;
  int main(){
    int array_tot[3][3];
    int acum_fila=0, acum_col=0, sum_col_fila=0;

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<"Ingrese el valor: "<<endl;
            cin>>array_tot[i][j];
            acum_col+=array_tot[i][j];
        }
    }
     for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            acum_fila+=array_tot[i][j];
        }
     }
     sum_col_fila=acum_col+acum_fila;

     cout<<"La sumatoria de todos los datos es de: "<<sum_col_fila<<endl;
  }