#include<stdio.h>
#include<stdlib.h>

void hanoi(int nDiscos, char origem, char destino, char auxiliar);

long int nMovs = 0;

main(){
	int nDiscos;
	
	printf("Digite o número de discos: ");
	scanf("%d", &nDiscos);
	
	hanoi(nDiscos, 'A', 'C', 'B');
	
	printf("\n\nA quantidade de movimentos foi de %d\n\n", nMovs);
	
	system("pause");
}

void hanoi(int nDiscos, char origem, char destino, char auxiliar){
	nMovs++;
	if(nDiscos == 1)
		printf("Mova o disco 1 do pino %c para o pino %c\n",\
		 origem, destino);
	else {
		hanoi(nDiscos-1, origem, auxiliar, destino);
		printf("Mova o disco %d do pino %c para o pino %c\n",\
		nDiscos, origem, destino);
		hanoi(nDiscos-1, auxiliar, destino, origem);
	}
}
		

