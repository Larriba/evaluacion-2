#include<iostream>
int main(){
    char salir;
    char palabra [10];
    int count;
    int longitud;
    std::cout<<"dime tu nombre: ";
    std::cin>>palabra;
    std::cout<<"\n";
    std::cout<<"tu nombre es: ";
    std::cout<<palabra;
    std::cout<<"\n";
    for(count=0;count<=9;count++){
    std::cout<<palabra[count];
        std::cout<<"\n";
        
    }
    longitud=0;
    for(count=0;palabra[count]!='\0';count++){
         
         longitud=longitud+1;
         
    }
    std::cout<<"el nombre de ";
    std::cout<<palabra;
    std::cout<<" tiene";
    std::cout<<longitud;
    std::cout<<"letras";
std::cin>>salir;
}
