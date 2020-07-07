#include <stdio.h>

#define MAX_PAGOS 10

int main(){
	float aux = 0.0F;
	float pagos[MAX_PAGOS] = {};

	for(int i = 0; i < MAX_PAGOS ; i++){
		printf("ingrese pago pendiente n-%i\n", i+1);
		scanf("%f", &pagos[i]);
	}

	for (int i = 0; i < MAX_PAGOS-1; i++){
		for (int j = 0; j < MAX_PAGOS-1-i; j++){
			if(pagos[j] > pagos[j+1]){
				aux = pagos[j];
				pagos[j]=pagos[j+1];
				pagos[j+1]= aux;
			}
		}
	}

	for(int i = 0; i < MAX_PAGOS; i++){
		printf("pago n-%i : %f\n", i+1, pagos[i]);
	}

	return 0;
}