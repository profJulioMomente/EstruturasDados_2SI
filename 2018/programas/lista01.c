#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct noLista {
	int info;
	struct noLista *prox;
} Elemento;

Elemento* inserirInicio(Elemento *Lista, Elemento *novo);
Elemento* inserirFinal(Elemento *Lista, Elemento *novo);
Elemento* inserirOrdem(Elemento *Lista, Elemento *novo);
Elemento* pesquisar(Elemento *Lista, int valorBusca);
Elemento* removerInicio(Elemento *Lista);
Elemento* removerFinal(Elemento *Lista);
Elemento* removerElemento(Elemento *Lista, int valorRemover);
void imprimir(Elemento *Lista);


main(){
	Elemento *Lista = NULL, *novo, *resultadoPesquisa;
	int i, valor;
	
	for(i=0; i<6; i++) {
	
		novo = (Elemento*) malloc(sizeof(Elemento));
		printf("Informe um inteiro: ");
		scanf("%d", &novo->info);
		novo->prox = NULL;
	
		Lista = inserirInicio(Lista, novo);
		imprimir(Lista);
		printf("\n\n");
	}
	
	/*
	printf("Informe um valor para pesquisa: ");
	scanf("%d", &valor);
	resultadoPesquisa = pesquisar(Lista, valor);
	if(resultadoPesquisa != NULL) {
		printf("Info = %d\n", resultadoPesquisa->info);
	} else {
		printf("Valor não encontrado\n");
	}
	*/
	system("pause");
	while(Lista != NULL){
		printf("Informe um valor para remover: ");
		scanf("%d", &valor);
		Lista = removerElemento(Lista, valor);
		imprimir(Lista);
		system("pause");
	}
	system("pause");
	
}


Elemento* inserirInicio(Elemento *Lista, Elemento *novo){
	Elemento *aux;
	
	aux = Lista;
	novo->prox = aux;
	Lista = novo;
	return Lista;
}

Elemento* inserirFinal(Elemento *Lista, Elemento *novo){
	Elemento *ultimo = Lista;
	
	if (Lista != NULL) {
		while(ultimo->prox != NULL){
			ultimo = ultimo->prox;
		}
		
		ultimo->prox = novo;
		novo->prox = NULL;
	} else {
		Lista = novo;
	}
	return Lista;
}

Elemento* inserirOrdem(Elemento *Lista, Elemento *novo){
	Elemento *aux = Lista, *anterior;
	
	while (aux!=NULL && novo->info > aux->info){
		aux=aux->prox;
	}
	if(aux == Lista) {
		novo->prox = aux;
		Lista = novo;
	} else {
		anterior = Lista;
		while(anterior->prox != aux){
			anterior = anterior->prox;
		}
		novo->prox = aux;
		anterior->prox = novo;
	}
	return Lista;
}


void imprimir(Elemento *Lista){
	Elemento *aux;
	
	aux = Lista;	
	while (aux != NULL){
		printf("%d\n", aux->info);
		aux = aux->prox;
	}
}


Elemento* pesquisar(Elemento *Lista, int valorBusca){
	Elemento *aux;
	
	aux = Lista;
	while(aux!=NULL && aux->info != valorBusca){
		aux = aux->prox;
	}
	return aux;
}

Elemento* removerInicio(Elemento *Lista){
	Elemento *remover;
	
	if (Lista!=NULL){
		remover = Lista;
		Lista = Lista->prox;
		
		free(remover);
	}
	return Lista;
}

Elemento* removerFinal(Elemento *Lista){
	Elemento *remover, *anterior;
	
	if (Lista != NULL){
		remover = Lista;
		while(remover->prox != NULL) {
			remover = remover->prox;
		}
		if(remover != Lista){
			anterior = Lista;
			while(anterior->prox != remover){
				anterior = anterior->prox;
			}
			anterior->prox = NULL;
		} else {
			Lista = NULL;
		}
		free(remover);
	}
	return Lista;
}


Elemento* removerElemento(Elemento *Lista, int valorRemover){
	Elemento *remover, *anterior;
	
	remover = pesquisar(Lista, valorRemover);
	if(remover !=NULL){
		if(remover == Lista){
			Lista = Lista->prox;
		} else{
			anterior = Lista;
			while(anterior->prox != remover){
				anterior = anterior->prox;
			}
			anterior->prox = remover->prox;
		}
		free(remover);
	} else {
		printf("Elemento nao encontrado\n");
	}
	return Lista;
}

