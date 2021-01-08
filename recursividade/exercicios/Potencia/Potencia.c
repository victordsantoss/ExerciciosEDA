#include <stdio.h>
#include <stdlib.h>

// Calculando A elevado a potência de B em forma recursiva

int potencia (int base, int expoente);

int main (){

    int base, expoente;

    printf ("Digite o valor da base: ");
    scanf ("%d", &base);
    printf ("Digite o valor do expoente: ");
    scanf ("%d", &expoente);

    printf ("O valor de %d elevado em %d equivale a: %d\n", base, expoente, potencia (base, expoente));

    return 0;
}

int potencia (int base, int expoente){

    if (expoente == 0)
        return 1;
    else
        return base * potencia (base, expoente-1);
}