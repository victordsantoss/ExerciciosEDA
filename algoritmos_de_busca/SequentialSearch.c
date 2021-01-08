#include <stdio.h>
#include <stdlib.h>

// Algoritimo de busca que recebe um vetor ordenado e faz uma busca sequencial
// Retorna o indice do elemento se o mesmo for encontrado e -1 caso  nao seja encontrado

void shellSort (int *vector, int size);
int sequentialSearch (int *vector, int size, int x);

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

int sequentialSearch (int *vector, int size, int x){

    int i = 0;

    while (i < size && vector[i] < x)
        i++;

    if (i < size)
        return i;
    else 
        return -1;        
}