#include <stdio.h>

const int DEF_RANG_MIN = -1;
const int DEF_RANG_MAX = -2;

const int DEF_CONT_MULTIP = 0;
const int DEF_CONT_NO_MULTIP = 0;
const int DEF_NUM_MULTIPLO = -1;

int main(){
	int cont_multip = DEF_CONT_MULTIP;
	int cont_no_multip = DEF_CONT_NO_MULTIP;
	int rang_min = DEF_RANG_MIN;
	int rang_max = DEF_RANG_MAX;

	int num_multiplo = DEF_NUM_MULTIPLO;

	printf("Ingrese rango min\n");
	scanf("%i", &rang_min);
	printf("Ingrese rango max\n");
	scanf("%i", &rang_max);
	printf("Ingrese el numero base a usar\n");
	scanf("%i", &num_multiplo);

	for(int i = rang_min ; i <= rang_max ; i++){
		if( (i % num_multiplo) == 0){
			cont_multip = cont_multip +1;
		}else{
			cont_no_multip++;
		}
	}

	printf("Cantidad de numeros multiplos de %i: %i\n", num_multiplo, cont_multip);
	printf("Cantidad de numeros no multiplos de %i: %i\n", num_multiplo, cont_no_multip);

	return 0;
}