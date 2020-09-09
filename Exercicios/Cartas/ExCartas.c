#include <stdio.h>
#include <stdlib.h>

void inserirPilha(int *pilha, int numero, int *topo){
    *pilha = numero;
    *topo = *topo + 1;
}

int removerPilha(int *pilha, int *topo){
    int numero;
    numero = pilha[*topo - 1];
    *topo = *topo - 1;
    return numero;
}

void reempilhar(int *pilha, int *pilhaux, int *topo, int *topoaux){
    while(*topoaux > 0){
        inserirPilha(&pilha[*topo], removerPilha(pilhaux, topoaux), topo);
    }
}

void imprime(int *pilha, int topo){
    for(int i = 0; i < topo; i++){
        printf("pilha : %d\n", pilha[i]);
    }
}

void nimpar(int *n){
    if(*n%2) *n = *n + 1;
    else return; 
}

int main(){
    int n, topo = 0, topoaux = 0;
    scanf("%d", &n);
    int nsave = n;
    int *pilha = malloc(n * sizeof(int));
    int *pilhaux = malloc(n * sizeof(int));
    int *valores = malloc(n * sizeof(int));

    for(int i = 0, j = n; j > 0; j--, i++){
        inserirPilha(&pilha[i], j, &topo);
    }

    int i = 0, j = 1;
    while(n > 1){
        nimpar(&n);
        for(j; topo > 0; j = (j+1)%2){
            if(j){
                valores[i++] = removerPilha(pilha, &topo);
            }
            else{
                inserirPilha(&pilhaux[topoaux], removerPilha(pilha, &topo), &topoaux);
            }
        }

        reempilhar(pilha, pilhaux, &topo, &topoaux);
        n = n/2;
    }

    printf("Cartas descartadas: ");
    for(i = 0; i < nsave; i++){
        if(i == nsave-2){
            printf("%d\n", valores[i]);
        }
        else if(i == nsave-1){
            printf("Carta restante: %d\n", removerPilha(pilha, &topo));
        }   
        else{
            printf("%d, ", valores[i]);
        }
    }
    free(pilha);
    free(pilhaux);
    free(valores);
    return 0;
}
