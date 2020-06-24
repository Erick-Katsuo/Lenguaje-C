#include <stdio.h>


const float MONEDA_50 = 0.5;
const float MONEDA_20 = 0.2;
const float MONEDA_10 = 0.1;
const float MONEDA_5 = 0.05;

int main(){
	float cambio_total = 0.0F;
	int cambio_moneda_50 = 0;
	int cambio_moneda_20 = 0;
	int cambio_moneda_10 = 0;
	int cambio_moneda_5 = 0;


	printf("Ingrese el cambio total\n");
	scanf("%f", &cambio_total);


	printf("r: %f\n", cambio_total / MONEDA_50);
	cambio_moneda_50 = cambio_total / MONEDA_50;
	cambio_total = cambio_total - MONEDA_50 * cambio_moneda_50 ;
	printf("Monedas devueltas de 50: %i\n", cambio_moneda_50);
	printf("Cambio restante: %f\n", cambio_total);

	printf("r: %f\n", cambio_total / MONEDA_20);
	cambio_moneda_20 = cambio_total / MONEDA_20;
	cambio_total = cambio_total - MONEDA_20 * cambio_moneda_20 ;
	printf("Monedas devueltas de 20: %i\n", cambio_moneda_20);

	printf("r: %f\n", cambio_total / MONEDA_10);
	cambio_moneda_10 = cambio_total / MONEDA_10;
	cambio_total = cambio_total - MONEDA_10 * cambio_moneda_10 ;
	printf("Monedas devueltas de 10: %i\n", cambio_moneda_10);

	printf("r: %f\n", cambio_total / MONEDA_5);
	cambio_moneda_5 = cambio_total / MONEDA_5; // 0.99999
	printf("Monedas devueltas de 5: %i\n", cambio_moneda_5);



	return 0;
}