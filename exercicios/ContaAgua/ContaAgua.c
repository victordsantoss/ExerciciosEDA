#include <stdio.h>
#include <stdlib.h>

int main (){
    int QtdeLitros; 
    int ValorInicial = 7;
    int ValorTotal;
    int Aux;

    scanf ("%d", &QtdeLitros);

    if (QtdeLitros <= 10){
        ValorTotal = ValorInicial;
        printf ("%d\n", ValorTotal);
    }else if (QtdeLitros > 10 && QtdeLitros <= 30){
        Aux = QtdeLitros - 10;
        ValorTotal = ValorInicial + Aux;
        printf ("%d\n", ValorTotal);
    }else if (QtdeLitros > 30 && QtdeLitros <= 100){
        Aux = QtdeLitros - 30;
        ValorTotal = ValorInicial + 20 + 2*Aux;
        printf ("%d\n", ValorTotal);
    }else if (QtdeLitros > 100){
        Aux = QtdeLitros - 100;
        ValorTotal = ValorInicial + 20 + 140 + 5*Aux;
        printf ("%d\n", ValorTotal);
    }

    return 0;
}