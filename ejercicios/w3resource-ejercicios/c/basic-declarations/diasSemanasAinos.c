#include <stdio.h>

int main(int argc, char *argv[]) {
    int dias;
    int ainos;
    int semanas;

    puts("Introduce el numero de dias");
    if(scanf("%i", &dias)){
        printf("Numero de dias: %i\n", dias);
        ainos = dias / 365;
        dias %= 365;
        semanas = dias / 7;
        dias %= 7;
        printf("Años: %i\n", ainos);
        printf("Semanas: %i\n", semanas);
        printf("Dias: %i\n", dias);
    }
    return 0;
}
