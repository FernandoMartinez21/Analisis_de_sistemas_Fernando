# SOLUCIÓN DEL PROBLEMA

 #include<iostream>
 #include<vector>
 
 int main(){
    //crear un vector bidimencional de enteros 
    std::vector<std::vector<int>>matriz={{1,2,3},{4,5,6}{7,8,9}};

    //mostrar la matriz
    std::cout<<"Matriz: "<<std::endl;
    for(const auto&fila:matriz){
        for(const auto&elemento:fila){
            std::cout<<elemento<<"   ";
        }
        std::cout<<std::endl;
    }
    return O;
 }