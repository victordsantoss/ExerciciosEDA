#include <stdio.h>
#include <stdlib.h>

int maiorElementoVetor (int *vetor, int tamanho);

int main (){

    int tamanho; 

    scanf ("%d", &tamanho);

    int *vetor = malloc (tamanho * sizeof(int));

    for (int i = 0; i < tamanho; i++)
        scanf ("%d", &vetor[i]);

    printf ("O maior elemento do vetor e: %d\n", maiorElementoVetor (vetor, tamanho));

    return 0;
}

int maiorElementoVetor (int *vetor, int tamanho){

    if (tamanho == 1) 
        return vetor[0];
    else {
        int auxiliar = maiorElementoVetor (vetor, tamanho-1);
        if (vetor[tamanho-1] > auxiliar)
            return vetor[tamanho-1];
        else
            return auxiliar;
    }
}