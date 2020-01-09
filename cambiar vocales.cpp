#include<iostream>
int devuelve_longitud(char palabra[]){
    int longitud=0;
    int cont=0;
    while(palabra[cont]!='\0'){
         longitud++;
         cont++;
    }
    return(longitud);
}


int main(){
    char salir;
    char palabra[10];
    char vocales[]={'a','e','i','o','u'};
    int cont,nvocales;
    std::cout<<"dime una palabra: ";
    std::cin>>palabra;
    for(cont=0;cont<devuelve_longitud(palabra);cont++){
          for(nvocales=0;nvocales<5;nvocales++){
               if(palabra[cont]==vocales[nvocales]){
               palabra[cont]='u';
               }
          }      
    }
    std::cout<<"palabra fake: "<<palabra;
    std::cin>>salir;
}
