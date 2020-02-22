#include <dirent.h>
#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>

int es_fichero(const char *path){
    struct stat path_stat;
    stat(path, &path_stat);
    return S_ISREG(path_stat.st_mode);

}
int main(int argc, char *argv[]) {
    if(es_fichero(argv[1])){
        printf("%s es fichero\n", argv[1]);
    } else {
        printf("%s no es fichero\n", argv[1]);
    }

    return 0;
}
