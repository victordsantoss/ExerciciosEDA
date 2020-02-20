#include <stdio.h>
#include <stdlib.h>

int main(){
    
	int numAeroportos, numVoos, x, y, contador = 0, maior;
    int *auxDecisao = (int*) malloc (101 * sizeof(int));
 
	scanf("%i %i", &numAeroportos, &numVoos);
	
	while (numAeroportos != 0 && numVoos != 0 ) {
		contador++;
 
		for (int i = 1; i <= numAeroportos; i++)
            auxDecisao[i] = 0;
		
		for (int j = 0; j < numVoos; j++) {
			scanf("%i %i", &x, &y);
			auxDecisao[x]++;
			auxDecisao[y]++;
		}
 
 		maior = 0;
		for (int k = 1; k <= numAeroportos; k++) {
			if (auxDecisao[k] >= maior) 
			    maior = auxDecisao[k];
		}
		
		printf("\nTeste %i\n", contador);
 
		for (int l = 1; l <= numAeroportos; l++) {
			if (auxDecisao[l] == maior) {
				printf("%i ", l);
			}
		}
 
		printf("\n");
 
		scanf("%i %i", &numAeroportos, &numVoos);
	}
 
	return 0;
}