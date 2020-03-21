#include <stdio.h>
#include <string.h>

struct tabla {
    int codigo;
    char nombre[30];
    char apellido[30];
};

int main(int argc, char *argv[]) {
    struct tabla cliente;
    cliente.codigo = 1;
    strcpy(cliente.nombre, "Jon");
    strcpy(cliente.apellido, "Jon");
    printf("Codigo %i\nNombre %s\nApellido %s\n", cliente.codigo, cliente.nombre,
            cliente.apellido);
    return 0;
}
