#include <stdio.h>

void imprime(){
    puts("Hola mundo");
}

void cambiarNumero(int a){
    a += 1;
}

int main(int argc, char *argv[]) {
    void (*funcion)() = &imprime;
    (*funcion)();

    int x = 10;
    /* int *px = &x; */
    printf("El valor de x es -> %i\n", x);
    printf("La direccion de memoria de x es -> %p\n", &x);
    /* printf("La direccion de memoria de x es -> %u\n", px); */

    int edades[8];
    for (int i = 0; i < 8; i++) {
        printf("\n%p", edades+i);
    }

    puts("");

    for (int i = 0; i < 8; i++) {
        printf("\n%p", &edades[i]);
    }

    puts("");

    for (int i = 0; i < 8; i++) {
        printf("\n%p", edades);
    }

    int numero = 22;
    int *pNumero = &numero;
    /* Esto no va a cambiar porque va a hacer copia de lo que pNumero esta
     * apuntando */
    cambiarNumero(*pNumero);
    printf("\nEl numero es\n%i\n", *pNumero);

    return 0;
}
