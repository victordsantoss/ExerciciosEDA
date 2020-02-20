#include <stdio.h>
#include <stdlib.h>

int encaixa (int a, int b);
int segmento (int a, int b);

/*int main () {

    int Compara;
    int TesteSegmento;

    Compara = encaixa (1243,1243);

    printf ("%d\n", Compara);

    TesteSegmento = segmento(1243,2212435);
    printf ("%d\n", TesteSegmento);
    return 0;

}*/

int encaixa (int a, int b){
    int GuardaB = b;
    int GuardaA = a;
    int Contador = 0;
    int Mod = 10;

    if (a == b)
        return 1;

    if (a > b){
        while (GuardaB != 0)
        {
            GuardaB /= 10;
            Contador ++;
        }
    } 

    for (int i = 1; i < Contador; i ++)
        Mod *= 10;  

    if (a > b){
        if (a%(Mod) == b)
            return 1;
        else 
            return 0;
    }else if (b > a)
        return 0;
}
    
int segmento (int a, int b){
    int TestaSegmento = 0;

    if (a == b){
        TestaSegmento = encaixa (a, b);
        return TestaSegmento;

    }else if (a > b){
        while (a != 0 && TestaSegmento == 0){
            TestaSegmento = encaixa (a, b);
            a /= 10;
        }
        return TestaSegmento;
    }else {
        while (b != 0 && TestaSegmento == 0){
            TestaSegmento = encaixa (b, a);
            b /= 10;
        }
        return TestaSegmento;
    }
}   