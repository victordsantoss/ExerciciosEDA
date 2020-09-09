#include <stdio.h>
#include <stdlib.h>

int main (){

    int tamVetor, media, resultado = 0, contador = 0, aux = 0, aux2, aux3 = 0;

    scanf ("%d", &tamVetor);

    int elementosVetor[tamVetor];

    for (int i = 0; i < tamVetor; i++){
        scanf ("%d", &elementosVetor[i]);
        resultado += elementosVetor[i];
    }
    media = resultado/tamVetor;

    for (int j = 0; j < tamVetor; j++){
        if (elementosVetor[j] > media){
            contador++;
            aux++;
        }
    }
    int vetAux[contador];

    for (int l = 0; l < tamVetor; l++){
        if (elementosVetor[l] > media){
            vetAux[aux3] = elementosVetor[l];
            aux3++;
        }
    }

    for (int k = 0; k < contador; k++){
        if (aux2 == contador-1) 
            printf ("%d", vetAux[k]);
        else 
            printf ("%d ", vetAux[k]);
        aux2++;
    }
    if (aux == 0)
        printf ("0");

    printf ("\n");

    return 0;
}