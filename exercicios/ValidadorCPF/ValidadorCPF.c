#include <stdio.h>
#include <stdlib.h>

int main (){

    int digitosIni = 12, contador1 = 10, soma = 0, digito1, digito2, aux, contador2 = 11, soma2 = 0, aux2;
    char cpf[digitosIni], vetResultado[digitosIni], vetResultado2[digitosIni], cpfString[digitosIni];
    
    scanf (" %s", cpfString);

    for (int i = 0; i < digitosIni; i++)
        cpf[i] = cpfString[i]-'0';

    for (int j = 0; j < 9; j++){
        vetResultado[j] = cpf[j] * contador1;
        contador1--;
    }
    
    for (int k = 0; k < 9; k++){
        soma += vetResultado[k];
    }

    aux = soma % 11;
    digito1 = 11 - aux;
    if (digito1 > 9) digito1 = 0;

    for (int l = 0; l < 10; l++){
        vetResultado2[l] = cpf[l] * contador2;
        //printf ("%d x %d\n", cpf[l], contador2);
        contador2--;
    }

    for (int m = 0; m < 10; m++){
        soma2 += vetResultado2[m];
    }
    
    aux2 = soma2 % 11;
    digito2 = 11 - aux2;

    if (digito2 > 9) 
        digito2 = 0;

    /*printf ("%d\n", soma);
    printf ("%d\n", soma2);
    printf ("%d\n", aux);
    printf ("%d\n", aux2);
    printf ("%d\n", cpf[9]);
    printf ("%d\n", cpf[10]);
    printf ("%d\n", digito1);
    printf ("%d\n", digito2);*/

    if (cpf[9] == digito1 && cpf[10] == digito2)
        printf ("valido\n");
    else 
        printf ("invalido\n");

    return 0;
}