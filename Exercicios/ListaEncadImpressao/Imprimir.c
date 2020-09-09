#include <stdio.h>
#include <stdlib.h>

typedef struct celula{
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

void imprime (celula *le){
    if (le->prox == NULL)
        printf ("NULL\n");
    else {
        for (le = le->prox; le != NULL; le = le->prox)
            printf ("%d -> ", le->dado);
        printf ("NULL\n");
    }
}

void imprime_rec (celula *le){
    if (le->prox == NULL)
        printf ("NULL\n");
    else {
        printf ("%d -> ", le->prox->dado);
        return imprime_rec (le->prox);
    }
}

int main (){

    celula *Start;
    int Valor;
    Start = inicializa ();

    while (scanf ("%d", &Valor) != EOF)
        insereElemento (Start, Valor);

    imprime_rec (Start);
}
