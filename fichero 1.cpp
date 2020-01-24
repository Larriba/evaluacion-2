#include<iostream>
#include<fichero2.h>
int main(){
    char salir;
    char palabra[10];
    int cont2=0;
    int nvocales,cont,nconsonantes;
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
    nconsonantes=cont-cont2;
    std::cout<<nconsonantes;
    cambio_vocales(palabra);
    std::cout<<"palabra fake: "<<palabra;
    std::cin>>salir;
}
