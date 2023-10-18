# DESCRIPCION DEL PROBLEMA

 Construya un programa tal que dado el perímetro de la base, el apotema y la altura de un prisma pentagonal.
 Calcule el área de la base, el área lateral, el área total y el volumen, realizarlo con subprogramas:

    AB=Per*Apo               AL=Per*Alt             AT=2*AB+AL            VOL=AB*AL
          2

# SOLUCION DEL PROBLEMA

 #include<iostream>
 #include<stdlib.h>
 #include<stdio.h>
  using namespace std;

    float Area_base(float P, float Ap){
        float R_AB;

      R_AB=(P*AP)/2;
      return R_AB;
    }

    float Area_lateral(float pe, float Altura){
        float R_AL;
      R_AL=pe*Altura;
      return R_AL;
    }

    float Area_total(float per, float apo, float Altur){
        float R_AT;
        R_AT=2*Area_base(per,apo)+Area_lateral(per,Altur);
        return R_AT;
    }

    float volumen (float perim, float apote, float altu){
        float R_Vol;
        R_Vol=Area_base(perim,apote)*Area_lateral(perim,altu);
        return R_Vol;
    }

      int main(){
        float Perimetro, Apotema, Altura_m;
        cout<<" Ingrese el perimetro: ";
        cin>>Perimetro;
        cout<<"Ingrese el apotema: ";
        cin>>Apotema;
        cout<<"Ingrese la altura: ";
        cin>>Altura_m;

        cout<<"Area Base es de :"<<Area_base(Perimetro, Apotema);
        cout<<"Area Lateral es de :"<<Area_lateral(Perimetro, Altura_m);
        cout<<"Area total es de :"<<Area_total(Perimetro, Apotema, Altura_m);
        cout<<"Volumen es de :"<<Volumen(Perimetro, Apotema, Altura_M);

        System("pause");
      }