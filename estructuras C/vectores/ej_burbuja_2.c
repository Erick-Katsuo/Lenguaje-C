#include <stdio.h>


#define MAX_PRODUCTOS 30

int main(){	
	float mercado_free[MAX_PRODUCTOS]={};

	int cantidad_agregar = 0;
	float aux = 0.0F;

	printf("Ingrese cantidad de precios a agregar\n");
	scanf("%i", &cantidad_agregar );

	for (int i = 0; i < cantidad_agregar; i++){
		printf("Ingrese el precio n-%i\n", i);
		scanf("%f", &mercado_free[i]);
	}

	/*ordena el vector de menor a mayor - bubble sort*/
	for (int i = 0; i < cantidad_agregar-1; i++){
		for(int j = 0; j< cantidad_agregar-1-i ; j++){
			if(mercado_free[j] > mercado_free[j+1]){
				aux = mercado_free[j];
				mercado_free[j] = mercado_free[j+1];
				mercado_free[j+1] = aux;
			}
		}
	}

	/*recorre el vector*/
	for (int i = 0; i < cantidad_agregar; i++){
		printf("Contenido del vector en n-%i: %f\n", i, mercado_free[i]);
	}

	return 0;
}