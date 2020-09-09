#include <stdio.h>
#include <stdlib.h>

typedef struct pilha{
    char *palavra;
    int n, topo;
} pilha;

typedef struct fila {
    char *palavra;
    int p, u, n;
} fila;

void iniciaPilha (pilha *p, int tam){
    p->n = tam;
    p->palavra = malloc (tam * sizeof(char));
    p->topo = 0;
}

void iniciaFila (fila *f, int tam){
    f->n = tam;
    f->palavra = malloc (tam * sizeof(char));
    f->p = f->u = 0;
}

void empilha (pilha *p, char letra){
    p->palavra[p->topo] = letra;
    p->topo++;
}

void enfileira (fila *f, char letra){
    f->palavra[f->u] = letra;
    f->u++;
}

char desempilha (pilha *p, int tam){
    if (p->topo == 0)
        exit (EXIT_FAILURE);
    p->topo--;
    return p->palavra[p->topo];
}

char desenfileira (fila *f, int tam){
    if (f->p == f->u)
        exit (EXIT_FAILURE);
    f->p++;
    return f->palavra[f->p];
}

int main (){

    pilha *p1 = malloc (sizeof (pilha));
    fila *f1 = malloc (sizeof (fila));
    int tamPalavra;
    char palindromo, aux1, aux2, aux3 = 0;

    scanf ("%d", &tamPalavra);

    iniciaPilha (p1, tamPalavra);
    iniciaFila (f1, tamPalavra);


    for (int i = 0; i <= tamPalavra; i++){
        scanf ("%c", &palindromo);
        empilha (p1, palindromo);
        enfileira (f1, palindromo);
    }

    while (tamPalavra > 0){
        aux1 = desempilha (p1, tamPalavra);
        aux2 = desenfileira (f1, tamPalavra);

        if (aux1 == aux2){
            aux3 = 1;
        }
        else{
            printf ("0\n");
            aux3 = 0;
            break;
        }
        tamPalavra--;
    }

    if (aux3 == 1)
        printf ("1\n");

    return 0;
}