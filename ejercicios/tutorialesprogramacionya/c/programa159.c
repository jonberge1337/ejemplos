#include<stdio.h>
#include<stdlib.h>

int main() {
    char *palabra;
    int cant;
    printf("Cuantas letras tiene la palabra que ingresara:");
    scanf("%i",&cant);
    fflush(stdin);
    palabra=malloc(cant*sizeof(char)+1);
    printf("Ingrese ahora la palabra:");
    gets(palabra);
    printf("La palabra ingresada es:%s",palabra);
    free(palabra);

    return 0;
}
