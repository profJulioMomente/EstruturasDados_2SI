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
void imprimir(Elemento *Lista);


main(){
	Elemento *Lista = NULL, *novo;
	int i;
	
	for(i=0; i<6; i++) {
	
		novo = (Elemento*) malloc(sizeof(Elemento));
		printf("Informe um inteiro: ");
		scanf("%d", &novo->info);
		novo->prox = NULL;
	
		Lista = inserirOrdem(Lista, novo);
		imprimir(Lista);
		printf("\n\n");
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

