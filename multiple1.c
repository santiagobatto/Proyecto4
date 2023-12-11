#include <stdio.h>
#include <assert.h>

int pedir_n(char name[]){
    int n;
    printf("Ingresa un numero entero para la variable: %s \n", name);
    scanf("%d", &n);
    return n;
}

int main(){
    
    int x, y, X, Y;

    X = pedir_n("x");
    Y = pedir_n("y");

    x=X;
    y=Y;    

    assert(x==X && y==Y);

    x += 1;
    y += X;

    assert(x==X+1 && y==X+Y);

    printf("\nAhora x vale: %d e y vale: %d", x, y);

    return 0;
}