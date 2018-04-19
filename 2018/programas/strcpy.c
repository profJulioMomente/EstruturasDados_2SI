#include<stdio.h>
#include<stdlib.h>
#include<string.h>

main() {
	char Str1[50], Str2[50], Str3[50];
	
	printf("Str2: %s\n", Str2);
	
	printf("Digite uma palavra: ");
	gets(Str1);
	
	printf("Copiando Str1 para Str2\n");
	strcpy(Str2,Str1);
	
	printf("Str1 %s\n",Str1);
	printf("Str2 %s\n", Str2);
	
	printf("Copiando \"Sistemas de Informacao\" para Str3\n");
	strcpy(Str3,"Sistemas de Informacao");
	
	printf("Str3 %s\n", Str3);
	
	system("pause");
}
