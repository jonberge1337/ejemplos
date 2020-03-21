#include <stdio.h>
#include <math.h>

void introduceNumero(int *n, char *xy){
    printf("Introduce el punto %s\n", xy);
    while(!scanf("%i", n)){
        while(getchar()!='\n');
        puts("No has introducido un numero valido");

    }
}
int main(int argc, char *argv[]) {
    int x1;
    int y1;
    int x2;
    int y2;
    int *pN1 = &x1;
    double pitagoras;
    introduceNumero(pN1, "x1");
    pN1 = &y1;
    introduceNumero(pN1, "y1");
    pN1 = &x2;
    introduceNumero(pN1, "x2");
    pN1 = &y2;
    introduceNumero(pN1, "y2");
    pitagoras = sqrt(pow((double)(x1 - x2), 2.0) + pow((double)(y1 - y2), 2.0));
    printf("%lf\n", pitagoras);

    return 0;
}
