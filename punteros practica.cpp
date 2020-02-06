#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<fichero2.h>
#include<string.h>
int main(){
    int cont,veces;
    char*palabras[4];
    char*Paux;
    char aux[20];
    char salir;
    int i;
    int longitud;
    //leo 4 palabras
    for(cont=0;cont<4;cont++){
    //palabras[cont]=new char[20];
    std::cout<<"palabra "<<cont+1;
     
    std::cin>>aux;
    longitud=devuelve_longitud(aux);
    palabras[cont]=(char*)malloc((longitud+1)*sizeof(char));
    strcpy(palabras[cont],aux);
    }
    std::cout<<"\nLista de palabras\n";
    for(cont=0;cont<4;cont++){
    printf("%s\n",palabras[cont]);
    
    }
    for(veces=1;veces<3;veces++){
    for(cont=0;cont<3;cont++){
    if (strcmp(palabras[cont],palabras[cont+1])>0){
    Paux=palabras[cont];
    palabras[cont]=palabras[cont+1];
    palabras[cont+1]=Paux;                                              
    }
    }
    }
    std::cout<<"\nLista de palabras ordenadas \n";
    for(cont=0;cont<4;cont++){
    printf("%s\n",palabras[cont]);
    }
    std::cin>>salir;
}
