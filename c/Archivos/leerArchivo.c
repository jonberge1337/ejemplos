#include <stdio.h>

#define TAM 2048
int main(int argc, char *argv[]) {
    FILE *fp;
    fp = fopen(argv[1], "r");
    char buf[TAM];
    while(fgets(buf, TAM, fp)){
        printf("%s", buf);
    }

    fclose(fp);
    return 0;
}
