#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct noLista{
	char info;
	struct noLista *prox;
} Elemento;

Elemento* criarNovo(char Caractere);
Elemento* Push(Elemento *Topo, char Caractere);
Elemento* Pop(Elemento *Topo);
Elemento* Top(Elemento *Topo);


main () {
	char Codigo[500];
	int i;
	Elemento *Pilha = NULL, *aux;
	
	puts("Digite o trecho de codigo:");
	gets(Codigo);
	
	for(i=0; i<strlen(Codigo); i++){
		if(Codigo[i] == '(' || Codigo[i] == '[' || Codigo[i] == '{'){
			Pilha = Push(Pilha, Codigo[i]);
		}

		if(Codigo[i] == ')' || Codigo[i] == ']' || Codigo[i] == '}'){
			aux = Top(Pilha);
			if (aux != NULL) {
				if (Codigo[i] == ')' && aux->info == '(') {
					Pilha = Pop(Pilha);
				} else if(Codigo[i] == ']' && aux->info == '[') {
					Pilha = Pop(Pilha);
				} else if (Codigo[i] == '}' && aux->info == '{') {
					Pilha = Pop(Pilha);
				} else {
					puts("1 - Erro ao verificar parenteses, chaves e colchetes");
					break;
				}
			} else {
				puts("2 - Erro ao verificar parenteses, chaves e colchetes");
				break;
			}
		}
		
	}
	
	if (i == strlen(Codigo) && Pilha == NULL){
		puts("O codigo esta correto");
	} else {
		puts("3 - Erro ao verificar parenteses, chaves e colchetes");
	}
	
	system("pause");
}

Elemento* criarNovo(char Caractere){
	Elemento *novo;
	
	novo = (Elemento*) malloc(sizeof(Elemento));
	novo->info = Caractere;
	novo->prox = NULL;
	
	return novo;
}

Elemento* Push(Elemento *Topo, char Caractere){
	Elemento *novo;
	
	novo = criarNovo(Caractere);
	
	novo->prox = Topo;
	Topo = novo;
	return Topo;
}

Elemento* Pop(Elemento *Topo){
	Elemento *aux;
	
	aux = Topo;
	if(Topo != NULL) {
		Topo = Topo->prox;
		free(aux);
	}
	return Topo;
}

Elemento* Top(Elemento *Topo){
	return Topo;
}

