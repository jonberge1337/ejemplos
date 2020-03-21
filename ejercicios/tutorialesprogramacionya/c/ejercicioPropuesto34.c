#include <stdio.h>
#include <string.h>

struct pais{
    char nombre[40];
    int cantidadhab;
};

void cargar(struct pais *p, int tam){
    for (int i = 0; i < tam; i++) {
        printf("Introduce el nombre del pais %i: ", i + 1);
        fgets(p[i].nombre, 40, stdin);
        int tamPalabra = strlen(p[i].nombre) - 1;
        p[i].nombre[tamPalabra] = '\0';
        printf("Introduce la cantidad de habitantes de %s: ", p[i].nombre);
        scanf("%i", &p[i].cantidadhab);
        while (getchar() != '\n')
            ;
    }
}

void mostrarPaises(struct pais *p, int tam){
    for (int i = 0; i < tam; i++) {
        printf("Nombre del pais: %s\n", p[i].nombre);
        printf("Tiene %i habitantes.\n\n", p[i].cantidadhab);
    }
}

int main(int argc, char *argv[]) {
    struct pais paises[3];
    cargar(paises, 3);
    mostrarPaises(paises, 3);

    return 0;
}
