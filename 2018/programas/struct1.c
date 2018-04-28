#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct structPessoa{
	char Nome[50];
	int idade;
	float salario;
} Pessoa;

void imprimir (Pessoa parametro);

main(){
	Pessoa P[2];
	
	printf("Informe o nome: ");
	gets(P[0].Nome);
	printf("Informe a idade: ");
	scanf("%d", &P[0].idade);
	printf("Informe o salario: ");
	scanf("%f", &P[0].salario);
	
	imprimir(P[0]);
	
	
	printf("Informe o nome: ");
	gets(P[1].Nome);
	printf("Informe a idade: ");
	scanf("%d", &P[1].idade);
	printf("Informe o salario: ");
	scanf("%f", &P[1].salario);
	
	imprimir(P[1]);
	
	system("pause");
}

void imprimir (Pessoa parametro){
		printf("\n\n");
		printf("Nome: %s\nIdade: %d\nSalario: %.2f\n",parametro.Nome, parametro.idade, parametro.salario);
}	

