#include <stdio.h>

void cargar(int *pe1, int *pe2){
    *pe1 = 100;
    *pe2 = 200;
}

int main(int argc, char *argv[]) {
    int x1, x2;
    cargar(&x1, &x2);
    printf("x1 = %i, x2 = %i\n", x1, x2);

    return 0;
}
