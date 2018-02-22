#include<stdio.h>
#include<stdlib.h>

main() {
	int valor;
	
	printf("Informe um valor inteiro positivo: ");
	scanf("%d", &valor);
	
	printf("O valor e %s \n\n", valor%2==0?"par":"impar");

	system("pause");
}
