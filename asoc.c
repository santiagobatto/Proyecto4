#include<stdio.h>
#include<stdbool.h>
#define N 5

typedef char clave_t;   //Ahora clave_t es un sinonimo de char
typedef int valor_t;

struct asoc {
    clave_t clave;
    valor_t valor;
};

bool asoc_existe(int tam, struct asoc a[], clave_t c){
    int i=0;
    bool band = false;
    while(i<tam){
        if(a[i].clave == c){
            band=true;
            i=tam; 
        }
        else i++;
    }
    return band;
}

int main(){

    struct asoc a[N];
    int i=0;

    printf("Ingresa %d claves y sus valores para tu arreglo: \n", N);
    while(i<N){

        printf("Clave -> ");
        scanf("%c", &a[i].clave);

        printf("Valor -> ");
        scanf("%d", &a[i].valor);

        i++;
    }

    char clave_final; 

    printf("\nIngrese una clave para buscarla en el arreglo: ");
    scanf("%c", &clave_final);

    if(asoc_existe(N, a, clave_final)==true) printf("\nTu clave %c se encuentra en el arreglo!", clave_final);
    else printf("\nTu clave %c no se encuentra en el arreglo :(", clave_final);

    return 0;
}