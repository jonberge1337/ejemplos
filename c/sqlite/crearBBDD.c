#include <stdio.h>
#include <sqlite3.h>

int main(int argc, char *argv[]) {
    sqlite3 *db;
    int rc;

    rc = sqlite3_open("test.db", &db);

    if(rc) {
        puts("No se ha podidod abrir la BBDD");
    } else {
        fprintf(stderr, "abierto satisfactoriamente\n");
    }

    sqlite3_close(db);

    return 0;
}
