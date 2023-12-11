#include<stdio.h>
#include<assert.h>
#include<stdbool.h>

char pedir_char(char name[]){
    char c;
    printf("Ingrese un caracter para la variable %s: \n", name);
    scanf("%s", &c);
    return c;
}

bool es_vocal(char letra){
    bool band = false;
    switch (letra)
    {
    case 'a':
    case 'A':
        printf("Es la vocal 'A' o 'a'\n");
        band=true;
        break;
    case 'e':
    case 'E':
        printf("Es la vocal 'E' o 'e'\n");
        band=true;
        break;
    case 'i':
    case 'I':
        printf("Es la vocal 'I' o 'i'\n");
        band=true;
        break;
    case 'o':
    case 'O':
        printf("Es la vocal 'O' o 'o'\n");
        band=true;
        break;
    case 'u':
    case 'U':
        printf("Es la vocal 'U' o 'u'\n");
        band=true;
        break;
    default:
        printf("El caracter ingresado no es una vocal!\n");
        band=false;
    }
    return band;
}

int main(){
    
    char c;
    bool band;
    c = pedir_char("c");
    band = es_vocal(c);
    if(band==true) printf("Ingreso correcto de una vocal!");
    else printf("Ingreso incorrecto :(");

    return 0;
}