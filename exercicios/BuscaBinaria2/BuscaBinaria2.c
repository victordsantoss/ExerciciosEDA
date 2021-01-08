#include <stdio.h>
#include <stdlib.h>

void shellSort(int *vet, int size){

    int i , j , value;
    int gap = 1;

    while(gap < size)
        gap = 3*gap+1;

    while (gap > 1){
        gap /= 3;

        for(i = gap; i < size; i++){
            value = vet[i];
            j = i-gap;
            while (j >= 0 && value < vet[j]){
                vet [j+gap] = vet[j];
                j -= gap;
            }
            vet [j+gap] = value;
        }
    }
}

int buscaBinaria(int v[], int u[], int n, int x){

    int e = -1, d = n, m;

    while (e < d - 1){

        m = (d + e)/2;
        if(v[m] == x){
            for(int i = 0; i < n; i++)
                if (v[m] == u[i])
                    return i;
        }
        if(v[m] < x)
            e = m;
        else
            d = m;
    }
    return -1;
}
int main (){

    int m, n, num;
    int contador = 0;
    int aux2; // Variavel auxiliar que irá receber o valor de n
    int *v, *vAux; 

    scanf ("%d", &m);
    scanf ("%d", &n);
    
    int aux[n];

    aux2 = n;
    v = malloc (m * sizeof(int));
    vAux = malloc (m * sizeof(int));

    for (int i = 0; i < m; i++)
        scanf ("%d", &v[i]);

    for (int j = 0; j < m; j++)
        vAux[j] = v[j];

    shellSort (v, m);

    while (n > 0){
        scanf ("%d", &num);
        aux[contador] = buscaBinaria (v, vAux, m, num);
        contador++;
        n--;
    }
    printf ("\n");
    
    for (int k = 0; k < aux2; k++)
        printf ("%d\n", aux[k]);

    return 0;
}
