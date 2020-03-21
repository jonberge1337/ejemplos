#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    char cNumero[10];
    int numero,i,j = 0;
    int palindrome = 1;
    puts("Introduce un numero");
    scanf("%i", &numero);
    sprintf(cNumero, "%i", numero);
    j = strlen(cNumero) - 1;

    for (i = 0; i < strlen(cNumero) / 2; i++) {
        if (cNumero[i] != cNumero[j]){
            printf("%i", cNumero[j]);
            palindrome = 0;
        }
        j--;
    }

    if (palindrome) {
        puts("Es palindrome");
    } else {
        puts("No es palindrome");
    }

    return 0;
}
