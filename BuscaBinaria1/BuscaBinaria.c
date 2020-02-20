#include <stdio.h>
#include <stdlib.h>

int buscaBinaria (int *vetor, int tam, int x){
    
    int e = -1;
    int d = tam;
    int m;

    while (e < d-1){
        m = (e+d)/2;
        if (vetor[m] < x)
            e = m;
        else
            d = m;
    }
    return d;
}

int main (){

    int m, n, num, c = 0, a;
    int *v;

    scanf ("%d", &m);
    scanf ("%d", &n);

    int aux[n];
    a = n;
    v = malloc (m * sizeof(int));

    for (int i = 0; i < m; i++)
        scanf ("%d", &v[i]);

    while (n > 0){
        scanf ("%d", &num);
        aux[c] = buscaBinaria (v, m, num);
        c++;
        n--;
    }
    printf ("\n");
    
    for (int k = 0; k < a; k++)
        printf ("%d\n", aux[k]);

    return 0;
}
