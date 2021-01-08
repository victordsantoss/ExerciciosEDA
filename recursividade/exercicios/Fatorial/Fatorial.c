#include <stdio.h>
#include <stdlib.h>

// Calculando de N! (N fatorial)

long int fatorial (int numero);

int main (){

    int numero;

    printf ("Digite um numero: ");
    scanf ("%d", &numero);

    printf ("%d! equivale a: %ld\n", numero, fatorial (numero));

    return 0;
}

long int fatorial (int numero){

    if (numero == 0)
        return 1;
    else 
        return numero * fatorial (numero-1);
}
