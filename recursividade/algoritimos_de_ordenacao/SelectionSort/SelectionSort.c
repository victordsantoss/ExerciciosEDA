#include <stdio.h>
#include <stdlib.h>

void SelectionSort (int *v, int tam, int i);
void troca (int *a, int *b);

int main (){

    int tam;

    scanf ("%d", &tam);

    int *vetor = malloc (tam * sizeof (int));

    for (int i = 0; i < tam; i++)
        scanf ("%d", &vetor[i]);

    SelectionSort (vetor, tam, 0);

    for (int j = 0; j < tam; j++)
        printf ("%d ", vetor[j]);

    return 0;
}

void SelectionSort (int *v, int tam, int i){

    if (i < tam-1){
        int min = i;
        for (int j = i+1; j < tam; j++){
            if (v[j] < v[min])
                min = j;
            troca (&v[min], &v[j]);
            SelectionSort (v, tam, i+1);
        }
    }
}

void troca (int *a, int *b){ // Função que realiza a troca de posições para a ordenação
    int tmp = *a;
    *a = *b;
    *b = tmp;
}