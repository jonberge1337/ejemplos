#include <stdio.h>

int main(int argc, char *argv[]) {
    for (int i = 1; i <= 50; i++) {
        if(i % 2 == 0){
            printf("%i ", i);
        }
    }
    return 0;
}
