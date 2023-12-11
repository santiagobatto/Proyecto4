#include<stdio.h>
#define N 5

int prim_iguales(int tam, int a[]){
    int i, longi, res;
    i=1;
    longi=1; 

    while(i<tam){
        
        if(a[i]==a[i-1]) longi++;
        else longi=1;
        
        if(longi>res) res=longi;
        
        i++;
    }

    return res;
}


int main(){

int i=0, a[N];

    printf("Ingrese los %d valores para su arreglo de enteros: \n", N);
    int aux;
    while(i<N){
        scanf("%d", &aux);
        a[i] = aux;
        i++;
    }

    printf("La longitud del tramo inicial mas largo cuyos elementos son todos iguales es: %d", prim_iguales(N, a));

    return 0;
}