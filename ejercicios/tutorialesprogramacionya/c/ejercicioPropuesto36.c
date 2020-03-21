#include <stdio.h>

int largo(char *cadena){
    int largo = 0;
    while(*cadena != '\0'){
        largo++;
        cadena++;
    }

    return largo;
}

int main(int argc, char *argv[]) {
    char *p[] = {
        "Hola mundo",
        "Quetal estamos",
        "Pues podriamos estar mejor",
        "Jon",
        "Karen",
        "Ashly"
    };

    for (int i = 0; i < 6; i++) {
        int largoNombre = largo(p[i]);
        printf("El nombre %s tiene la longitud de %i letras\n",p[i] ,largoNombre);
    }



    return 0;
}
