#include <stdio.h>

/*
En un videoclub se ofrece la promoción de llevarse tres películas 
por el precio de las dos más baratas.
​Haga un programa que, dados los tres precios de las 
películas, determine la cantidad a pagar.
*/

int main(){
	float precio_uno, precio_dos, precio_tres;
	printf("Ingrese precio actual de la pelicula 1, 2 y 3\n");
	scanf("%f%f%f", &precio_uno, &precio_dos, &precio_tres);

	if((precio_uno > precio_dos) && (precio_uno > precio_tres)){
		printf("OFERTA!!! Paquete de 3 peliculas a %f $", precio_dos + precio_tres);
	}else if( precio_dos > precio_uno && precio_dos > precio_tres){
		printf("OFERTA!!! Paquete de 3 peliculas a %f $", precio_uno + precio_tres);
	}else{
		printf("OFERTA!!! Paquete de 3 peliculas a %f $", precio_uno + precio_dos);
	}

	return 0;
}