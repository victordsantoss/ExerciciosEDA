#include <stdio.h>
#include <stdlib.h>

int main (){
    int Tam, Aux;
    int Contador = 1;
    int Somador = 1;
    int Aux2;
    int Contador2 = 1;
    int Somador2 = 1;
    
    scanf ("%d", &Tam);

    for (int i = 1; i <= Tam; i++){
        Aux = Contador;

        while (Aux >= 1){
            if (Aux == 1){
            printf ("%02d", Somador);
            Aux --;
            }else {
                printf ("%02d ", Somador);
            Aux --;
            }     
        }

        Somador++;
        Contador +=1;
        printf ("\n");
    }
    
    printf("\n");

    for (int i = 1; i <= Tam; i++){
        Aux2 = Contador2;
        while (Aux2 >= 1){
            if (Aux2 == 1){    
            printf ("%02d", Somador2);
            Somador2++;
            Aux2 --;
            }else {
                printf ("%02d ", Somador2);
            Somador2++;
            Aux2 --;
           }
        }
        Somador2 = 1;
        Contador2 +=1;
        printf ("\n");
	}
    return 0;
}
    
