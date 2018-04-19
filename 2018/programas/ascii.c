#include<stdio.h>
#include<stdlib.h>
#include<string.h>

main () {
	int caracter,i;
	char Palavra[50];
	
	printf("Digite uma palavra: ");
	gets(Palavra);
	
	for(i=0; i<strlen(Palavra); i++){
		printf("%d\n", Palavra[i]);	
	}
	system("pause");
	for(caracter = 65; caracter<=90; caracter++){
		printf("%c\n", caracter);
	}
	
	
	system("pause");
}
