#include <stdio.h>

const int DIAS_ENTREGA = 90;

const int NUNCA_LLEGO = -1;
const int LLEGO_TARDE_MAL = 0;
const int LLEGO_TARDE_BIEN = 1;
const int LLEGO_ANTES_MAL = 2;
const int LLEGO_ANTES_BIEN = 3;

const char ESTADO_MAL = 'm';
const char ESTADO_BIEN = 'b';

const char RECIBIDO = 's';
const char NO_RECIBIDO = 'n';

const int DIAS_CALIFIC_DEF = -2;
const char OPC_ESTADO_DEF = 'z';
const char OPC_RECIBIDO_DEF = 'w';

int main(){
	int dias_calific = DIAS_CALIFIC_DEF;
	char opc_estado = OPC_ESTADO_DEF;
	char opc_recibido = OPC_RECIBIDO_DEF;

	printf("Ingrese la cantidad de dias que pasaron al realizar la calificacion\n");
	scanf("%i", &dias_calific);

	if(dias_calific <= DIAS_ENTREGA){
		printf("Indique el estado del paquete\nBien [b] - Mal [m]\n");
		scanf(" %c", &opc_estado);
		if(opc_estado == ESTADO_BIEN){
			printf("El paquete llego antes y bien\nEstrellas: %i", LLEGO_ANTES_BIEN);
		}else{
			printf("El paquete llego antes y mal\nEstrellas: %i", LLEGO_ANTES_MAL);
		}
	}else{
		printf("Recibio el paquete ?\nRecibido [s] - No recibido [n]\n");
		scanf(" %c", &opc_recibido);
		if(opc_recibido == RECIBIDO){
			printf("Indique el estado del paquete\nBien [b] - Mal [m]\n");
			scanf(" %c", &opc_estado);
			if(opc_estado == ESTADO_BIEN){
				printf("El paquete llego tarde y bien\nEstrellas: %i", LLEGO_TARDE_BIEN);
			}else{
				printf("El paquete llego tarde y mal\nEstrellas: %i", LLEGO_TARDE_MAL);
			}
		}else{
			printf("El paquete nunca llego >:(\n");
			printf("Estrellas: %i", NUNCA_LLEGO);
		}
	}

	return 0;
}