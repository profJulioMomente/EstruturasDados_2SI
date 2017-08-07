#include<stdio.h>
#include<stdlib.h>
#include<time.h>


void preencheVetor(int V[], int tam);
void imprimeVetor(int V[], int tam);

int main (){
	int Aleatorio[100];
	
	preencheVetor(Aleatorio, 100);
	
	imprimeVetor(Aleatorio, 100);
	
	system("pause");
	
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
