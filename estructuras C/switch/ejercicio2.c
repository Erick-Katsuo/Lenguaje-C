#include <stdio.h>

const int MAX_MSJ = 30;

#define OPC_FAMILIAR 1
#define OPC_AMISTAD 2
#define OPC_TRABAJO 3
#define OPC_PUBLICIDAD 4

const int DEF_OPC_LLAMADA = -1;

int main(){
	int opc_llamada = DEF_OPC_LLAMADA;

	char mensaje[MAX_MSJ];

	printf("Indique segun corresponda\nFamiliar [1] - Amistad [2] - Trabajo [3] - Publicidad [4]\n");
	scanf("%i", &opc_llamada);

	switch(opc_llamada){
		case OPC_FAMILIAR:
			printf("Ingreso que es familiar\n");
			printf("Deje su mensaje:\n");
			scanf("%s", mensaje);
			printf("**Mensaje guardado**\nApenas puedo te llamo!");
			break;
		case OPC_AMISTAD:
			printf("Ingreso que es amistad\n");
			printf("Deje su mensaje:\n");
			scanf("%s", mensaje);
			printf("#Mensaje guardado#\nLlame mas tarde!");
			break;
		case OPC_TRABAJO:
			printf("Numero equivocado");
			break;
		case OPC_PUBLICIDAD:
			printf(">:(");
			break;
		default:
			printf("Ingreso no aceptado");
	}

	if(opc_llamada <3){
		printf("\n\nLlamo un familar o amistad");
		printf("\nMensaje: %s", mensaje);
	}else{
		printf("\n\nLlamada perdida");
	}


	return 0;
}