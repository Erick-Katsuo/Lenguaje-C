#include <stdio.h>

const int DEF_RANG_MIN = -1;
const int DEF_RANG_MAX = -2;

const int DEF_CONT_PAR = 0;
const int DEF_CONT_IMPAR = 0;

int main(){
	int cont_par = DEF_CONT_PAR;
	int cont_impar = DEF_CONT_IMPAR;
	int rang_min = DEF_RANG_MIN;
	int rang_max = DEF_RANG_MAX;
	printf("Ingrese rango min\n");
	scanf("%i", &rang_min);
	printf("Ingrese rango max\n");
	scanf("%i", &rang_max);

	printf("rango min: %i y rango max: %i\n", rang_min, rang_max);

	for(int i = rang_min ; i <= rang_max ; i++){
		if( (i % 2) == 0){
			printf("%i es par\n", i);
			cont_par = cont_par +1;
		}else{
			printf("%i es impar\n", i);
			cont_impar++;
		}
	}

	printf("Cantidad de numeros pares: %i\n", cont_par);
	printf("Cantidad de numeros impares: %i\n", cont_impar);

	return 0;
}