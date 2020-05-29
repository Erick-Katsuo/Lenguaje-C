#include <stdio.h>

const char EXCESO = 'e';
//const int SIN_EXCESO = 2;

int main(){
	char senial = 'd';

	do{
		printf("recibiendo senial:\n");
		printf("Exceso [e] - Sin exceso [s]\n");
		scanf(" %c", &senial);
	}while(senial != EXCESO);


	printf("PIPIPIPIPIPIPIPIPIPIP D:");
	return 0;
}