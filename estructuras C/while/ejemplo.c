#include <stdio.h>

const int OPC_OPTIMO = 1;
const int OPC_NO_OPTIMO = 2;
const int OPC_MALA_CONDICION = 3;

const int DEF_OPCION = OPC_OPTIMO;

int main(){
	int opcion = DEF_OPCION;

	while( opcion == OPC_OPTIMO ){
		printf("Ingrese el resultado de evaluar la produccion actual\n");
		printf("Optimo [1] - No optimo [2] - Mala condicion [3]");
		scanf("%i", &opcion);
		switch(opcion){
			case OPC_NO_OPTIMO:
				printf("DETENGAN TODO! D:");
				break;
			default:
				printf("Detengan la produccion, revisen las bolsas!");
		}
	}

	return 0;
}