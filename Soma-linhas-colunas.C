#include <stdio.h>
#include <stdlib.h>

int main() {
	//Declarando variáveis
	int matriz[3][3];
	int soma_linhas[3] = {0, 0, 0};
	int soma_colunas[3] = {0, 0, 0};

	//Input do usuario
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("Digite os valores da matriz: ");
			scanf("%d", &matriz[i][j]);
		}
		system("cls");
	}
	//Exibir matriz e calcular somas
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("[%d] ", matriz[i][j]);
			soma_linhas[i] += matriz[i][j];
			soma_colunas[j] += matriz[i][j];
		}
		printf("\n");//Pula linha
	}
	//Saida soma das linhas
	for (int i = 0; i < 3; i++) {
		printf("Soma da linha %d: %d\n", i + 1, soma_linhas[i]);
	}
	//Saida soma das colunas
	for (int j = 0; j < 3; j++) {
		printf("Soma da coluna %d: %d\n", j + 1, soma_colunas[j]);
	}
	return 0;
}
