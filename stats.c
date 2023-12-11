#include<stdio.h>
#include<stdbool.h>

struct datos_t {
    float maximo;
    float minimo;
    float promedio;
};

struct datos_t stats(int tam, float a[]){
    struct datos_t result;
    result.maximo=0;
    result.minimo=0;
    result.promedio=0;

    int i=1, j=1;
    bool band1=true, band2=true;

    while(i<tam){
        
        if(band1==true){
            result.minimo=a[i-1];
            result.maximo=a[i-1];
            band1=false;
        }

        if(a[i]<result.minimo) result.minimo=a[i];
        if(a[i]>result.maximo) result.maximo=a[i];
        
        i++;

        if (band2==true){
            result.promedio = a[j-1];
            band2=false;
        }

        result.promedio =  result.promedio + a[j];
        j++;

    }

    return result;

}

int main(){

    int tam;

    printf("De cuantos elementos desea su arreglo?\n");
    scanf("%d", &tam);

    float a[tam];
    int i=0, aux;

    printf("Ingrese los %d valores para su arreglo de enteros: \n", tam);
    while(i<tam){
        scanf("%d", &aux);
        a[i] = aux;
        i++;
    }

    struct datos_t result = stats(tam, a);

    printf("El minimo valor de su arreglo es: %f\n", result.minimo);
    printf("El maximo valor de su arreglo es: %f\n", result.maximo);
    printf("El promedio de su arreglo es: %f\n", result.promedio/tam);

    return 0;
}