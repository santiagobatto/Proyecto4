#include <stdio.h>
#include<assert.h>

int suma_hasta(int n){
    int i=1, result;
    while(i<=n){
        result=(n*(n+1)/2);
        i++;
    }
    return result;
}

int main(){

    int n;
    printf("Ingresa un numero entero para la variable n: \n");
    scanf("%d", &n);

    assert(n!=0);

    if(n<0) printf("\nEntrada incorrecta. El valor n = %d ingresado es negativo!", n);
    else printf("\nEl resulta de la suma hasta n = %d es: %d", n, suma_hasta(n));

    return 0;
}