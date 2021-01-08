#include <stdio.h>
#include <stdlib.h>

// Algorítimo de busca com complexidade O (log(n))
// Recebe um vetor ordenado e faz a busca pelo elemento na forma de divisão e conquista
// retorna o indice do elemento se o mesmo for encontrado e -1 caso nao seja encontrado

void shellSort (int *vector, int size);
int binarySearch (int *vector, int size, int x);

void shellSort(int *vet, int size){

    int i , j , value;
    int gap = 1;

    while (gap < size)
        gap = 3*gap+1;

    while (gap > 1){
        gap /= 3;
        for (i = gap; i < size; i++){
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

int binarySearch (int *vector, int size, int x){

    int left = -1; 
    int right = size;
    int half;
     
    while (left < right-1){
        half = (left + right)/2;
        if (vector[half] < x)
            left = half;
        else
            right = half;
    }
    if (vector[half] != x)
        return -1;
    else     
        return half; 
}
