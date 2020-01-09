#include<iostream>
int main(){
    char salir;
    int a,b,c,count;
    std::cout<<"tamaño de la piramide: ";
    std::cin>>a;
    for(count=0;count<=a;count++){
       for(b=0;b<=a-count;b++){
       std::cout<<" ";
       }
       for(c=0;c<=(2*count)-2;c++){
       std::cout<<"*";
       }
       std::cout<<"\n";
    }

    
    std::cin>>salir;
}
