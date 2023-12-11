#include<stdio.h>
#include<limits.h>
#include<stdbool.h>
#define N 5

int minimo_pares(int tam, int a[]){
    int i=0, aux, min_p=INT_MIN;
    bool band = true;

    while(i<tam){
    
        if(a[i] % 2 == 0){

            aux=a[i];

            if(min_p<aux && band == true){
                min_p=aux;
                band=false;
                i++;
            }
            else if (aux<min_p){
                min_p=aux;
                i++;
            }
            else i++;

        }   else i++;

    }

    return min_p;

}

int minimo_impares(int tam, int a[]){

    int i=0, aux, min_i=INT_MIN;
    bool band=true;

       while(i<tam){
    
        if(a[i] % 2 != 0){

            aux=a[i];

            if(min_i<aux && band == true){
                min_i=aux;
                band=false;
                i++;
            }
            else if (aux<min_i){
                min_i=aux;
                i++;
            }
            else i++;

        }   else i++;

    }

    return min_i;

    
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

    printf("El minimo numero par que se encuentra en el arreglo es: %d\n", minimo_pares(N, a));
    printf("El minimo numero impar que se encuentra en el arreglo es: %d\n", minimo_impares(N, a));

    int min;
    if (minimo_impares(N,a)<minimo_pares(N,a)) min=minimo_impares(N,a);
    else if (minimo_pares(N,a)<minimo_impares(N,a)) min=minimo_pares(N,a);

    printf("El minimo numero que se encuentra en el arreglo es: %d", min);

    return 0;
}