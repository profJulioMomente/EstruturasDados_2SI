#include<stdio.h>
#include<stdlib.h>
#include<time.h>


void preencheVetor(int V[], int tam, int max);
void imprimeVetor(int V[], int tam);
void bubbleSort(int V[], int tam);
void troca(int *A, int *B);
int buscaBinariaRecursiva(int V[], int inicio, int fim, int busca);

int main (){
	int *Aleatorio;
	int tam, max, busca,pos;
	
	printf("Informe o tamanho do vetor: ");
	scanf("%d", &tam);
	Aleatorio = (int*) malloc (tam*sizeof(int));
	
	printf("\nInforme o valor maximo a ser gerado: ");
	scanf("%d", &max);
	
	preencheVetor(Aleatorio, tam ,max);
	
	printf("Desordenado\n");
	imprimeVetor(Aleatorio, tam);
	system("pause");
	
	bubbleSort(Aleatorio, tam);
	
	system("pause");
	printf("Ordenado\n");
	imprimeVetor(Aleatorio, tam);
	
	printf("Informe o valor a ser pesquisado: ");
	scanf("%d", &busca);
	pos = buscaBinariaRecursiva(Aleatorio,0,tam-1,busca);
	if(pos!=-1){
		printf("Valor encontrado na posicao %d\n",pos);
	} else {
		printf("Valor nao encontrado\n");
	}
	system("pause");
	
}


void preencheVetor(int V[], int tam, int max){
	int  i;
	time_t t = time(0);
	
	if(max <= 0)
		max = 9999999;
	
	srand((unsigned) time(&t));
	for(i=0; i<tam; i++){
		V[i] = (rand()%max)+1;
	} 
}

void imprimeVetor(int V[], int tam) {
	int i;
	
	for (i=0; i<tam; i++) {
		printf("V[%d] = %d\n", i, V[i]);
	}
}

void bubbleSort(int V[], int tam){
	int i, j;
	
	for(i=1; i<tam; i++){
		for (j=0; j<(tam-i);j++){
			if(V[j] > V[j+1]){
				troca(&V[j], &V[j+1]);
			}
		}
	}
	
}


void troca(int *A, int *B){
	int aux;
	aux = *A;
	*A = *B;
	*B = aux;
}

int buscaBinariaRecursiva(int V[], int inicio, int fim, int busca){
	int meio;
	
	if(inicio > fim) {
		return -1;
	} else {
		meio = (inicio + fim)/2;
		if (V[meio] == busca){
			return meio;
		} else if(V[meio] > busca){
			return buscaBinariaRecursiva(V, inicio, meio-1, busca);
		} else {
			return buscaBinariaRecursiva(V, meio+1, fim, busca);
		}
	}
}

int maior(int V[], int inicio, int fim){
	int m;
	if(inicio == fim){
		return V[inicio];
	} else {
		m = maior(V,inicio, fim-1);
		if(m>V[fim]){
			return m;
		} else {
			return V[fim];
		}
	}
}
