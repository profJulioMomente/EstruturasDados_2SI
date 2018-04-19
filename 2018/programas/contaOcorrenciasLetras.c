#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

main(){
	char Texto[200];
	int Letras[26];
	int i;
	
	printf("Digite um texto: ");
	gets(Texto);
	
	for(i=0; i<26; i++) {
		Letras[i] = 0;
	}
	
	for(i=0; i<strlen(Texto); i++){
		Texto[i] = toupper(Texto[i]);
		
		if(Texto[i] >=65 && Texto[i] <= 90){
			Letras[Texto[i]-65]++;
		}
	}
	
	printf("A quantidade de cada caracter e:\n");
	for(i=0; i<26; i++){
		printf("%c = %d\n",(i+65), Letras[i]);
	}

	system("pause");		
}
	
