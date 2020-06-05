#include <stdio.h>

void informar_resultado(float velocidad_obtenida){
	if( velocidad_obtenida >= 0.0F && velocidad_obtenida <= 90.0F ){
		printf("Todo ok");
	}else if( (velocidad_obtenida > 90.0F)  &&  (velocidad_obtenida <= 100.0F) ){
		printf("Advertencia");
	}else if( velocidad_obtenida > 100.0F ){
		printf("Multa");
	}else{
		printf("Valor no considerado");
	}
}


float registrar_velocidad(){
	float velocidad_registrada;
	printf("Detectar velocidad\n");
	scanf("%f", &velocidad_registrada);
	printf("Velocidad detectada: %f km/h\n", velocidad_registrada);
	return velocidad_registrada;
}


int main(){
	informar_resultado( registrar_velocidad() );
	return 0;
}

