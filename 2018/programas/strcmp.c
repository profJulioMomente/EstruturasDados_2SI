#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

main() {
	char Nome1[50], Nome2[50];
	int comparacao, i;
	
	printf("Digite o primeiro nome: ");
	gets(Nome1);
	
	printf("Digite o segundo nome: ");
	gets(Nome2);
	
	for(i=0; i<strlen(Nome1); i++){
		Nome1[i] = toupper(Nome1[i]);
	}
	
	for(i=0; i<strlen(Nome2); i++){
		Nome2[i] = toupper(Nome2[i]);
	}
	
	comparacao = strcmp(Nome1, Nome2);
	
	if(comparacao == -1) {
		printf("%s vem antes de %s\n", Nome1, Nome2);
	} else if (comparacao == 0) {
		printf("%s igual a %s\n", Nome1, Nome2);
	} else {
		printf("%s vem depois de %s\n", Nome1, Nome2);
	}
		
	system("pause");
	
}
	
