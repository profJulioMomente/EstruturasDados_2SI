#include<stdio.h>
#include<stdlib.h>
#include<string.h>

main() {
	char Texto[200];
	int qtdPalavras = 0, i=0;
	
	printf("Digite um texto: ");
	gets(Texto);
	
	for(i=0;i<strlen(Texto);i++){
		if(Texto[i] != ' '){
			if(i == 0) {
				qtdPalavras++;
			} else if (Texto[i-1] == ' ') {
				qtdPalavras++;
			}
		}
	}
	
	printf("Existem %d palavras\n", qtdPalavras);
	printf("Existem %d caracteres\n", strlen(Texto));

	system("pause");
}
