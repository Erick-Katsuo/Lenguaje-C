#include <stdio.h>

int main(){
	char turnos[10] = {};

	for(int iterador = 0 ; iterador < 10 ; iterador ++){
		printf("Vector en la posicion %i: %c\n", iterador, turnos[iterador]);
	}

	return 0;
}