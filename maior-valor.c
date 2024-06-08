#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	// Declarando variáveis
	int matriz[4][4];

	//Input do usuário
	for(int i = 0; i < 4; i++) {
		for(int j = 0; j < 4; j++) {
			printf("Digite os valores da matriz: ");
			scanf("%d", &matriz[i][j]);
			//Caso seja maior que 9, encerra o programa
			if(matriz[i][j] > 9) {
				system("cls");//Apagar os últimos comandos
				printf("Da proxima vez insira um valor abaixo de 9...");
				return 1;
			}
		}
		system("cls");//Apagar de 4 em 4 valores
	}
	//Imprimindo a matriz
	printf("Matriz:\n");
	for(int i = 0; i < 4; i++) {
		for(int j = 0; j < 4; j++) {
			printf("[%d] ", matriz[i][j]);
		}
		printf("\n");//Pula linha
	}
	//Encontrando e imprimindo o maior valor de cada linha
	for(int i = 0; i < 4; i++) {
		int max = matriz[i][0];
		for(int j = 1; j < 4; j++) {
			if(matriz[i][j] > max) {
				max = matriz[i][j];
			}
		}
		//Imprimir maior valor da linha
		if(matriz [i][0] % 2 == 0) {
			printf("\nO maior valor da linha %d e %d", i + 1, max);
		}
		if(matriz [i][0] % 2 == 1) {
			printf("\nO maior valor da linha %d e %d", i + 1, max);
		}
}
	return 0;
}





