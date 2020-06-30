#include <stdio.h>

/*​vector en reversa
- crear un vector tamanio maximo 5 con elementos enteros
- ponerlo en reversa


*/

#define MAX_TAM 6

int main(){

	char numeros[MAX_TAM]={'a','b','c','d','e','f'};
	char aux = 'z';

	for(int i = 0; i< (MAX_TAM / 2) ; i++){
		aux = numeros[i]; // aux = 'a'
		numeros[i] = numeros[MAX_TAM-i-1]; // 'a' cambiar por el 'f'
		numeros[MAX_TAM-i-1] = aux; // cambia el 'f' por el 'a'
	}


	// recorre el vector
	for(int i = 0; i < MAX_TAM ; i++){
		printf("%c\n", numeros[i]);
	}

	
	return 0;
}