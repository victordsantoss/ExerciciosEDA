#include <stdio.h>
#include <stdlib.h>

typedef struct Celula 
{
    int Conteudo;
    struct Celula *Ant;
}Celula;

void CriaPilha (Celula *Pilha);
void Empilha (Celula *Topo, int NovoConteudo);
int Desempilha (Celula *Topo);
int PilhaVazia (Celula *Topo);
void EncerraPilha (Celula *Topo);

int main ()
{
    Celula *P = (Celula*) malloc(sizeof(Celula));
    int Valor, Aux;
    char Escolha;
    
    CriaPilha (P);


    while (1)
    {
        printf ("Digite o numero pra ser inserido: ");
        scanf ("%d", &Valor);
        Empilha (P, Valor);

        printf ("Deseja inserir um outro numero? [S] [N] ");
        scanf ("%s", &Escolha);

        if (Escolha == 's' || Escolha == 'S')
            continue;
        else 
            break;
    }

    while (PilhaVazia(P) != 1)
    {
        Aux = Desempilha (P);
        printf ("Saiu: %d\n", Aux);
        printf ("Deseja remover mais um elemento? [S] [N]\n");
        scanf ("%s", &Escolha);
        if (Escolha == 's' || Escolha == 'S')
            continue;
        else 
            break;
    }

    EncerraPilha (P);

    return 0;
}
void CriaPilha (Celula *Pilha)
{
    Pilha = malloc(sizeof(Celula));
    Pilha->Ant = NULL;
}

int PilhaVazia (Celula *Topo)
{
    if (Topo->Ant == NULL)
        return 1;
}

void Empilha (Celula *Topo, int NovoConteudo)
{
    Celula *Novo;
    Novo = malloc(sizeof(Celula));
    Novo->Conteudo = NovoConteudo;
    Novo->Ant = Topo->Ant;
    Topo->Ant = Novo;
}

int Desempilha (Celula *Topo)
{
    // Pode ser usada como função de imprimir     
    if (PilhaVazia (Topo) == 1)
    {
        printf ("Erro! Pilha Vazia!");
    }else 
    {
        Celula *Lixo = Topo->Ant;
        int Aux = Lixo->Conteudo;
        Topo->Ant = Lixo->Ant;
        free (Lixo);
        return Aux;
    }
}

void EncerraPilha (Celula *Topo)
{
    while (PilhaVazia (Topo) != 1)
        Desempilha(Topo);
    free (Topo);
}