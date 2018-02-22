#include<stdio.h>
#include<stdlib.h>

main() {
	int nPessoas, qtdSacos, rendimento;
	
	rendimento = 12;
	printf("Informe a qtd de pessoas: ");
	scanf("%d", &nPessoas);
	
	qtdSacos = nPessoas/rendimento;
	
	if(nPessoas%rendimento != 0){
		qtdSacos++;
	}
	
	printf("São necessarios %d sacos de arroz\n\n", qtdSacos);
	
	system("pause");
}
