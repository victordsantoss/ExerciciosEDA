#include <stdio.h>
#include <stdlib.h>

long int somaDigitos (long int numero);

int main (){

    long int numero;

    printf ("Digite um numero: ");
    scanf ("%ld", &numero);

    printf ("A soma dos digitos de %ld e: %ld\n", numero, somaDigitos(numero));

    return 0;
}

long int somaDigitos (long int numero){

    if (numero == 0)
        return numero;
    else
        return numero%10 + somaDigitos (numero/10);
}

