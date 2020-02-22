#include <stdio.h>

int long long factorial(int n){
    int long long fac = 1;
    if(n != 0){
        for (int i = 1; i <= n; i++) {
            fac *= i;
        }
    }

    return fac;
}

int long long rfactorial(int n){
    int long long fac = n;
    if(n != 0){
        fac *= rfactorial(n - 1);
        return fac;
    } else {
        return 1;
    }

}
int main(int argc, char *argv[]) {
    int numero;
    int correcto;
    int long long fact;
    correcto = scanf("%i", &numero);
    if(correcto){
        fact = rfactorial(numero);
        printf("%llu\n", fact);
    }
    return 0;
}
