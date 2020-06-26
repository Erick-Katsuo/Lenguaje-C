#include <stdio.h>


/*
Crear un vector de enteros positivos llamado "turnos" con un tamanio maximo de 15 turnos

recibir turnos pendientes que aun no se atendieron los cuales se
obtendran mediante consola

Luego mostrar los turnos en orden de su posicion: "Turno x pase!" 
*/

#define MAX_TURNOS 15

int main(){

	int turnos[MAX_TURNOS] = {};
	int total_turn_ingreso = -1;
	char opcion = 'z';

	for(int i = 0 ; i<MAX_TURNOS ; i++){
			printf("Ingrese turno para la posicion %i\n", i);
			scanf("%i", &turnos[i]);

			printf("Faltan mas turnos? Si[s] - No[n]\n");
			scanf(" %c", &opcion);
			if(opcion == 'n'){
					total_turn_ingreso = i+1; // guarda la cantidad de turnos ingresados
					i = MAX_TURNOS; // obliga al for a que termine
			}
	}


	for(int i = 0 ; i <total_turn_ingreso ; i++){
		printf("Turno %i pase!\n", turnos[i]);
	}


	return 0;
}