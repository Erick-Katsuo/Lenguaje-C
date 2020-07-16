#include <stdio.h>

void cambiar_num_contact(int *contacto_actual, int *opcion_recibida){
	
	if(opcion_recibida){//true != 0 , false = 0
		printf("Ingrese nuevo contacto\n");
		scanf("%i", contacto_actual);// guardarlo en la variable contacto_usuario
	}

	*opcion_recibida = 35; // cambia el 1 por el 35

	printf("Direccion de memoria que contiene contacto_actual: %p\n", contacto_actual);
	printf("Direccion de memoria de contacto_actual: %p\n", &contacto_actual);
	printf("El contenido de la direccion de memoria contenida en contacto_actual %i\n", *contacto_actual);

	printf("opcion_recibida: %i\n", *opcion_recibida);
}


int main(){

	int contacto_usuario = 0;
	int opcion = 0;
	printf("Direccion de mem de contacto_usuario en main: %p\n", &contacto_usuario );

	printf("Desea cambiar su numero de contacto?\n Si[1] - No[0]");
	scanf("%i", &opcion);

	cambiar_num_contact(&contacto_usuario, &opcion);

	printf("contacto usuario %i\n", contacto_usuario );
	printf("opcion %i\n", opcion);

	return 0;
}
