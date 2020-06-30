#include <stdio.h>


/*
Crear un vector de numeros enteros de maximo 5 elementos
alterar cada elemento por el resultado del cuadrado del mismo

idem division
idem char, float
*/

#define MAX_TAM 5

int main(){

	int numeros[MAX_TAM]={1,2,3,4,5};
	int i = 0;

	for(int i = 0; i < MAX_TAM ; i++){
		numeros[i] = numeros[i] * numeros[i];
	}

	printf("ingrese la posicion inicial\n");
	scanf("%i", &i);
	printf("------------------\n");

	for(i; i< MAX_TAM && i>-1; i++){
		printf("%i\n", numeros[i]);
	}
	

	/*while(i < MAX_TAM && i>-1){
		printf("%i\n", numeros[i]);
		i++;// i = i + 1
	}*/


	return 0;
}