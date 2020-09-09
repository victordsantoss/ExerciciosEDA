#include <stdlib.h>
#include <stdio.h>

int somaDigitos (int n){

    if (n == 0)
        return n;
    else
        return n%10 + somaDigitos (n/10);
}

int grau9 (int soma){

    if (soma<10)
        return 0;
    else {
        soma=somaDigitos (soma);
        return grau9 (soma)+1;
    }
}

int main (){

    char num[1001];
    int soma=0;

    scanf ("%s",num);

    for (int i=0;num[i]!='\0';i++)
        soma+=num[i]-'0';

    if (soma%9==0)
    	printf ("%s is a multiple of 9 and has 9-degree %d.\n", num, grau9 (soma)+1);
    else 
        printf ("%s is not a multiple of 9.\n", num);
}