int devuelve_longitud(char palabra[]){
    int longitud=0;
    int cont=0;
    while(palabra[cont]!='\0'){
         longitud++;
         cont++;
    }
    return(longitud);
}
void cambia_vocales(char palabra[]){
     int cont,nvocales;
     char vocales[]={'a','e','i','o','u'};
     for( cont=0;cont<devuelve_longitud(palabra);cont++){
          for(nvocales=0;nvocales<5;nvocales++){
               if(palabra[cont]==vocales[nvocales]){
               palabra[cont]='u';
               }
          }      
    }
}
void espacio_puintero(char palabra[]){
int cont;
char aux;
for(cont=0;cont<4;cont++){
    //palabras[cont]=new char[20];
    std::cout<<"palabra "<<cont+1;
    std::cin>>aux;
    longitud=devuelve_longitud(aux);
    palabras[cont]=(char*)malloc((longitud+1)*sizeof(char));
    strcpy(palabras[cont],aux);
}
}
