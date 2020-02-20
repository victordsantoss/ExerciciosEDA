#include <stdio.h>
#include <stdlib.h>

int main (){
    int Tamanho, Aux, Contador, vazio;
    char Somador; 
    Contador = 1;

    scanf ("%d", &Tamanho);
    vazio = Tamanho;

    for (int i = 1; i <= Tamanho; i++){
        vazio = Tamanho - i;
        while (vazio > 0){
            printf (" ");
            vazio --;
        }
        Aux = Contador;
        while (Aux >= 1){
            printf ("*");
            Aux --;   
        }
        Contador +=2;
        printf ("\n");
    }
    return 0;
} 