#include <stdio.h>



int factorial(int num_recibido);

int main(){
	int num = -1;
	int resultado = -1;
	printf("ingrese el numero deseado\n");
	scanf("%i", &num);

	resultado = factorial(num);
	printf("el resultado del factorial de %i es :%i", num, resultado);

	return 0;
}

int factorial(int num_recibido){
	int producto = -1;
	printf("recibio %i\n", num_recibido);
	if(num_recibido>1){
		producto = num_recibido * factorial(num_recibido-1);
		printf("el producto dio como: %i\n", producto);
	}else{
		printf("detecto 1\n");
		producto = 1;
	}

	return producto;
}