#include <stdio.h>
#include <stdlib.h>

int CalculaViagens (int capacidade, int alunos);

int main (){

    int c, a, aux, viagens, resto;

    scanf ("%d", &c); // Capacidade da cabine
    scanf ("%d", &a); // Numero de alunos

    viagens = CalculaViagens (c, a);

    printf ("%d\n", viagens);
    
    return 0;
}

int CalculaViagens (int capacidade, int alunos){

    int resto, aux, resposta;

    aux = alunos/(capacidade-1);
    resto = alunos%(capacidade-1);
    resposta = aux;
        
    if (resto > 0) resposta++;

    return resposta;

}