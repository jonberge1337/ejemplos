#include <stdio.h>

#define TAM 2048
int main(int argc, char *argv[]) {
    FILE *fp;
    fp = fopen("./pwd.c", "r");
    char buf[TAM];
    while(fgets(buf, TAM, fp)){
        puts(buf);
    }

    fclose(fp);
    return 0;
}
