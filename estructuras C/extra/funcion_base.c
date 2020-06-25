#include <stdio.h>



int suma(int a, int b){
	return a+b;
}

int resta(int c, int d){
	return c-d;
}

void mostrar_resultado(int numero_a, int numero_b){
	int resultado = -1000;
	resultado = resta(numero_a, numero_b);
	printf("Resultado de la suma de %i + %i es: %i\n", numero_a, numero_b, resultado);
}


int main(){	
	int numero_1 = 1;
	int numero_2 = 2;	
	mostrar_resultado(numero_1, numero_2);
	return 0;
}