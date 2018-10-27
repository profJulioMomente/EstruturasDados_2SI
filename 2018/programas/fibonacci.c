#include<stdio.h>
#include<stdlib.h>

int fib(int n);

main(){
	int numero, fibonacci;
	
	printf("Informe um número inteiro positivo: ");
	scanf("%d", &numero);
	if (numero >=0) {
		fibonacci = fib(numero);
		printf("O %d numero da sequencia de fibonacci e %d\n",numero, fibonacci);
	}
	else {
		printf("Numero invalido\n");
	}
	
	system("pause");
}


int fib(int n){
	if(n == 0) {
		return 0;
	} else if (n == 1) {
		return 1;
	} else {
		return (fib(n-1) + fib (n-2));
	}
	
}
 
