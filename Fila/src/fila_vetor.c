#include "fila_vetor.h"
#include <stdio.h>
#define N 5

static int fila[N];
static int p, u;

void criarFila ()
{
    p = 0;
    u = 0;
}

int inserir (int x)
{
    if(filaCheia ()) 
        return 0;
    fila[u++] = x;
    return 1;
}

int remover (int *x)
{
    if(filaVazia ())
        return 0;
    *x = fila[p];
    p++;
    return 1;
}

int filaCheia ()
{
    if(u == N) 
        return 1;
    return 0;
}

int filaVazia ()
{
    if(p == u)
    {
        p = 0;
        u = 0;
        return 1;
    }
    return 0;
}

int tam ()
{
    return N;
}

void imprime ()
{
    //traços superiores
    for (int i = 0; i < N; i++){
        if(!i) printf (" ");
        printf ("-----");
        if(i == N-1) printf("\n");
        else printf("-");
    }

    //Números
    for (int i = 0; i < N; i++){
        if(i >= p && i < u){
            printf("| %03d ", fila[i]);
        }
        else{
            printf("| xxx ");
        }
    }
    printf("|\n");

    //traços inferiores
    for (int i = 0; i < N; i++){
        if(!i) printf (" ");
        printf ("-----");
        if(i == N-1) printf("\n");
        else printf("-");
    }

    //posições do p e do u
    for (int i = 0; i < 6*p+3; i++){
        printf(" ");
    }
    printf ("p");
    if(p == u){
        for(int i = 0; i < (6*u+3)-(6*p+3); i++){
            printf("u");
        }
    }
    else
        for (int i = 0; i < (6*u+3)-(6*p+3)-1; i++){
            printf(" ");
        }
    printf("u");
}

void destroiFila (){}