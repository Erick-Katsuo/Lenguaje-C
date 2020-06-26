#include <stdio.h>


/*
Crear un vector de numeros enteros como maximo 5

alternativo definirlo con valores o recibir los valores mediante consola

sumar todos sus elementos y muestrar el resultado mediante consola

Idem para char y float
*/

int main(){

	float numeros[] = {-2.83242F,3.5F,10,100.35F,-5.1F};
	float resultado = 0;

	for(int i = 0 ; i < 5 ; i++){
		resultado += numeros[i];
	}

	printf("Resultado: %f", resultado);
	return 0;
}