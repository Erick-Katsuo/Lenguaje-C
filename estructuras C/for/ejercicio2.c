#include <stdio.h>

const int INTENTOS_LOGUEO = 5;

const int DEF_CONTRASENIA_INGR = -1;

const int CONTRASENIA = 123;

int main(){
	int contrasenia_ingr = DEF_CONTRASENIA_INGR;

	for(int i = 0 ; i < INTENTOS_LOGUEO ; i++){
		printf("Intentos: %i\nIngrese contrasenia\n", INTENTOS_LOGUEO - i);
		scanf("%i", &contrasenia_ingr);
		if(contrasenia_ingr == CONTRASENIA ){
			printf("Bienvenido\n");
			i = INTENTOS_LOGUEO;
		}else if(i < 4){
			printf("Error\n");
		}else{
			printf("Error, intente nuevamente en 24 hrs\n");
		}
	}

	return 0;
}