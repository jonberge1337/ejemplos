#include<stdio.h>

void cargar(char nombres[5][40],int notas[5])
{
    int f;
    for(f=0;f<5;f++)
    {
        printf("Ingrese el nombre del alumno:");
        gets(nombres[f]);
        printf("Ingrese la nota del alumno:");
        scanf("%i", &notas[f]);
        fflush(stdin);
    }
}

void ordenar(char nombres[5][40],int notas[5])
{
    int k,f;
    int auxnota;
    char auxnombre[40];
    for(k=0;k<5;k++)
    {
        for(f=0;f<4-k;f++)
        {
            if (notas[f]<notas[f+1])
            {
                auxnota=notas[f];
                notas[f]=notas[f + 1];
                notas[f+1]=auxnota;
                strcpy(auxnombre, nombres[f]);
                strcpy(nombres[f], nombres[f+1]);
                strcpy(nombres[f+1],auxnombre);
            }
        }
    }
}

void imprimir(char nombres[5][40],int notas[5])
{
    int f;
    printf("Listado de alumnos ordenados por notas en forma descendiente\n");
    for(f=0;f<5;f++)
    {
        printf("%s - %i\n",nombres[f],notas[f]);
    }
}


int main()
{
    char nombres[5][40];
    int notas[5];
    cargar(nombres,notas);
    ordenar(nombres,notas);
    imprimir(nombres,notas);
    return 0;
}
