#include <stdio.h>
#include <stdlib.h>

int main() {
	//Declarando variáveis
	int matriz[3][3];

	//Input do usuario
	for(int i = 0; i < 3; i++) {
		for(int j = 0; j < 3; j++) {
			printf("Digite valores para a matriz: ");
			scanf("%d", &matriz[i][j]);//I para contar as linhas da matriz, J para contar as colunas da matriz
		}
		system("cls");//O usuario escreverá de 3 em 3
	}
	//Varrer matriz/Imprimir matriz
	printf("Matriz de entrada: \n");
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++) {
			printf("[%d] ", matriz[i][j]);
		}
		printf("\n");//Pular linha entre linhas e colunas
	}
	//Imprirmir matriz transposta
	printf("\nMatriz transposta: \n");
	for(int i = 0; i < 3; i++) {
		for(int j = 0; j < 3; j++) {
			printf("[%d] ", matriz[j][i]);
		}
		printf("\n");//Pular linha
	}
	return 0;
}
