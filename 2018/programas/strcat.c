#include<stdio.h>
#include<stdlib.h>
#include<string.h>

main() {
	char Str1[50], Str2[50];
	
	printf("Digite a primeira palavra: ");
	gets(Str1);
	
	printf("Digite a segunda palavra: ");
	gets(Str2);
	
	printf("Str1: %s\n",Str1);
	printf("Str2: %s\n",Str2);
	
	strcat(Str1,Str2);
	
	printf("Str1: %s\n",Str1);
	
	system("pause");
}
