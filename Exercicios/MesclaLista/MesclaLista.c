#include <stdio.h>
#include <stdlib.h>

typedef struct celula{
    int dado;
    struct celula *prox;
} celula;

celula *inicializa(){
    celula *PontoInicial =  malloc(sizeof(celula));   
    PontoInicial->prox = NULL;

    return PontoInicial;
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
        for (celula *x = le->prox; x != NULL; x = x->prox)
            printf ("%d -> ", x->dado);
        printf ("NULL\n");
    }
}

void mescla_listas (celula *l1, celula *l2, celula *l3){

    celula *final, *lista1, *lista2, *aux;

    final = l3;
    lista1 = l1->prox;
    lista2 = l2->prox;

    while (lista1 != NULL && lista2 != NULL){
        if (lista1->dado > lista2->dado){
            aux = lista1->prox;
            final->prox = lista1;
            lista1 = aux;
        }else {
            aux = lista2->prox;
            final->prox = lista2;
            lista2 = aux;
        }
        final = final->prox;
    }

    if (lista1 == NULL){
        final->prox = lista2;
    }
    else if(lista2 == NULL){
        final->prox = lista1;
    }
}

int main (){

    celula *listaOrdenada, *lista1, *lista2;
    int Valor;
    listaOrdenada = inicializa ();
    lista1 = inicializa ();
    lista2 = inicializa ();

    while (scanf ("%d", &Valor) != EOF)
        insereElemento (lista1, Valor);

    while (scanf ("%d", &Valor) != EOF)
        insereElemento (lista2, Valor);

    imprime (lista1);
    imprime (lista2);

    mescla_listas (lista1, lista2, listaOrdenada);

    imprime (listaOrdenada);

    return 0;

}