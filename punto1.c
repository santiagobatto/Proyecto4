#include <stdio.h>
#include <assert.h>

int pedir_n(char name[]){
    int n;
    printf("Ingresa un numero entero para la variable: %s \n", name);
    scanf("%d", &n);
    //assert(n > 0);
    return n;
}

void hola_hasta(int n){
    int i=0;
    while(i<n){
        printf("Hola \n");
        i++;
    }
}

int main(void){ 

    int n = pedir_n("n");
    hola_hasta(n);

    return 0;
}