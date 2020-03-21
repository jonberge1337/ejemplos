#include <stdio.h>
#include <string.h>

#define TAM 2048
int main(int argc, char *argv[]) {
    char frase[TAM];
    int tamaino;
    int comienzo = 0;
    puts("Introduce una frase");

    if(fgets(frase, TAM, stdin) && strlen(frase) > 1){
        tamaino = strlen(frase);
        char pFrase[tamaino];
        strcpy(pFrase, frase);
        memset(frase, 0, sizeof frase);
        puts("El array vacio");
        puts(frase);
        for (int i = tamaino; i >= 0; i--) {
            frase[comienzo] = pFrase[i];
            comienzo++;
        }
        puts("");
        puts("El array dado la vuelta");
        puts(frase);
    } else {
        puts("No has metido nada");
    }

    return 0;
}
