#include<stdio.h>
#include<stdlib.h>

main() {
	float Notas[4][7];
	int l, c;	
	
	for(c=0;c<7;c++){
		for(l=0;l<4;l++){
			printf("Informe a nota %d do aluno %d: ",c, l);
			scanf("%f", &Notas[l][c]);
		}
	}
	
	for(c=0;c<7;c++){
		for(l=0;l<4;l++){
			printf("%f\t", Notas[l][c]);
		}
		printf("\n");
	}
	
	system("pause");
}
