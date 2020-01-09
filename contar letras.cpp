#include<iostream>
int main(){
    char salir;
    char palabra[10];
    int cont,longitud;
    longitud=0;
    std::cout<<"pon tu nombre: ";
    std::cin>>palabra;
    for(cont=0;palabra[cont]!='\0';cont++){
    longitud++;                                      
    }
    std::cout<<"el nombre de ";
    std::cout<<palabra;
    std::cout<<" tiene";
    std::cout<<longitud;
    std::cout<<" letras";
std::cin>>salir;
}
