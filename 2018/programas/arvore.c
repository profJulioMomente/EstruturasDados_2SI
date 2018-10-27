#include<stdio.h>
#include<stdlib.h>

typedef struct Struct1{
	int info;
	struct Struct1 *esq;
	struct Struct1 *dir;
} no;

no* inserirElemento(no *Raiz, int valor);
void preOrdem(no *Raiz);
void emOrdem(no *Raiz);
void posOrdem(no *Raiz);
no* pesquisa(no *Raiz, int valor);

main() {
	no *Arvore, *resPesquisa = NULL;
	int valor, opcao;
	
	do {
		system("cls");
		printf("[1] - Inserir elemento na arvore.\n");
		printf("[2] - Percurso pre ordem.\n");
		printf("[3] - Percurso em ordem.\n");
		printf("[4] - Percurso pos ordem.\n");
		printf("[5] - Pesquisa.\n");
		printf("[0] - Terminar.\n");
		printf("Informe a opcao desejada: ");
		scanf("%d", &opcao);
		
		switch(opcao){
			case 1: 
				printf("Informe o valor a ser inserido: ");
				scanf("%d", &valor);
				Arvore = inserirElemento(Arvore,valor);
				break;
			case 2:
				preOrdem(Arvore);
				break;
			case 3:
				emOrdem(Arvore);
				break;
			case 4:
				posOrdem(Arvore);
				break;
			case 5:
				printf("informe o valor a ser pesquisado: ");
				scanf("%d", &valor);
				resPesquisa = pesquisa(Arvore, valor);
				if(resPesquisa!=NULL){
					printf("Valor localizado: %d\n", resPesquisa->info);
				} else {
					printf("Valor nao encontrado\n");
				}
				break;
			case 0:
				printf("Encerrando\n");
				break;
			default: 
				printf("Opcao invalida\n");
				break;
		}
		printf("\n");
		system("pause");
	} while (opcao != 0);
}


no* inserirElemento(no *Raiz, int valor){
	no *novo;
	
	if(Raiz == NULL){
		novo = (no*) malloc(sizeof(no));
		novo->info = valor;
		novo->esq = NULL;
		novo->dir = NULL;
		Raiz = novo;
	} else {
		if(valor < Raiz->info){
			Raiz->esq = inserirElemento(Raiz->esq, valor);
		} else {
			Raiz->dir = inserirElemento(Raiz->dir, valor);
		}
	}
	
	return Raiz;
}

void preOrdem(no *Raiz){
	if (Raiz!= NULL){
		printf("%d,", Raiz->info);
		preOrdem(Raiz->esq);
		preOrdem(Raiz->dir);
	}
}

void emOrdem(no *Raiz){
	if (Raiz!= NULL){
		emOrdem(Raiz->esq);
		printf("%d,", Raiz->info);
		emOrdem(Raiz->dir);
	}
}

void posOrdem(no *Raiz){
	if (Raiz!= NULL){
		posOrdem(Raiz->esq);
		posOrdem(Raiz->dir);
		printf("%d,", Raiz->info);
	}
}

no* pesquisa(no *Raiz, int valor){
	if (Raiz == NULL) {
		return NULL;
	}
	
	if(Raiz->info == valor) {
		return Raiz;
	} else {
		if (valor < Raiz->info) {
			return pesquisa(Raiz->esq,valor);
		} else {
			return pesquisa(Raiz->dir,valor);
		}
	}
}
