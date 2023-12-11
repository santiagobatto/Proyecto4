#include<stdio.h>

struct comp_t {
    int menores;
    int iguales;
    int mayores;
};

struct comp_t cuantos(int tam, int a[], int elem){ 
    struct comp_t result;
    result.iguales=0;
    result.mayores=0;
    result.menores=0;

    int i=0;
    while(i<tam){
        if(a[i]>elem) result.mayores++;
        if(a[i]<elem) result.menores++;
        if(a[i]==elem) result.iguales++;
        i++;
    }
    return result;
}

int main(){

    int tam;

    printf("De cuantos elementos desea su arreglo?\n");
    scanf("%d", &tam);

    int a[tam], i=0, aux;

    printf("Ingrese los %d valores para su arreglo de enteros: \n", tam);
    while(i<tam){
        scanf("%d", &aux);
        a[i] = aux;
        i++;
    }

    int n;

    printf("De que entero quieres contar cuantos elementos mayores, menores o iguales hay en tu arreglo?: \n");
    scanf("%d", &n);

    struct comp_t result = cuantos(tam, a, n);

    printf("Hay %d elementos mayores a %d en tu arreglo!\n", result.mayores, n);
    printf("Hay %d elementos menores a %d en tu arreglo!\n", result.menores, n);
    printf("Hay %d elementos iguales a %d en tu arreglo!\n", result.iguales, n);

    return 0;
}