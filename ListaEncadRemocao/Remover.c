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

void remove_depois (celula *p){
    celula *lixo;
    int aux;
    if (p->prox != NULL){
        lixo = p->prox;
        aux = lixo->dado;
        p->prox = lixo->prox;
        free (lixo);
    }   
}

void remove_elemento (celula *le, int x){
    celula *lixo;
    int aux;

    while (le->prox != NULL && le->prox->dado != x)
        le = le->prox;

    if (le->prox != NULL){
        lixo = le->prox;
        aux = lixo ->dado;
        le->prox = lixo->prox;
        free (lixo);
    }
}

void remove_todos_elementos (celula *le, int x){
    celula *lixo;
    int aux;

    while (le->prox != NULL){
        if (le->prox->dado == x){
            lixo = le->prox;
            aux = lixo ->dado;
            le->prox = lixo->prox;
            free (lixo);
        } else 
            le = le->prox;
    } 
}

int main (){

    celula *Start, *aux;
    int Valor, num, num2;
    Start = inicializa ();

    while (scanf ("%d", &Valor) != EOF)
        insereElemento (Start, Valor);
 
    remove_depois (Start);
    imprime_rec (Start);

    scanf ("%d", &num);
    remove_elemento (Start, num);
    imprime_rec (Start);

    scanf ("%d", &num2);
    remove_todos_elementos (Start, num2);
    imprime_rec (Start);

}
