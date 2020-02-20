#include <stdio.h>
#include <stdlib.h>

int main (){

    int tamVetor, num, aux = 0;

    scanf ("%d", &tamVetor);

    int elementosVetor[tamVetor];

    for(int i = 0; i < tamVetor; i++){
        scanf ("%d", &elementosVetor[i]);
    }
    scanf ("%d", &num);

    for (int j = 0; j < tamVetor; j++){
        if (elementosVetor[j] == num){
            printf("pertence\n");
            break;
        }
        aux++;
        if (aux == tamVetor) printf ("nao pertence\n");
    }

    return 0;
}