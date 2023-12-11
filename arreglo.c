#include<stdio.h>

void pedir_arreglo(int n_max, int a[]){
    int i=0, aux;
    printf("Ingrese los %d valores para su arreglo de enteros: \n", n_max);
    while(i<n_max){
        scanf("%d", &aux);
        a[i] = aux;
        i++;
    }
}

void imprimir_arreglo(int n_max, int a[]){
    int i=0;
    printf("\nSu arreglo es: [ ");
    while(i<n_max){
        printf(" %d ", a[i]);
        i++;
    }
     printf("]");
}

int main(){

    int n_max;

    printf("Ingrese el valor del tamaño de su arreglo: ");
    scanf("%d", &n_max);

    int a[n_max];

    pedir_arreglo(n_max, a);
    imprimir_arreglo(n_max, a);

    return 0;
}