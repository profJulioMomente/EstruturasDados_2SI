#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int buscaBinaria(int *V, int tam, int busca);
int buscaBinariaRecursiva(int V[], int Inicio, int Fim, int Busca);

main (){
	int tam, i, posicao, busca;
	int Vetor[20];
	//Variáveis para medir o tempo
	clock_t t_inicio, t_final;
	float tempo;
	
	for(i=0; i<20; i++){
		printf("V[%d] = ",i);
		scanf("%d", &Vetor[i]);
	}
	
	printf("\nDigite o valor que deseja procurar: ");
	scanf("%d", &busca);
	
	t_inicio = clock();
	posicao = buscaBinariaRecursiva(Vetor, 0, 19, busca);
	t_final = clock();
		
	if(posicao == -1)
		printf("\nO valor nao foi encontrado\n\n");
	else
		printf("\nO valor foi encontrado na posicao %d\n\n", posicao);
	
	tempo = ((float)t_final - (float)t_inicio)/CLOCKS_PER_SEC;
	printf("O tempo de ordenacao foi de %f segundos\n\n", tempo);
	
}

int buscaBinaria(int *V, int tam, int busca){
	int meio, lInf, lSup;
	lInf = 0;
	lSup = tam-1;
	do {
		meio = (lInf + lSup)/2;
		if(V[meio] == busca)
			return meio;
		else if(V[meio] > busca){
			lSup = meio-1;
		} else {
			lInf = meio+1;
		}
	} while(lInf <= lSup);
	
	return -1;
}

int buscaBinariaRecursiva(int V[], int Inicio, int Fim, int Busca){
	int Meio;
	if(Inicio <= Fim) {
		Meio = (Inicio + Fim)/2;
		if(V[Meio] == Busca){
			return Meio;
		} else if (V[Meio] < Busca){
			return buscaBinariaRecursiva(V, Meio+1, Fim, Busca);
		} else {
			return buscaBinariaRecursiva(V, Inicio, Meio-1, Busca);
		}
	} else {
		return -1;	
	}
}
