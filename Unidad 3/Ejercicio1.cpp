# DESCRIPCIÓN DEL PROBLEMA

 Realice un programa que permita almacenar la tabla de multiplicar del 25 en un fichero.

# SOLUCIÓN DEL PROBLEMA

 #include<iostream>
 #include<fstream>
  using namespace std;
  int main(){
    int numero=25;
    int lim=10;
    ofstream fich("tabla_25.txt");
    if(!fich.is_open()){
        cout<<"Error al abrir el fichero.txt"<<endl;
    }
    fich<<"Tabla de multiplicar del"<<num<<" :"<<endl;
    for(int i=1; i<lim; i++){
        fich<<num<<"x"<<i<<"="<<(num*i)<<endl;
    }
    fich.close();
  }