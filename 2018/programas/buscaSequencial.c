#include<stdio.h>
#include<stdlib.h>

int buscaSequencial(int *V, int tam, int busca);
void preencheVetor(int V[], int tam);
void imprimeVetor(int V[], int tam);
int busca2(int V[], int tam, int busca);

main (){
	int tam, i, posicao, busca;
	int Vetor[10];
	
	preencheVetor(Vetor, 10);
	
	//imprimeVetor(Vetor,10);
	
	printf("\n\n");
	
	printf("\nDigite o valor que deseja procurar: ");
	scanf("%d", &busca);
	
	posicao = busca2(Vetor, 10, busca);
	
	if(posicao == -1)
		printf("\nO valor nao foi encontrado\n\n");
	else
		printf("\nO valor foi encontrado na posicao %d\n\n", posicao);
	
	system("pause");
}

int buscaSequencial(int V[], int tam, int busca){
	int i;
	for(i=0; i<tam; i++){
		if(V[i] == busca)
			return i;
	}
	return -1;
}

int buscaBinaria(int V[], int tam, int busca){
	int inicio=0, fim=tam-1, meio;
	
	while( inicio <= fim){
		meio = (inicio+fim)/2;
		if (V[meio] == busca){
			return meio;
		} else if (busca < V[meio]){
			fim = meio-1;
		} else {
			inicio = meio + 1;
		}
	}
	return -1;
}


void preencheVetor(int V[], int tam){
	int  i;
	
	for(i=0; i<tam; i++){
		printf("V[%d]: ",i);
		scanf("%d", &V[i]);
	} 
}


void imprimeVetor(int V[], int tam) {
	int i;
	
	for (i=0; i<tam; i++) {
		printf("V[%d] = %d\n", i, V[i]);
	}
}
