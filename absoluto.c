#include <stdio.h>
#include <assert.h>

int pedir_n(char name[]){
    int n;
    printf("Ingresa un numero entero para la variable: %s \n", name);
    scanf("%d", &n);
    return n;
}

int main(void){

    int n;
    n = pedir_n("n");
    if (n<0) {
        n*=n;
        printf("El valor absoluto de n es: %d", n);
    }else 
        printf("El valor absoluto de n es: %d", n);

    assert(n>=0);

return 0;
}