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
   char palabra[10],salir;
   int cont;
   char Letra_minuscula,Letra_mayuscula;
   std::cout<<"Dime una palabra: ";
   std::cin>>palabra;  
   for(cont=0;cont<devuelve_longitud(palabra);cont++){
       if (palabra[cont]>=65 && palabra[cont]<=95){
         palabra[cont]=palabra[cont]+32;           
       }
       else if (palabra[cont]>=97 && palabra[cont]<=122){
         palabra[cont]= palabra[cont]-32;
       }
   }                                                                 
   std::cout<<palabra;
   std::cin>>salir;                                 
}
