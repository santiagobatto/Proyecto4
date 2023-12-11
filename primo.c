#include<stdio.h>
#include<stdbool.h>

int es_primo(int n) {
    if (n <= 1) {
        return 0; // No es primo si es menor o igual a 1.
    }

    int i = 2;
    while (i * i <= n) {
        if (n % i == 0) {
            return 0; // No es primo si es divisible por i.
        }
        i++;
    }

    return 1; // Es primo.
}

int nesimo_primo(int N) {
    if (N <= 0) {
        return -1; // No existe un número primo para N <= 0.
    }

    int count = 0; // Contador de números primos encontrados.
    int num = 2;   // Empezamos con el primer número primo.

    while (count < N) {
        if (es_primo(num)) {
            count++;
        }
        num++;
    }

    return num - 1; // Restamos 1 para obtener el enésimo número primo.
}

int main(){
    int n;
    bool band = true;
    printf("Ingrese un valor no negativo para encontrar el n-esimo numero primo: \n");
    scanf("%d", &n);
    while(band==true){
        if(n<0){
            printf("Ingreso incorrecto! Ingrese un nuevo valor 'n' tal que n < 0: \n");
            scanf("%d", &n);
        } 
        if(n>0){
            printf("Ingreso valido!\n");
            band = false;
        }

    }

    int resultado = nesimo_primo(n);

    if (resultado != -1) {
        printf("El %d-ésimo número primo es: %d\n", n, resultado);
    } else {
        printf("N debe ser un número positivo.\n");
    }

    return 0;
}