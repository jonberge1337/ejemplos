#include <stdio.h>

void cargar(int *numeros, int tam){
    for (int i = 0; i < tam; i++) {
        printf("\nIntroduce el numero %i: ",i + 1);
        scanf("%i", numeros + i);
    }
}

void mayorMenor(int numeros[], int *pmayor, int *pmenor, int tam){
    *pmayor = numeros[0];
    *pmenor = numeros[0];
    for (int i = 1; i < tam; i++) {
        if (*(numeros + i) > *pmayor)
            *pmayor = *(numeros + i);
        else if (*(numeros + i) < *pmenor)
            *pmenor = *(numeros + i);
    }
}

int main(int argc, char *argv[]) {
    int cantidad;
    puts("De cuantos quieres el array?");
    scanf("%i", &cantidad);
    int numeros[cantidad];
    cargar(numeros, cantidad);
    int mayor, menor = 0;
    mayorMenor(numeros, &mayor, &menor, cantidad);
    printf("El mayor es -> %i\n", mayor);
    printf("El menor es -> %i\n", menor);

    return 0;
}
