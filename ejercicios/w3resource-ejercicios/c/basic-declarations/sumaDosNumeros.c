#include <stdio.h>
#include <string.h>

void introduceNumero(int *n){
    puts("Introduce un numero");
    while(!scanf("%i", n)){
        while(getchar()!='\n');
        puts("No has introducido un numero valido");

    }
}
int main(int argc, char *argv[]) {
    int n1;
    int n2;
    int *pN1 = &n1;
    introduceNumero(pN1);
    pN1 = &n2;
    introduceNumero(pN1);
    printf("%i\n", n1 + n2);

    return 0;
}
