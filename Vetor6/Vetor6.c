#include <stdio.h>
#include <stdlib.h>

int main (){

    int tamVetor, soma, contador = 0;

    scanf ("%d", &tamVetor);

    int vetor1[tamVetor], vetor2[tamVetor];

    for (int i = 0; i < tamVetor; i++) scanf ("%d", &vetor1[i]);

    for (int j = 0; j < tamVetor; j++) scanf ("%d", &vetor2[j]);

    //for (int k = 0; k < tamVetor; k++) printf ("%d ", vetor1[k]);

    //for (int l = 0; l < tamVetor; l++) printf ("%d ", vetor2[l]);3

   for (int k = 0; k < tamVetor; k++){
        soma = vetor1[k] + vetor2[k];
        contador++;
        if (contador == tamVetor) printf ("%d", soma);
        else printf ("%d ", soma);
    }
    printf ("\n");

    return 0;
}