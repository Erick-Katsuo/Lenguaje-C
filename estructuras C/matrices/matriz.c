#include <stdio.h>

#define FILA 6
#define COLUMNA 5

int main(){
	char letra = 'A';

	char abecedario[FILA][COLUMNA]={};

	//darle valores a la matriz
	for (int i = 0; i < FILA; i++){
		for (int j = 0; j < COLUMNA; j++){
			//scanf(" %c", %abecedario[i][j]); para pedir valor por consola a cada elemento
			abecedario[i][j] = letra;
			letra++;// A + 1 = B
		}
	}

	//recorre la matriz
	for (int i = 0; i < FILA; i++){
		for (int j = 0; j < COLUMNA; j++){
			printf("[%c]", abecedario[i][j]);			
		}
		printf("\n");
	}

	return 0;
}