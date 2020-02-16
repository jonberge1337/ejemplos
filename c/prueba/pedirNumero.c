#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXIMO 20
int main(){
    char *end;
    char buf[MAXIMO];

    do{
        puts("Introduce un numero: ");
        fgets(buf, sizeof(buf), stdin);

        buf[strlen(buf) - 1] = 0; // Quitamos salto de linea

        int n = strtol(buf, &end, 10);
        if(n){
            printf("Has introducido %i\n", n);
        } else if(strlen(buf) == 1 && n == 0){
            printf("Has introducido %i\n", n);
        } else {
            puts("No has introducido un numero valido");
        }
    }while(end != buf + strlen(buf));

    return 0;
}
