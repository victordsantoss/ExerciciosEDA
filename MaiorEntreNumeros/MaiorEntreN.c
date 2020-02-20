#include <stdio.h>
#include <stdlib.h>

int main (){

    int num, maior, aux = 0;

    while (scanf("%d", &num) != EOF){
        if (aux == 0) maior = num;

        if (num >= maior) maior = num;

        aux ++;
    }
    printf ("%d\n", maior);

    return 0;
}