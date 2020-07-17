#include <stdio.h>

#define MAX_FILA 3 

#define MAX_COLUMNA 3

//En este caso es necesario que al pasar la matriz se proporcione el tamaño de columnas, el de filas no
//Tambien noten que es mas complicado reusar este codigo debido a que el tamaño de la matriz en columnas es fija ahora

void mostrar_matriz(int matriz_mostrar[][MAX_COLUMNA],int tam_fila,int tam_column){

	matriz_mostrar[2][2] = 3; // modifica la "matriz_mostrar" pero a la vez la "matriz" en main

	for (int i = 0; i < tam_fila; i++){
		for (int j = 0; j < tam_column; j++){
			printf("[%i]", matriz_mostrar[i][j]);
		}
		printf("\n");//salto de linea en cada fin de fila
	}
}

int main(){

	int matriz[MAX_FILA][MAX_COLUMNA]={};

	mostrar_matriz(matriz, MAX_FILA, MAX_COLUMNA);

	printf("\n[%i]", matriz[2][2]); // comprueba que el cambio se guardo

	return 0;
}