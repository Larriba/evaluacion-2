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
    char salir,palabra[10];
    int cont2=0;
    int nvocales,cont,;
    char vocales[]={'a','e','i','o','u'};
    std::cout<<"dime una palabra ";
    std::cin>>palabra;
    for(cont=0;cont<devuelve_longitud(palabra);cont++){
     for(nvocales=0;nvocales<5;nvocales++){
      if( palabra[cont]==vocales[nvocales]){
          cont2++;
          
      }                                     
     }
    }
    std::cout<<cont2;
    std::cin>>salir;
}
