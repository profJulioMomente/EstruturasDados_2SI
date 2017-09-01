#include<stdio.h>
#include<stdlib.h>

FILE *arq;

int maiorValor(int V[], int fim, int ultimo_valor);


main() {
	char Arquivo[100];
	int tam, i, maior, busca;
	int *Vetor;
	
	
	printf("Informe o nome do arquivo com extensao: ");
	scanf(" %[^\n]s", Arquivo);
	
	if((arq = fopen(Arquivo, "r"))== NULL){ //verificando se o arquivo pode ser aberto
		printf("\nO arquivo nao pode ser aberto\n");
		return;
	}
	
	fscanf(arq, "%d", &tam); //leitura da primeira linha que contém a quantidade de valores do vetor
	
	Vetor = (int*) malloc(tam*sizeof(int)); //alocação do vetor
	
	//Preenchimento do vetor
	for (i=0; i<tam; i++){
		fscanf(arq, "%d", &Vetor[i]);
	}
	
	fclose(arq);
	
	if(tam<1) {
		printf("Não há valores para pesquisar\n\n");	
	} else if (tam == 1) {
		printf("Maior Valor = %d\n\n", Vetor[0]);	
	} else {
		maior = maiorValor(Vetor, tam-2, Vetor[tam-1]);
		
		printf("\nMaior Valor %d\n\n", maior);
	}
	
}


int maiorValor(int V[], int fim, int ultimo_valor){
	int m;
	if(fim > -1) {
		m = maiorValor(V, fim-1, V[fim]);
		if(m > ultimo_valor)
			return m;
		else
			return ultimo_valor;
	} else {
		return ultimo_valor;
	}
}
	


