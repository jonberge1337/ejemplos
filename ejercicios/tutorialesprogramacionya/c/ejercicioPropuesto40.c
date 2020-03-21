#include <stdio.h>
#include <stdlib.h>

struct nodo{
    int info;
    struct nodo *sig;
};

/* variable global que apunta al primer nodo de la lista */
struct nodo *raiz = NULL;

void insertar(int x){
    struct nodo *nuevo;
    nuevo = malloc(sizeof(struct nodo));
    nuevo->info = x;
    if (raiz == NULL) {
        nuevo->sig = NULL;
        raiz = nuevo;
    } else {
        nuevo->sig = raiz;
        raiz = nuevo;
    }
}

void imprimir(){
    struct nodo *reco = raiz;
    printf("Lista completa.\n");
    while (reco != NULL) {
        printf("%i", reco->info);
        reco = reco->sig;
    }
    printf("\n");
}

int extraer(){
    if (raiz!=NULL) {
        int informacion = raiz->info;
        struct nodo *bor = raiz;
        raiz = raiz->sig;
        free(bor);
        return informacion;
    } else{
        return -1;
    }
}

void liberar(){
    struct nodo *reco = raiz;
    struct nodo *bor;
    while(reco != NULL){
        bor = reco;
        reco = reco->sig;
        free(bor);
    }
}

int vacia(){
    return raiz == NULL ? 1 : 0;
}

int cantidad(){
    int cantidad = 0;
    struct nodo *n = raiz;
    while(n != NULL){
        n = n->sig;
        cantidad++;
    }

    return cantidad;
}

void mostrarPrimeroPilar(){
    if(raiz != NULL){
        for (int i = 0; i < 10; i++) {
            printf("El primero de la pila es %i\n", raiz->info);
            printf("Con la direccion de memoria %p\n", raiz->sig);
        }
    } else {
        puts("No has inicializado la lista, esta a NULL");
    }
}

int main(int argc, char *argv[]) {
    insertar(10);
    insertar(40);
    insertar(3);
    mostrarPrimeroPilar();
    imprimir();
    printf("Extraemos de la pila:%i\n", extraer());
    imprimir();
    printf("La cantidad de nodos de la pila es: %i\n", cantidad());
    while (!vacia()) {
        printf("Extraemos de la pila: %i\n", extraer());
        printf("La cantidad de nodos de la pila es: %i\n", cantidad());
    }
    liberar();

    return 0;
}
