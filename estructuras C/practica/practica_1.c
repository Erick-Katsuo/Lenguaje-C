#include <stdio.h>


const int DATO = 4;

int main(){

	int x,y=1;
	float z;

	x= (3/2) + 10 - 3 ;
	z= (3.0F/2.0F) + 10.0F -3.0F;
	printf("a resultado x: %i\nresultado: z: %f\n", x, z);
	printf("b resultado: %i\n", DATO * 3 + 1/2);
	printf("c resultado: %i\n", 5+2-1 > 5);
	printf("d resultado: %i\n", ( (3>1) || (DATO*2 < 1) ) );
	printf("e resultado: %i\n", 5!=1 && DATO>2);
	y=x;
	printf("f resultado: %i\n",( (x+y) <= z) );

	return 0;
}