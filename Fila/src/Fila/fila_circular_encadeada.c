#include "fila_circular_encadeada.h"
#include <stdio.h>
#include <stdlib.h>

typedef struct Celula
{
    int Conteudo;
    struct Celula *Proxima;
}Celula;

Celula *Fila;

int criarFila ()
{
    int elem;
    if (Fila != NULL)
        destroiFila ();
    Fila = malloc (sizeof(Celula));
    if (Fila == NULL)
        return 0;
    else    
        Fila->Proxima = Fila;
        return 1;
}

int inserir (int x)
{
    Celula *Nova = malloc (sizeof(Celula));
    if (Nova == NULL)
        return 0;
    Nova->Proxima = Fila->Proxima;
    Fila->Proxima = Nova;
    Fila->Conteudo = x;
    Fila = Nova;
    return 1;
}

int remover (int *x)
{
    if (filaVazia())
        return 0;
    Celula *Lixo = Fila->Proxima;
    *x = Lixo->Conteudo;
    Fila->Proxima = Lixo->Proxima;
    free (Lixo);
    return 1;
}
int filaVazia ()
{
    if (Fila->Proxima == Fila)
        return 1;
    return 0;
}

int tam ()
{
    Celula *p = Fila->Proxima;
    int i;

    for (i = 0; p != Fila; p = p->Proxima, i++);
    return i;
    
}

void imprime ()
{
    int N = tam ();
    
    //traços superiores
    for (int i = 0; i < N; i++){
        if(!i) printf (" ");
        printf ("-----");
        if(i == N-1) printf("\n");
        else printf("-");
    }

    //Números
    if (N != 0){
        for (Celula *p = Fila->Proxima; p != Fila; p = p->Proxima){
            printf("| %03d ", p->Conteudo);
        }
        printf ("|\n");
    }

    //traços inferiores
    for (int i = 0; i < N; i++){
        if(!i) printf (" ");
        printf ("-----");
        if(i == N-1) printf("\n");
        else printf("-");
    }
}

void destroiFila(){
    int elem;
    while (remover (&elem));
    free(Fila);
}