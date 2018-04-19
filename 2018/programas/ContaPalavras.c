#include<stdio.h>
#include<stdlib.h>

main() {
	char Texto[200];
	int qtdPalavras = 0, i=0;
	
	printf("Digite um texto: ");
	gets(Texto);
	
	while(Texto[i] != '\0'){
		if(Texto[i] != ' '){
			if(i == 0) {
				qtdPalavras++;
			} else if (Texto[i-1] == ' ') {
				qtdPalavras++;
			}
		}
		i++;	
	}
	
	printf("Existem %d palavras\n\n", qtdPalavras);
	
	system("pause");
}
