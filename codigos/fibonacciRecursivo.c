#include<stdio.h>
#include<stdlib.h>

int fib(int n);

main() {
	int valor, fibonacci;
	
	printf("Informe um valor inteiro: ");
	scanf("%d", &valor);
	
	fibonacci = fib(valor);
	
	printf("Fibonacci(%d) = %d\n\n", valor, fibonacci);
	
	system("pause");
	
}


int fib(int n){
	if(n==0)
		return 0;
	else if (n==1)
		return 1;
	else 
		return (fib(n-1) + fib(n-2));	
}
