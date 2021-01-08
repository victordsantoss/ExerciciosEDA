#include <stdio.h>
#include <stdlib.h>

typedef struct tipoData{
    int dia;
    int mes;
    int ano;
}tipoData;

typedef struct tipoPessoa{
    char nome[80]; 
    struct tipoData dtNascimento;
}tipoPessoa;

tipoPessoa separaInfo (char nome[80], int dt_nascimento);
/*
int main (){

    char nome[80];
    int dt_nascimento;

    tipoPessoa TESTE;

    scanf(" %[^\n]s", nome);
    scanf ("%d", &dt_nascimento);

    TESTE = separaInfo (nome, dt_nascimento);

    printf ("%s\n", TESTE.nome);
    printf ("%d\n", TESTE.dtNascimento.dia);
    printf ("%d\n", TESTE.dtNascimento.mes);
    printf ("%d\n", TESTE.dtNascimento.ano);

    return 0;
}*/

tipoPessoa separaInfo (char nome[80], int dt_nascimento){

    tipoPessoa P;
    int contador = 0;

    for (int i = 0; nome[i] != '\0'; i++){
        P.nome[i] = nome[i];
        contador++;
    }

    P.nome[contador] = '\0';

    P.dtNascimento.ano = dt_nascimento / 10000;
    P.dtNascimento.mes = (dt_nascimento / 100) % 100;
    P.dtNascimento.dia = dt_nascimento % 100;

    return P;

}
