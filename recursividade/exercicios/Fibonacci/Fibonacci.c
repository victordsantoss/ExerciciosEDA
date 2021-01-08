#include <stdio.h>
#include <stdlib.h>

int fibonacci (int numero);

int main (){

    int num;

    scanf ("%d", &num);

    printf ("Fibonacci de %d: %d\n", num, fibonacci (num));

    return 0;
}

int fibonacci (int numero){
    
    if (numero == 1 || numero == 2)
        return 1;
    else 
        return fibonacci (numero-1) + fibonacci (numero-2);
}
