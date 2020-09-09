#include <stdio.h>
#include <stdlib.h>

typedef struct celula{
    int dado;
    struct celula *prox;
} celula;

celula *inicializa(){
    celula *PontoInicial = (celula*)malloc(sizeof(celula));   
        PontoInicial->prox = NULL;
}

void insereElemento (celula *le, int NovoConteudo){
    celula *nova;
    nova = malloc(sizeof(celula));
    while(le->prox != NULL){
        le = le->prox;
    }
    nova->prox = le->prox;
    le->prox = nova;
    nova->dado = NovoConteudo;
}

void imprime (celula *le){
    if (le->prox == NULL)
        printf ("NULL\n");
    else {
        for (le = le->prox; le != NULL; le = le->prox)
            printf ("%d -> ", le->dado);
        printf ("NULL\n");
    }
}

void divide_lista (celula *l, celula *l1, celula *l2){

    celula *aux;
    aux = l->prox;

    while (aux != NULL){
        if (aux->dado % 2 != 0){
            l1->prox = aux;
            l1 = l1->prox;
            aux =  aux->prox;
            l1->prox = NULL;
        }else {
            l2->prox = aux;
            l2 = l2->prox;
            aux = aux->prox;
            l2->prox = NULL;
        }
    }
}

int main (){

    celula *listaInicial, *listaImpares, *listaPares;
    int Valor;
    listaInicial = inicializa ();
    listaImpares = inicializa ();
    listaPares = inicializa ();

    while (scanf ("%d", &Valor) != EOF)
        insereElemento (listaInicial, Valor);

    imprime (listaInicial);

    divide_lista (listaInicial, listaImpares, listaPares);

    printf ("Lista Impares: ");
    imprime (listaImpares);
    printf ("Lista Pares: ");
    imprime (listaPares);
}
