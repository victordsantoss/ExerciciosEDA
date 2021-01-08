#include <stdio.h>
#include <stdlib.h>

typedef struct celula {
    int dado;
    struct celula *prox;
} celula;

celula *inicializa(){
    celula *PontoInicial = (celula*)malloc(sizeof(celula));   
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

void imprime_rec (celula *le){
    if (le->prox == NULL)
        printf ("NULL\n");
    else {
        printf ("%d -> ", le->prox->dado);
        imprime_rec (le->prox);
    }
}

celula *busca (celula *le, int x){

    for (le = le->prox; le != NULL && le->dado != x; le = le->prox);
    return le;
}

celula *busca_rec (celula *le, int x){
    if (le->prox == NULL)
        return NULL;
    else {
        if (le->prox->dado == x)
            return le->prox;
        else 
            return busca_rec (le->prox, x);
    }
}

int main (){

    celula *Start, *aux;
    int Valor, num;
    Start = inicializa ();

    while (scanf ("%d", &Valor) != EOF)
        insereElemento (Start, Valor);

    scanf ("%d", &num);
    aux = busca (Start, num);
    printf ("%d \n", aux->dado);
}
