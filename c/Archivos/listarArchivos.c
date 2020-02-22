#include <dirent.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
    DIR *d;
    struct dirent *dir;
    if (argc == 2){
        d = opendir(argv[1]);
        if(d){
            while((dir = readdir(d)) != NULL){
                printf("%s %i\n", dir->d_name, dir->d_type);
            }
            closedir(d);
        } else {
            puts("No es una ruta valida");
        }

    } else {
        puts("Tienes que pasarle como parametro la ruta");
    }

    return 0;
}
