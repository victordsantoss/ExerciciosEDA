#include "fila_vetor.h"
//#include "fila_circular.h"
//#include "fila_circular_encadeada.h"
#include <stdio.h>
#include <stdlib.h> 

int main()
{
    criarFila ();

    system ("clear");
    int Opc = 0, numElem;
    char Resp;

    //Menu:
    while(Opc != 5){
        printf("\n");
        printf ("| Inserir Elementos [1] |\n");
        printf ("| Remover Elementos [2] |\n");
        printf ("| Imprimir Fila     [3] |\n");
        printf ("| Reiniciar Fila    [4] |\n");
        printf ("| Sair              [5] |\n\n");

        scanf ("%d", &Opc);

        switch (Opc) {
            case 1:
                printf ("Digite quantos números você deseja inserir: ");
                scanf ("%d", &numElem);
                for (int i = 0, x, eInserivel = 1; i < numElem && eInserivel == 1; i++){
                    printf("Número[%d]: ", i+1);
                    scanf("%d", &x);
                    while(x < 0 || x > 999){
                        printf("Favor, inserir um número entre 0 e 999\n");
                        scanf("%d", &x);
                    }
                    if(!inserir (x) && eInserivel){
                        printf("%d elementos foram inseridos na fila, mas %d não couberam\n", i, numElem - i);
                        eInserivel = 0;
                    }
                }
                break;
            case 2:
                printf ("Digite quantos números você deseja remover: ");
                scanf ("%d", &numElem);
                for (int i = 0, *x; i < numElem; i++){
                    if(!remover (x)){
                        printf("Impossível remover mais elementos. A fila está vazia\n");
                    }
                    else printf ("Elemento Removido: %03d\n", *x);
                }
                break;
            case 3:
                imprime ();
                break;
            case 4:
                criarFila ();
                break;
            case 5:
                destroiFila ();
                break;
            default:
                printf("Erro! Opção Inválida!\n");
                break;
        }
    }
    return 0;
}
