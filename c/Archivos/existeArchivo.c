#include <stdio.h>
#include <unistd.h>

int main(void){
    if(access("/home/jb/Descargas/descuento.mp4", F_OK) != -1){
        puts("Existe");
    } else{
        puts("No existe");
    }

    return 0;
}
