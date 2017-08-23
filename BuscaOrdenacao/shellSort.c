#include<stdio.h>
#include<stdlib.h>
#include<time.h>

FILE *arq;

void Troca(int *V1, int *V2);
int* alocaVetor(int *V, int tam);
void shellSort1(int *V, int tam);
void shellSort(int *V, int tam);
void leArquivo(int *V, int tam);
int escreveArquivo(int *V, int tam);
int abrirArquivo(const char *modo);
void fecharArquivo();

main (){
	int *Vetor, tam;
	clock_t t_inicio, t_final;
	float tempo;
	char Arquivo[100];
	
	/*
	retorno da fun��o 0 = erro de abertura, 1 = sucesso na abertura
	0 <==> Falso, 1 <==> Verdade
	o s�mbolo (!) significa o operador l�gico N�O
	*/
	if(!abrirArquivo("r")){ 
		return;
	}
	
	fscanf(arq, "%d", &tam); //Leitura da quantidade de valores
	Vetor = alocaVetor(Vetor, tam);
	leArquivo(Vetor, tam);
	fecharArquivo();
	
	
	t_inicio = clock();
	shellSort(Vetor, tam);
	t_final = clock();
	
	
	tempo = ((float)t_final - (float)t_inicio)/CLOCKS_PER_SEC;
	printf("O tempo de ordenacao foi de %f segundos\n\n", tempo);
	
	
	if(!escreveArquivo(Vetor, tam)){
		return;
	}
	
	
	system("pause");
	
	return;
	
}

void Troca(int *V1, int *V2){
	int aux;
	
	aux = *V1;
	*V1 = *V2;
	*V2 = aux;
}

int* alocaVetor(int *V, int tam){ 
	V = (int*) malloc(tam*sizeof(int));
	
	return V;
}

void shellSort(int *V, int tam){
	int i , j , escolhido;
    int intervalo = 1;
    while(intervalo < tam) {
        intervalo = 3*intervalo+1;
    }
    
    while ( intervalo > 1) {
        intervalo = intervalo/3;
        for(i = intervalo; i < tam; i++) {
            escolhido = V[i];
            j = i - intervalo;
            while (j >= 0 && escolhido < V[j]) {
                V[j + intervalo] = V[j];
                j = j - intervalo;
            }
            V[j + intervalo] = escolhido;
        }
    }
}


void leArquivo(int *V, int tam){
	int i;
	for (i=0; i<tam; i++){
		fscanf(arq, "%d", &V[i]);
	}
}

int abrirArquivo(const char *modo){
	char Arquivo[200];
	
	printf("Informe o nome do arquivo com extensao: ");
	scanf(" %[^\n]s", Arquivo);
	
	if((arq = fopen(Arquivo, modo))== NULL){
		printf("\nO arquivo nao pode ser aberto\n");
		return 0;
	}
	
	return 1;
}

void fecharArquivo(){
	fclose(arq);	
}


int escreveArquivo(int *V, int tam){
	int i;
	
	if(!abrirArquivo("w")){
		return 0;
	}
	fprintf(arq, "%d\n", tam);
	for(i=0; i<tam; i++){
		fprintf(arq, "%d\n", V[i]);
	}
	
	fecharArquivo();
	return 1;
}
