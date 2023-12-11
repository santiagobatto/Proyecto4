#include <stdio.h>
#include <assert.h>

int pedir_n(char name[]){
    int n;
    printf("Ingresa un numero entero para la variable: %s \n", name);
    scanf("%d", &n);
    return n;
}

int main(void){

    int x,y,z,aux=0;
    x = pedir_n("x");
    y = pedir_n("y");
    z = pedir_n("z");

    assert(x!=y && y!=z);

    z = x;
    x = y;
    aux = y;
    y = z;

    printf("\nAhora vale x = %d e y = %d", x, y);

    assert(y == z && x == aux);

return 0;
}
