#include<stdio.h>
#include<stdbool.h>
#define N 5

bool todos_pares(int tam, int a[]){
    int i=0;
    bool band = true;
    while(i<tam){
        if(a[i] % 2 == 0){
            i++;    
        }
        else if (a[i] % 2 != 0){
            band=false;
            i = tam;    
        }
    }
    return band;
}

bool existe_multiplo(int m, int tam, int a[]){
    int i=0;
    bool band=false;
    while(i<tam){
        if(a[i] % m == 0){
            band=true;
            i = tam;
        }
        else i++;
    }
    return band;
}

int main(){
    int a[N], i=0, aux, opc, m;

    printf("Ingrese %d elementos para su arreglo: ", N);
    while(i<N){
        scanf("%d", &aux);
        a[i]=aux;
        i++;
    }

    printf("Tenemos dos funciones disponibles para tu arreglo!\nOpcion (1): Ver si todos los elementos de el arreglo son pares\nOpcion (2): Si existe en el arreglo algun multiplo de un numero que elijas\nIngresa (1) o (2): \n");
    scanf("%d", &opc);

    switch (opc){
        case 1:
            if(todos_pares(N,a)==true) printf("Todos los elementos de tu arreglo son pares :)");
            else printf("Existen elementos impares dentro de tu arreglo :(");
        break;
        case 2:
            printf("Ingresa un valor entero para encontrar si existen multiplos de el dentro del arreglo: ");
            scanf("%d", &m);
            if(existe_multiplo(m,N,a)==true) printf("Si existen multiplos de %d en el arreglo :)", m);
            else printf("No existen multiplos de %d en el arreglo :(", m);
        break;
        default:
            printf("Ingreso incorrecto!");
        break;
    }

    return 0;
}