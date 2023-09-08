# DESCRIPCION
Realice un programa que muestre en pantalla  verdadero  si se cumple la condicion lo contrarion  muestre falso
Debe de mostrar las operaciones aritmeticas Tomando en cuenta en cuenta la siguiente condición ((z*a)2/x)²>666
# SOLUCION DEL PROBLEMA
# include <isotream>
# include <stdlib.h>
# include <stdio.h>
using namespace std;
int main (){
float n_1,num_2,num_3,mult,div_1,div_2,pot,result;
cout<<"ingrese el primer numero";
cin>>num_1
cout<<"ingrese el segundo numero";
cin>>num_2
cout<<"ingrese el tecer numero";
cin>>num_3
mult=num_1*num_2;div_1=mult/2;div_2=div_1/num_3;post=div_1*div_2;result=post>666
if(result>666){
cout<<"el resultado de la multiplicacion es de";<<mult<<endl;
cout<<"el resultado de la multiplicacion es de";<<div_1<<endl;
cout<<"el resultado de la multiplicacion es de";<<div_2<<endl;
cout<<"el resultado de la potenciacion es de";<<pot<<endl;
cout<<"el resultado de la final es de"<<result<<endl;
cout<<"verdadero";
}
else(result>666);{
    cout<<"el resultado de la multiplicacion es de";<<mult<<endl;
cout<<"el resultado de la primera multiplicacion es de";<<mult<<endl;
cout<<"el resultado de la segunda multiplicacion es de";<<div_2<<endl;
cout<<"el resultado de la potenciacion es de";<<pot<<endl;
cout<<"el resultado de la final es de"<<<<result<endl;
cout<<"falso";
}
}