#include <stdio.h>

int main(){
    FILE *archivo = fopen("archivoPrueba.txt", "w"); // creamos archivo
    if(!archivo){ perror("Error al crear archvio"); return 1;}
    puts("Archivo creado");
    fclose(archivo);

    int eliminado;
    eliminado = remove("archivoPrueba.txt"); // si elimina devuelve 0
    if(eliminado){ perror("Error al eliminar el archivo"); return 1;}
    puts("Se ha eliminado el archivo");

    return 0;
}
