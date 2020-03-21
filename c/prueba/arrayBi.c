#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define FILA 3
#define COLUMNA 4
void cargarArray(int arr[FILA][COLUMNA]){
    time_t t;
    srand((unsigned) time(&t));
    for (int i = 0; i < FILA; i++) {
        for (int j = 0; j < COLUMNA; j++) {
            arr[i][j] = rand() % 10;
        }
    }
}

void mostrarArray(int arr[FILA][COLUMNA]){
    for (int i = 0; i < FILA; i++) {
        for (int j = 0; j < COLUMNA; j++) {
            printf("fila %i columna %i = %i\n", FILA, COLUMNA, arr[i][j]);
        }
    }
}

int main(int argc, char *argv[]) {
    int matriz[FILA][COLUMNA];
    cargarArray(matriz);
    mostrarArray(matriz);
    return 0;
}
