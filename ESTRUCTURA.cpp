#include<iostram>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    struct amigo{
           int n_amigo;
           float dinero;
}amigo;
amigo pepito;
std::cout<<"dime tu numero,pepito";
std::cin>>pepito.n_amigo;
std::cout<<"dime cuanta pasta tienes";
std::cin>>pepito.dinero;
std::cout<<"yo tengo un amigo que se llama pepito";
std::cout<<"\npepito es mi amigo Nº"<<pepito.n_amigo;
std::cout<<"\npepito tiene "<<pepito.dinero;
}
