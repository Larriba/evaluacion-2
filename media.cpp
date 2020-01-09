#include<iostream>
int main(){
char salir;
int num[8];
int cont;
float suma_numero;
float media;
for(cont=0;cont<=7;cont++){
std::cout<<"introduce los numeros: ";
std::cin>>num[cont];    
}      
std::cout<<"has metido los siguientes numeros\n";
for(cont=0;cont<=7;cont++){
std::cout<<num[cont];
std::cout<<",";
}
std::cout<<"su media es ";
suma_numero=0;
for(cont=0;cont<=7;cont++){
suma_numero=suma_numero+num[cont];
}
media=suma_numero/8;
std::cout<<media;
std::cin>>salir;
}
    
