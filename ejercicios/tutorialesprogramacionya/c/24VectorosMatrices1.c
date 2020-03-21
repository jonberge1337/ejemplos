#include <stdio.h>
#include <string.h>

#define CANTIDAD 5
#define TAMNOM 50

void pedirDatos(char nombres[CANTIDAD][TAMNOM], int edades[CANTIDAD]){
    for (int i = 0; i < CANTIDAD; i++) {
        printf("Introduce el nombre %i: ", i + 1);
        scanf("%s", nombres[i]);
        /* nombres[i][strlen(nombres[i]) - 1] = '\0'; */
        printf("Introduce la edad de %s: ", nombres[i]);
        scanf("%i", &edades[i]);
        /* fseek(stdin, 0, SEEK_END); */
    }
}

int main(int argc, char *argv[]) {
    char nombres[5][50];
    int edades[5];
    pedirDatos(nombres, edades);
    for (int i = 0; i < CANTIDAD; i++) {
        if (edades[i] > 18) {
            printf("%s es mayor de edad\n", nombres[i]);
        }
    }

    return 0;
}
