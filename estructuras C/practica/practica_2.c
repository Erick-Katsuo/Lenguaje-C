#include <stdio.h>

/*
	Mostrar los distintos valores para a con b (0,2,-2) con la ecuacion a = b*b+1
*/

int main(){

	int b = 0;
	int a = 0;

	a = b*b +1; // a = 1

	printf("\nvalor de b actual es: %i - Resultado de ecuacion en a es = %i\n\n", b,a);

	b = 2; // b = 2

	a = b*b +1; // b = 2


	printf("valor de b actual es: %i - Resultado de ecuacion en a es = %i\n\n", b,a);

	b= -2;

	a = b*b +1; // b = -2

	printf("valor de b actual es: %i - Resultado de ecuacion en a es = %i\n\n", b,a);
	

	return 0;
}