#include <stdio.h>
#include <string.h>

struct producto {
    int codigo;
    char descripcion[41];
    float precio;
};

void cargar(struct producto *pprod) {
    printf("Ingrese codigo: ");
    scanf("%i", &pprod->codigo);
    while (getchar() != '\n')
        ;
    printf("Ingrese descripcion: ");
    fgets(pprod->descripcion, 41, stdin);
    pprod->descripcion[strlen(pprod->descripcion) - 1] = '\0';
    printf("Ingrese precio: ");
    scanf("%f", &(*pprod).precio);
}

void imprimir(struct producto prod) {
    printf("Codigo: %i\n", prod.codigo);
    printf("Descripcion: %s\n", prod.descripcion);
    printf("Precio: %0.2f", prod.precio);
}

int main(int argc, char *argv[]) {
    struct producto pro;
    cargar(&pro);
    imprimir(pro);

    return 0;
}
