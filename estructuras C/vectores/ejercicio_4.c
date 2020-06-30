#include <stdio.h>


/*
Crear un vector de numeros enteros de maximo 5 elementos

cambiar de lugar sus elementos una posicion adelante del actual
en caso de la ultima posicion se le asignaria la posicion 0

Idem char y float
idem cambiando la posicion 2,3,4 lugares adelante
idem cambiando la posicion 2,3,4 lugares atras
*/

#define MAX_NUM 5

int main(){

	int aux_1 = -1;
	int aux_2 = -1;

	int numeros[MAX_NUM]={1,2,3,4,5};

	aux_1 = numeros[1]; // guardo el elemento 2 en aux_1
	numeros[1] = numeros[0]; // reemplaza el 2 con el 1

	aux_2 = numeros[2]; // guarda el elemento 3 en aux_2
	numeros[2] = aux_1; // reemplaza el 3 con el 2


	aux_1 = numeros[3]; // guarda el 4 en aux_1
	numeros[3] = aux_2; // reemplazar el 4 con el 3

	aux_2 = numeros[4]; // guardar el 5 en aux_2
	numeros[4] = aux_1; // reemplazar el 5 con el 4


	numeros[0] = aux_2; // reemplazar el 1 con el 5

	printf("%i\n", numeros[0]);
	printf("%i\n", numeros[1]);
	printf("%i\n", numeros[2]);
	printf("%i\n", numeros[3]);
	printf("%i\n", numeros[4]);

	return 0;
}