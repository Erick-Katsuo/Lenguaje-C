#include <stdio.h>
#include <stdbool.h>


tipo_dato nombre_funcion(char parametro_1, int parametro_2, float parametro_3, bool parametro_4){
	//instruccion
	//instruccion
	//instruccion
	//instruccion
	//instruccion
	//instruccion
	//instruccion
	//instruccion
	//instruccion
	//instruccion
	//instruccion
	//instruccion
	//instruccion
	//instruccion
	return /*valor_retorno*/;
}


int main(){

	float velocidad_auto = 0.0F;

	printf("Detectar velocidad\n");
	scanf("%f", &velocidad_auto);
	printf("Velocidad detectada: %f km/h\n", velocidad_auto);

	if( velocidad_auto >= 0.0F && velocidad_auto <= 90.0F ){
		printf("Todo ok");
	}else if( (velocidad_auto > 90.0F)  &&  (velocidad_auto <= 100.0F) ){
		printf("Advertencia");
	}else if( velocidad_auto > 100.0F ){
		printf("Multa");
	}else{
		printf("Valor no considerado");
	}

	return 0;
}

