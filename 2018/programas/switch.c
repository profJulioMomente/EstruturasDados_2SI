#include<stdio.h>
#include<stdlib.h>

#define ADICAO 1
#define SUBTRACAO 2
#define MULTIPLICACAO 3
#define DIVISAO 4

main() {
	int opcao;
	
	printf("Escolha das opcoes abaixo:\n");
	printf("[1] - Adicao\n");
	printf("[2] - Subtracao\n");
	printf("[3] - Multiplicacao\n");
	printf("[4] - Divisao\n");
	printf("Informe a opcao desejada: ");
	scanf("%d", &opcao);
	
	switch(opcao){
		case ADICAO:
			printf("\n\nAdicao\n\n");
			break;	
		case SUBTRACAO:
			printf("\n\nSubtracao\n\n");
			break;
		case MULTIPLICACAO:
			printf("\n\nMultiplicacao\n\n");
			break;
		case DIVISAO:
			printf("\n\nDivisao\n\n");
			break;
		default:
			printf("\n\nOpcao invalida\n\n");
			break;
	}
	
	system("pause");
}
