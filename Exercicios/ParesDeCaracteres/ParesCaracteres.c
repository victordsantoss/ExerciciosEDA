#include <stdio.h>
#define MAX 300

int contador = 0;

int ocorrencias (char *palavra, int i){

    if (palavra[i+2] == '\0') 
        return contador;
    else if (palavra[i] == palavra[i+2]){
        contador++;
        return contador + ocorrencias (&palavra[i+1], i);
    }else
        return contador + ocorrencias (&palavra[i+1], i);
}
int main() {
    char palavra[MAX];
    int pares;

    scanf("%s", palavra);

    pares = ocorrencias(palavra, 0);
    printf ("%d", contador);
    printf ("\n");
}