#include <stdio.h>

#define OPC_OPTIMO 1
#define OPC_NO_OPTIMO 2
#define OPC_MALA_CONDICION 3

const int DEF_OPCION = OPC_OPTIMO;

/*
 *Pre:"opcion_evaluar" debe corresponder a algun valor de las opciones.
 *Post: Muestra un mensaje para la opcion correspondiente.
*/
void mostrar_mensaje(int opcion_evaluar){
	switch(opcion_evaluar){
		case OPC_NO_OPTIMO:
			printf("DETENGAN TODO! D:\n");
			break;
		default:
			printf("Detengan la produccion, revisen las bolsas!\n");
	}
}

/*
 *
*/
int comenzar_produccion(int opcion_actual){
	while( opcion_actual == OPC_OPTIMO ){
		printf("Ingrese el resultado de evaluar la produccion actual\n");
		printf("Optimo [1] - No optimo [2] - Mala condicion [3]\n");
		scanf("%i", &opcion_actual);
	}
	return opcion_actual;
}

int main(){
	int opcion = DEF_OPCION;
	opcion = comenzar_produccion(opcion);
	mostrar_mensaje(opcion);
	return 0;
}