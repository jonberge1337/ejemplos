#include <unistd.h>
#include <stdio.h>

#define TAM 250
int main(){
    char path[TAM];
    if(getcwd(path, sizeof(path)) != NULL){
        printf("la ruta que estas: %s\n", path);
    } else {
        perror("getcwd() error");
        return 1;
    }
    return 0;
}
