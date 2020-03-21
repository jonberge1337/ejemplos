#include <stdio.h>

void intercambiar(int *pe1, int *pe2){
    int aux = *pe1;
    *pe1 = *pe2;
    *pe2 = aux;
}

int main(int argc, char *argv[]) {
    int x1 = 10;
    int x2 = 20;
    printf("x1 = %i x2 = %i\n", x1, x2);
    intercambiar(&x1, &x2);
    printf("x1 = %i x2 = %i\n", x1, x2);

    return 0;
}
