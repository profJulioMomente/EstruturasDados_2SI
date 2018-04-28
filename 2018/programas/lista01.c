#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct noLista {
	int info;
	struct noLista *prox;
} Elemento;

main(){
	Elemento *Lista = NULL, *novo;
	
	novo = (Elemento*) malloc(sizeof(Elemento));
	printf("Informe um inteiro: ");
	scanf("%d", &novo->info);
	novo->prox = NULL;
	
	Lista = novo;
	
}
