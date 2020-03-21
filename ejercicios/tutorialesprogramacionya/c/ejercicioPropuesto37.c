#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    char *palabra;
    int tam;
    printf("De cuanto quieres introducir la palabra?: ");
    scanf("%i", &tam);
    while (getchar() != '\n');
    tam*=sizeof(char);
    tam+=1;
    palabra = malloc(tam);
    printf("Introduce la palabra: ");
    fgets(palabra, tam, stdin);
    printf("%s", palabra);
    free(palabra);

    return 0;
}
