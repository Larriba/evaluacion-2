#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
int main(){ 
    int a;
    int numeros[5];
    int *pa;
    char salir;
    numeros[0]=9;
    numeros[1]=8;
    numeros[2]=7;
    numeros[3]=6;
    numeros[4]=5;
    a=2;
    pa=&a;     
    printf("el numero x =%d y esta almacenado en %X",a,&a);
    printf("\nla variable pa es un puntero pa=%X",pa);
    printf("\nnumeros=%d",*numeros);
    cin>>salir; 
}
