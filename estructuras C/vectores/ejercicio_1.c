#include <stdio.h>


/*
Crear dos vectores de numeros enteros positivos pares e impares

Mostrar su contenido mediante consola

Mostrar la suma de cada uno de sus elementos en la misma posicion
*/

int main(){

	int numeros_pares[] = {10,2,4,6,8};// tamanio de 5

	int numeros_impares[] = {1,3,5,7,9}; // tamanio de 5


	printf("Elemento en la posicion 4 del vector numeros pares: %i\n", numeros_pares[4]);
	printf("Elemento en la posicion 5 del vector numeros impares: %i\n", numeros_impares[4]);

	for(int i = 0 ; i<5 ; i++ ){
		printf("Elemento del vector numeros pares: %i\n", numeros_pares[ i ]);
	}

	/*
		1º iteracion - i contiene 0 - numeros_pares[0] contiene 10
		2º iteracion - i contiene 1 - numeros_pares[1] contiene 2
		3º iteracion - i contiene 2 - numeros_pares[2] contiene 4
		4º iteracion - i contiene 3 - numeros_pares[3] contiene 6
		5º iteracion - i contiene 4 - numeros_pares[4] contiene 8

	*/

	for(int i = 2; i < 5 ; i++){
		printf("\nElemento del vector numeros impares: %i\n", numeros_impares[ i ]);
	}



	printf("\n\n\nVector numeros pares en pos 0: %i\n", numeros_pares[0]);

	numeros_pares[0] = numeros_pares[0] * 2;

	printf("Actualizado- Vector numeros pares en pos 0: %i\n\n\n\n", numeros_pares[0]);


	for(int i = 0 ; i < 5 ; i++){
			printf("Resultado de sumar los vectores en cada posicion: %i\n", (numeros_pares[i] + numeros_impares[i]) );
	}







	return 0;
}