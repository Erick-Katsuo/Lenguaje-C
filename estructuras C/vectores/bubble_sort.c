#include <stdio.h>


#define MAX_TAM 10

int main(){
	int aux = -1;
	int numeros[MAX_TAM] = {7,77,-1,-12,5,11,7,0,2,7};

	for(int i = 0 ; i < MAX_TAM - 1 ; i++){
	// total de iteraciones MAX_TAM -1, ultimo ordenado por default
		for(int j = 0 ; j < MAX_TAM - i - 1 ; j++){
		// lleva a la ultima posicion el elemento de mayor valor
			if(numeros[j] > numeros[j+1]){
				aux = numeros[j];
				numeros[j] = numeros[j+1];
				numeros[j+1] = aux;
			}
		}
	}

	for(int i = 0; i<MAX_TAM;i++){
		printf("%i\n", numeros[i]);
	}

	return 0;
}