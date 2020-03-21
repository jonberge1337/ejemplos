#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct producto {
    int codigo;
    char descripcion[40];
    float precio;
};

struct producto cargar() {
    struct producto pro;
    puts("\nIngrese el codigo de producto");
    while (!scanf("%i", &pro.codigo)){
        puts("Ingrese el codigo de producto");
        while (getchar() != '\n');
    }

    while (getchar() != '\n');
    puts("Introduce la descripcion del producto");
    if (!fgets(pro.descripcion, 40, stdin)) {
        exit(1);
    } else {
        pro.descripcion[strlen(pro.descripcion) - 1] = '\0';
    }

    puts("Ingrese el precio de producto");
    while (!scanf("%f", &pro.precio)) {
        puts("Ingrese el precio de producto");
        while (getchar() != '\n');

    }
    return pro;
}

void imprimir(struct producto pro){
    puts("Datos del producto");
    printf("Codigo del producto: %i\n", pro.codigo);
    printf("Descripcion: %s\n", pro.descripcion);
    printf("precio: %0.2f\n\n", pro.precio);
}

int main(int argc, char *argv[]) {
    struct producto pro1, pro2;
    pro1 = cargar();
    pro2 = cargar();
    imprimir(pro1);
    imprimir(pro2);

    return 0;
}
