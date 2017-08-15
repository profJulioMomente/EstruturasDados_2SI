#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int buscaSequencial(int *V, int tam, int busca);
void preencheVetor(int V[], int tam);
void imprimeVetor(int V[], int tam);


main (){
	int tam, i, posicao, busca;
	int *Vetor;
	//Variáveis para medir o tempo
	clock_t t_inicio, t_final;
	double tempo;
	
	
	Vetor = (int*) malloc (1000000*sizeof(int));
	
	preencheVetor(Vetor, 1000000);
	
	
	//imprimeVetor(Vetor,100000);
	
	printf("\n\n");
	
	printf("\nDigite o valor que deseja procurar: ");
	scanf("%d", &busca);
	
	t_inicio = clock();
	posicao = buscaSequencial(Vetor, 1000000, busca);
	t_final = clock();
	
	if(posicao == -1)
		printf("\nO valor nao foi encontrado\n\n");
	else
		printf("\nO valor foi encontrado na posicao %d\n\n", posicao);
	
	tempo = ((double)t_final - (double)t_inicio)/CLOCKS_PER_SEC;
	printf("O tempo de ordenacao foi de %e segundos\n\n", tempo);
	
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
