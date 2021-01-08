#include <stdio.h>
#include <stdlib.h>

void InsertionSort (int *v, int tam, int i);
void troca (int *a, int *b);

int main (){

    int tam;

    scanf ("%d", &tam);

    int *vetor = malloc (tam * sizeof (int));

    for (int i = 0; i < tam; i++)
        scanf ("%d", &vetor[i]);

    InsertionSort (vetor, tam, tam);

    for (int j = 0; j < tam; j++)
        printf ("%d ", vetor[j]);

    return 0;
}

void InsertionSort (int *v, int tam, int i){

    if (i != 0){
        InsertionSort (v, tam, i-1);
        for (int j = i; j > 0 && v[j] < v[j-1]; j--)
            troca (&v[j], &v[j-1]);
    }
}

void troca (int *a, int *b){ // Função que realiza a troca de posições para a ordenação
    int tmp = *a;
    *a = *b;
    *b = tmp;
}