#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int buscaSequencial(int *V, int tam, int busca);
void preencheVetor(int V[], int tam);
void imprimeVetor(int V[], int tam);


main (){
	int tam, i, posicao, busca;
	int Vetor[20];
	//Variáveis para medir o tempo
	clock_t t_inicio, t_final;
	float tempo;
	
	preencheVetor(Vetor, 20);
	
	imprimeVetor(Vetor,2000);
	
	printf("\n\n");
	
	printf("\nDigite o valor que deseja procurar: ");
	scanf("%d", &busca);
	
	t_inicio = clock();
	posicao = buscaSequencial(Vetor, 20, busca);
	t_final = clock();
	
	if(posicao == -1)
		printf("\nO valor nao foi encontrado\n\n");
	else
		printf("\nO valor foi encontrado na posicao %d\n\n", posicao);
	
	tempo = ((float)t_final - (float)t_inicio)/CLOCKS_PER_SEC;
	printf("O tempo de ordenacao foi de %f segundos\n\n", tempo);
	
}

int buscaSequencial(int *V, int tam, int busca){
	int i;
	
	for(i=0; i<tam; i++){
		if(V[i] == busca)
			return i;
	}
	
	return -1;
	
}

void preencheVetor(int V[], int tam){
	int  i, max;
	time_t t = time(0);
	
	srand((unsigned) time(&t));
	for(i=0; i<tam; i++){
		V[i] = (rand())+1;
	} 
}


void imprimeVetor(int V[], int tam) {
	int i;
	
	for (i=0; i<tam; i++) {
		printf("V[%d] = %d\n", i, V[i]);
	}
}
