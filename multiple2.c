#include <stdio.h>
#include <assert.h>

int pedir_n(char name[]){
    int n;
    printf("Ingresa un numero entero para la variable: %s \n", name);
    scanf("%d", &n);
    return n;
}

int main(){
    
    int x, y, z, X, Y, Z;

    X = pedir_n("x");
    Y = pedir_n("y");
    Z = pedir_n("z");

    x=X;
    y=Y;
    z=Z;

    assert(x==X && y==Y && z==Z);

    x = Y;
    y = Y + X + Z;
    z = Y + X;

    assert(x==Y && y==Y+X+Z && z==Y+X);

    printf("\nAhora x vale: %d, y vale: %d, z vale: %d", x, y, z);

    return 0;
}