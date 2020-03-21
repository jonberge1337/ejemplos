#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAMANO 4

struct producto {
    int codigo;
    char descripcion[40];
    float precio;
};

void cargar(struct producto pro[TAMANO]) {
    for (int i = 0; i < TAMANO; i++) {
        puts("\nIngrese el codigo de producto");
        while (!scanf("%i", &pro[i].codigo)){
            puts("Ingrese el codigo de producto");
            while (getchar() != '\n');
        }

        while (getchar() != '\n');
        puts("Introduce la descripcion del producto");
        if (!fgets(pro[i].descripcion, 40, stdin)) {
            exit(1);
        } else {
            pro[i].descripcion[strlen(pro[i].descripcion) - 1] = '\0';
        }

        puts("Ingrese el precio de producto");
        while (!scanf("%f", &pro[i].precio)) {
            puts("Ingrese el precio de producto");
            while (getchar() != '\n');

        }
    }
}

void imprimir(struct producto pro[TAMANO]){
    for (int i = 0; i < TAMANO; i++) {
        puts("Datos del producto");
        printf("Codigo del producto: %i\n", pro[i].codigo);
        printf("Descripcion: %s\n", pro[i].descripcion);
        printf("precio: %0.2f\n\n", pro[i].precio);
    }
}

int main(int argc, char *argv[]) {
    struct producto pro[TAMANO];
    cargar(pro);
    imprimir(pro);

    return 0;
}
