#include<stdio.h>
#include<stdlib.h>

main() {
	int valor, valorApontado;
	int *ponteiro;
	
	valor = 5;
	ponteiro = &valor;
	valorApontado = *ponteiro;
	
	printf("valor: %d, Endereco do valor: %d\n",valor, &valor);
	printf("ponteiro: %d, conteudo do ponteiro: %d, endereco do ponteiro: %d\n",ponteiro, *ponteiro, &ponteiro);
	printf("valor apontado: %d, Endereco do valor apontado: %d\n",valorApontado, &valorApontado);

}

