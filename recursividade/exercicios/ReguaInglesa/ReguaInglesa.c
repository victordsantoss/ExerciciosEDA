#include <stdio.h>
#include <stdlib.h>

void regua (int tam);

int main (){

    int tamanho;
    
    scanf ("%d", &tamanho);
    regua(tamanho);

    return 0;
}

void regua (int tam){

    if (tam == 0)
        return;
    else {
        regua (tam-1);
        printf (".");

        for (int i = 0; i < tam; i++)
            printf ("-");
            
        printf ("\n");
        regua (tam-1);
    }
}