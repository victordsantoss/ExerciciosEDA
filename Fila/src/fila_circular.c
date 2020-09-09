#include "fila_circular.h"
#include <stdio.h>
#include <stdlib.h>

static int *fila;
static int p, u, n;

int criarFila ()
{
    if (fila != NULL)
        destroiFila ();

    p = 0;
    u = 0;
    n = 5;

    fila = malloc (n* sizeof (int));
    if (fila == NULL)
        return 0;
    else
        return 1;
}

int inserir (int x)
{
    if (filaCheia ())
    {
        if (!redimensiona ())
        {
            return 0;
        }
    }
    fila [u] = x;
    u = (u+1)%n;
    return 1;
}

int remover (int *x)
{
    if (filaVazia ())
        return 0;
    else 
        *x = fila[p];
        p = (p+1)%n;
        return 1; 
}

int filaCheia ()
{
    if ((u+1)%n == p)
        return 1;
    else 
        return 0;
}

int filaVazia ()
{
    if (p == u)
        return 1;
    else
        return 0;
}

int tam ()
{
    return n;
}

void imprime ()
{
    //traços superiores
    for (int i = 0; i < tam(); i++){
        if(!i) printf (" ");
        printf ("-----");
        if(i == tam()-1) printf("\n");
        else printf("-");
    }
    //números
    if (p <= u){
        for (int i = 0; i < tam(); i++){
            if(i >= p && i < u){
                printf("| %03d ", fila[i]);
            }
            else printf("| xxx ");
        }
    }
    else{
        for (int i = 0; i < tam(); i++){
            if(i >= u && i < p){
                printf("| xxx ");
            }
            else{
                printf("| %03d ", fila[i]);
            }
        }
    }
    printf("|\n");
    
    //traços inferiores
    for (int i = 0; i < tam(); i++){
        if(!i) printf (" ");
        printf ("-----");
        if(i == tam()-1) printf("\n");
        else printf("-");
    }

    //posições do p e do u
    int maior, menor;
    if(p <= u){
        maior = u;
        menor = p;
    }
    else{
        maior = p;
        menor = u;
    }

    for (int i = 0; i < 6*menor+3; i++){
        printf(" ");
    }
    if (menor == p){
        printf ("p");
    }
    else{
        printf("u");
    }
    if(maior == menor){
        for(int i = 0; i < (6*maior+3)-(6*menor+3); i++){
            printf("u");
        }
    }
    else
        for (int i = 0; i < (6*maior+3)-(6*menor+3)-1; i++){
            printf(" ");
        }
    if (menor == p){
        printf ("u");
    }
    else{
        printf("p");
    }
}

int redimensiona ()
{
    int i, j;
    fila = realloc (fila, 2*n*sizeof (int));
    if (fila == NULL)
        return 0;
    if (p > u)
    {
        if (n-p > u)
        {
            for (i = 0, j = n; i < u; i++, j++)
            {
                fila[j] = fila[i];
            }
            u = u+n;
        }else 
        {
            for (i = n-1, j = 2*n-1; i >= p; i--, j--)
            {
                fila[j] = fila[i]; 
            }
            p = j+1;
        }
    }
    n = 2*n;
    return 1;
}

void destroiFila (){
    free(fila);
}
