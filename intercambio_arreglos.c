#include<stdio.h>

void intercambiar(int tam, int a[], int i, int j){
    int pos=0, aux1, aux2;
    while(pos<tam){
        if (i!=pos && j!=pos) pos++;
        else if(i==pos){
            aux1=a[pos];
            pos++;
        }
        else if(j==pos){
            aux2=a[pos];
            pos++;
        }
    }

    a[i]=aux2;
    a[j]=aux1;

}

int main(){

    int tam;

    printf("De cuantos elementos desea su arreglo?\n");
    scanf("%d", &tam);

    if(tam>1){

        int a[tam], i=0, aux;

        printf("Ingrese los %d valores para su arreglo de enteros: \n", tam);
        while(i<tam){
            scanf("%d", &aux);
            a[i] = aux;
            i++;
        }
        i=0;

        printf("\nSu arreglo es: [ ");
        while(i<tam){
            printf("Posicion %d -> [ %d ] ", i, a[i]);
            i++;
        }
        printf("]");
        i=0;

        int j=0;

        printf("\nQue 2 posiciones de tu arreglo de %d posiciones deseas intercambiar?\n", tam);
        scanf("%d", &i);
        scanf("%d", &j);

        if(i>=0 && i<tam && j>=0 && j<tam && j!=i){
            
            intercambiar(tam, a, i, j);

            int cont=0;

            printf("\nSu nuevo arreglo con las posiciones intercambiadas es: [ ");
            while(cont<tam){
                printf(" %d ", a[cont]);
                cont++;
            }
            printf(" ]");

        }else    printf("Ingreso invalido de posiciones del arreglo!");        

    }else   printf("Ingreso invalido, arreglo muy pequeño!");

    return 0;
}