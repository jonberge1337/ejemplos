#include <stdio.h>

int mediaEdades(int *edades, int tam){
    int suma = *edades;
    for (int i = 1; i < tam; i++) {
        suma += *(edades + i);
    }

    return suma/tam;
}

int main(int argc, char *argv[]) {
    int media;
    /* int edades[] = {9, 32, 29}; */
    int edades = 19;
    media = mediaEdades(&edades, sizeof(edades) / sizeof(int));
    printf("La edad media es -> %i\n", media);


    return 0;
}
