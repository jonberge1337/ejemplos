#include <stdio.h>

#define TAMANO 5

void cargar(float *p){
    for (int i = 0; i < TAMANO; i++) {
        printf("Ingrese elemento: ");
        scanf("%f", &p[i]);
    }
}

void imprimir(float *p){
    for (int i = 0; i < TAMANO; i++) {
        printf("%0.2f\n", p[i]);
    }
}

int main(int argc, char *argv[]) {
    float vector[TAMANO];
    cargar(vector);
    imprimir(vector);

    return 0;
}
