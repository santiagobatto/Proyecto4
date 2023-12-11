#include<stdio.h>
#define N 3

int sumatoria(int tam, int a[]){
    int i=0, res=0;
    while(i<tam){
        res += a[i];
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

    printf("El resultado de la suma de los %d elementos de su arreglo es: %d", N, sumatoria(N, a));

    return 0;
}