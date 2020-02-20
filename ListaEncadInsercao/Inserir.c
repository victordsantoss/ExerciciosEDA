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

void insere_inicio (celula *le, int x){ // Insere elementos na primeira posicao
    celula *NovaCelula = (celula*)malloc(sizeof(celula));
    NovaCelula->dado = x;
    NovaCelula->prox = le->prox;
    le->prox = NovaCelula;
}

void insereElemento (celula *le, int NovoConteudo){ // Insere elementos um após o outro
    celula *nova; 
    nova = malloc(sizeof(celula));
    while(le->prox != NULL){
        le = le->prox;
    }
    nova->prox = le->prox;
    le->prox = nova;
    nova->dado = NovoConteudo;
}

void insere_antes (celula *le, int x, int y){ // Insere x imediatamente antes de y, caso nao encontre y, insere no final
    celula *NovaCelula = malloc (sizeof(celula));

    while (le->prox != NULL && le->prox->dado != y)
        le = le ->prox;

    NovaCelula->dado = x;
    NovaCelula->prox = le->prox;
    le->prox = NovaCelula;
}

void imprime_rec (celula *le){
    if (le->prox == NULL)
        printf ("NULL\n");
    else {
        printf ("%d -> ", le->prox->dado);
        imprime_rec (le->prox);
    }
}

int main (){

    celula *Start, *aux;
    int Valor, num, pos;
    Start = inicializa ();

    while (scanf ("%d", &Valor) != EOF)
        insere_inicio (Start, Valor);

    scanf ("%d", &num);
    scanf ("%d", &pos);

    insere_antes (Start, num, pos);
    imprime_rec (Start);

}

