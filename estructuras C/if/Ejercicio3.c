#include <stdio.h>

const int MAX_NOMBRE = 10;

const int LLEGADA_TEMPRANO = 900;
const int LLEGADA_TARDE = 930;

const int HORA_LLEG_DEF = -1;



int main(){
	char nombre[MAX_NOMBRE];
	int hora_llegada = HORA_LLEG_DEF;

	printf("Ingrese nombre:\n");
	scanf("%s", nombre);

	printf("Ingrese hora de llegada:\n");
	scanf("%i", &hora_llegada);

	if(hora_llegada < LLEGADA_TEMPRANO){
		printf("%s llego temprano :)", nombre);
	}else if( (hora_llegada >= LLEGADA_TEMPRANO) && (hora_llegada <= LLEGADA_TARDE)){
		printf("%s llego en hora! :D", nombre);
	}else{
		printf("%s llego tarde >:(", nombre);
	}

	return 0;
}