#include <stdio.h>


/*
Crear un vector de numeros enteros de maximo 5 elementos

cambiar de lugar sus elementos una posicion adelante del actual
en caso de la ultima posicion se le asignaria la posicion 0

Idem char y float
idem cambiando la posicion 2,3,4 lugares adelante
idem cambiando la posicion 2,3,4 lugares atras
*/

#define MAX_NUM 10

int main(){

	int aux_1 = -1;

	int numeros[MAX_NUM]={13,22,11,4,524,3,4,111,123,0};

	int aux_2 = numeros[MAX_NUM - 1]; // aux_2 = 5

	for(int i = 0 ; i < MAX_NUM ; i++ ){//recorrer el vector
		printf("%i\n", numeros[i]);
	}

	for(int i = 0 ; i < MAX_NUM ; i++){
		if(i%2 == 0){
			aux_1 = numeros[i];
			numeros[i]= aux_2 ;
		}else{
			aux_2 = numeros[i];
			numeros[i]= aux_1 ;
		}
	}

	printf("\nVector actualizado\n");

	for(int i = 0 ; i < MAX_NUM ; i++ ){//recorrer el vector
		printf("%i\n", numeros[i]);
	}

	return 0;
}