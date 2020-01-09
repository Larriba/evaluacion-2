#include<iostream>


int main(){
    char salir;
    char respuesta;
    std::cout<<"Hola mundo,mi primer programa\n";
    std::cout<<"eres guapo?(s/n): ";
    std::cin>>respuesta;
    //&& significa AND
    //|| significa OR
    if(respuesta=='s'){
         std::cout<<"Hola guapo";
    }
    else{
         std::cout<<"Hola feo";
    }
    std::cin>>salir;
     
}
