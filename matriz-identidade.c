#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	//Declarando variaveis
	int matriz[3][3] = {
		{1,0,0},
		{0,1,0},
		{0,0,1}
	};
	//Imprimindo matriz
	for(int i = 0; i < 3; i++) {
		for(int j = 0; j < 3; j ++) {
			printf("[%d] ", matriz[i][j]);
		}
		printf("\n");
	}
	//Processo
	int identidade = 1;
	for(int i = 0; i < 3; i++) {
		for(int j = 0; j < 3; j++) {
			if((i == j && matriz[i][j] != 1) || (i != j && matriz[i][j] != 0)){
				identidade = 0;
				break;
			}
		}
	}
	//Saida
	if(identidade){
		printf("e uma matriz identidade ");
	}else{
		printf("nao e uma matriz identidade");
	}
	return 0;
}