#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main (){

    char nome[100], nome1[100], nome2[100];
    int i, j = 0, contador = 0, contador2 = 0, aux = 0;

    scanf(" %[^\n]s", nome);

    for (i = 0; nome[i] != ' '; i++){
        nome1[i] = nome[i];
        contador++;
        if(nome[i] == '\0')
            break;
    }

    for (i = 0; nome[i] != '\0'; i++){
        if(nome[i] == ' ')
            aux = 1;
    }
    
    if(aux == 1){
        for (int i = 0; nome[i] != '\0'; i++){
            nome2[j] = nome[i];
            j = nome2[j] == ' ' && nome[i + 1] != ' ' && nome[i + 1] != '\0' ? 0 : j + 1;
        }
        nome2[j] = '\0'; 
    }


    for (i = 0; i < contador; i++){
        printf ("%c", tolower(nome1[i]));
    }

    printf (".");
    if (aux == 1){
        for (i = 0; i < strlen(nome2); i++){
            printf ("%c", tolower(nome2[i]));
        }
    }

    printf ("@unb.br\n");

    return 0;
}