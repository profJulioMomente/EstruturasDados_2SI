#include<stdio.h>
#include<stdlib.h>

main () {
	int A, B, i, j;
	
	printf("Informe o primeiro valor: ");
	scanf("%d", &A);	
	
	printf("Informe o segundo valor: ");
	scanf("%d", &B);
	
	for(i=A; i<=B; i++){
		for(j=0; j<=10;j++){
			printf("%d x %d = %d\n",i, j, i*j);
		}
		printf("\n\n");
	}
	
	system("pause");
	
}
