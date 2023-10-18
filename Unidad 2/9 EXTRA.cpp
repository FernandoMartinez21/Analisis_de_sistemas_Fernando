# SOLUCIÓN DEL PROBLEMA

#include<iostream>
#include<stdlib.h>
#include<stdio.h>
 using namespace std;
 int main(){
    int matriz_lluvia[12][4];
    for(int i=0; i<12; i++){
        for(int j=0; j<4; j++){
            cout<<"Ingrese el dato["<<(i+1)<<"] ["<<(j+1)<<"]"<<endl;
            cin>>matriz_lluvia[i][j];
        }
    }
    for(int i=0; i<12; i++){
        cout<<"  "<<endl;

        for(int j=0; j<4, j++){
            cout<<matriz_lluvia[i][j];
        }
    }