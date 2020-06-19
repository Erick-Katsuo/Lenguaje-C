#include <stdio.h>

/*ejercicio 3*/

int main(){
	float precio_neto = 0.0F;
	float precio_coste = 0.0F;
	float margen = 0.0F;

	printf("Ingrese precio coste:\n");
	scanf("%f", &precio_coste);

	printf("Ingrese margen %:\n");
	scanf("%f", &margen);

	if(margen > 1.0F){
		printf("es demasiado %f\n", margen);
		margen = 0.5F;
		printf("margen actualizado: %f\n", margen);
	}

	precio_neto = precio_coste * ( 100 + margen ) / 100;

	printf("Precio neto: %f", precio_neto);

	return 0;
}