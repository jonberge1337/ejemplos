#include <stdio.h>

int main(){

    int eliminado;
    eliminado = remove("archivoPrueba.txt"); // si elimina devuelve 0
    if(eliminado){ perror("Error al eliminar el archivo"); return 1;}
    puts("Se ha eliminado el archivo");

    return 0;
}
