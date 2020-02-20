#include<conio.h>
#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char salir,aux[10],vocales[]={'a','e','i','0','u'};
    int i,j,z,longitud,consonantes[5],var=0;
    char*palabra[5],*aux2;
    for (i=0;i<5;i++){
        for(j=0;j<strlen(palabra[i]);j++){
            if(palabra[i][j]=vocales[z]){
                var++;
                if (var==5){
                   consonantes[i]++;
                }
            }
        }
    }
   for(i=0;i<5;i++){
      for(j=0;j<4;j++){
          if (consonantes[j]>consonantes[j+1]){
            aux2=palabra[j];
            palabra[j]=palabra[j+1];
            palabra[j+1]=aux2;
          }
      }
   }
   cin>>salir;
}
void datos(){
     int i,j;
     char salir,aux[10];
     int longitud;
     char*palabra[5];
     cout<<"dame tus datos";
     for (i=0;i<5;i++){
         cout<<"palabra"<<i+1; 
         cin.getline(aux,10,'\n');//con ayuda de sas:)
         longitud=strlen(aux);
         if(longitud>10){
         cout<<"demasiadas letras\n";    
         datos();
         }      
         palabra[i]=new char[longitud];
         palabra[i]=aux;
     }
     cin>>salir;
}

