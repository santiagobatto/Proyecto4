#include <stdio.h>
#include <assert.h>

int pedir_n(char name[]){
    int n;
    printf("Ingresa un numero entero para la variable: %s \n", name);
    scanf("%d", &n);
    return n;
}

int main(void){

    int x,y;
    x = pedir_n("x");
    y = pedir_n("y");

    assert(x!=y);

    if (x<y){
        printf("El menor entre x = %d e y = %d es \nx", x, y);
        assert(x<y);
    }else{
        printf("El menor entre x = %d e y = %d es \ny", x, y);
        assert(x>y);
    }

return 0;
}