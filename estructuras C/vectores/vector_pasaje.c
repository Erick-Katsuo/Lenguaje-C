#include <stdio.h>

#define MAX_TAM 3
#define MAX_TAM_2 4


void mostrar_vectores(int vec_mostrar[], int tam_max){
	vec_mostrar[1] = 100;

	for(int i = 0; i< tam_max ; i++){
		printf("%i\n", vec_mostrar[i]);
	}

}

int main(){
	int vec[MAX_TAM] = {};
	vec[0] = 10;

	int vec_2[MAX_TAM_2] = {};

	mostrar_vectores(vec, MAX_TAM);
	printf("\n");
	mostrar_vectores(vec_2, MAX_TAM_2);

	return 0;
}