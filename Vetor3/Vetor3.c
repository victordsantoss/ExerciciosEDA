#include <stdio.h>
#include <stdlib.h>

int main (){

    int tamVetor, contador = 0, aux = 0, *vetorInicial;
    scanf ("%d", &tamVetor);

    vetorInicial = malloc ((tamVetor+1) * sizeof(int));

    for (int i = 0; i < tamVetor; i++){
        scanf ("%d", &vetorInicial[i]);
        if (vetorInicial[i] % 2 == 0){
            contador++;
        } else 
        aux++;
    }
    for (int i = 0; i < tamVetor; i++){
        if (vetorInicial[i] % 2 == 0 && contador > 1){
            printf ("%d ", vetorInicial[i]);
            contador--;
        }else if (vetorInicial[i] % 2 == 0){
            printf ("%d", vetorInicial[i]);
            contador--;
        }
    }
    printf ("\n");
    for (int i = 0; i < tamVetor; i++){
        if (vetorInicial[i] % 2 != 0 && aux > 1){
            printf ("%d ", vetorInicial[i]);
            aux--;
        }else if (vetorInicial[i] % 2 != 0){
            printf ("%d", vetorInicial[i]);
            aux--;
        }
    }
    printf ("\n");
    
    return 0;
}