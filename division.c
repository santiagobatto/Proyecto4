#include<stdio.h>

struct div_t {  //Sirve para poder agrupar datos de diferentes tipos para asi definir un nuevo tipo de dato
    int cociente;
    int resto;
};

struct div_t division(int x, int y){    // funcion division, devuelve una estructura del tipo div_t. Sive para declarar una variable del tipo de dato de la estructura anterior y asignarle valores
    struct div_t result;    //almacenara los resultados de la division entera de tipo div_t
    result.cociente = x / y;
    result.resto = x % y;
    return result;
}


int main(){
    
    int x,y;
    printf("Ingresa el dividendo de la division: \n");
    scanf("%d", &x);
    printf("Ingresa el divisor de la division: \n");
    scanf("%d", &y);

    struct div_t result = division(x,y);    //llamo a la funcion division para traer los resultados a mi main

    if (y==0)
        printf("Ingreso incorrecto, no esta permitida la division por 0");
    else {
        printf("El cociente de la division es: %d\n", result.cociente );
        printf("El resto de la division es: %d\n", result.resto );
    }

    return 0;
}