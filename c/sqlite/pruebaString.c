#include <stdio.h>
#include <string.h>

const char * sentencia(char *seleccionar, char *tabla){
    char *select = "SELECT ";
    char *from = " FROM ";
    char sql[2048];
    char *sqlVerdadero = 0;
    strcpy(sql, select);
    strcat(sql, seleccionar);
    strcat(sql, from);
    strcat(sql, tabla);
    strcpy(sqlVerdadero, sql);
    return sqlVerdadero;
}
int main(int argc, char *argv[]) {
    char consulta[1024];
    char *a = "prueba1";
    char *b = "prueba2";
    char *c = "prueba3";
    char *e = "prueba4";
    char *junto;

    strcpy(consulta, a);
    strcat(consulta, b);
    strcat(consulta, c);
    strcat(consulta, e);
    puts(consulta);
    junto = consulta + strlen(consulta);
    strcpy(junto, consulta);
    puts(junto);
    puts(consulta);

    char *jeje = "prueba1" \
                  "jijiji" \
                  "jijiji" \
                  "jijiji" \
                  "jijiji" \
                  "jijiji";
    puts(jeje);
    const char *prueba = sentencia("*", "prueba");
    puts(prueba);


    return 0;
}
