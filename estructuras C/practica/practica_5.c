#include <stdio.h>

/*ejercicio 4*/

const char DEF_MINUSCULA = '1';
const char DEF_MAYUSCULA = '2';

const int MIN_MAY_CONVERSION = 32;

int main(){
	char minuscula = DEF_MINUSCULA;
	char mayuscula = DEF_MAYUSCULA;

	printf("Ingrese caracter en minuscula:\n");
	scanf(" %c", &minuscula);
	printf("minuscula recibida: %c\n", minuscula);

	mayuscula = minuscula - MIN_MAY_CONVERSION;

	printf("mayuscula obtenida: %c\n", mayuscula);

	return 0;
}