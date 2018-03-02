#include<stdio.h>
#include<stdlib.h>

main() {
	float Notas[5], media, soma=0;
	int i, notasAcima=0, notasAbaixo=0;
	
	for(i=0;i<5;i++){
		printf("\nInforme a nota %d: ",i);
		scanf("%f", &Notas[i]);
		
		soma=soma+Notas[i];
	}
	
	media = soma/5.0;
	
	for(i=0;i<5;i++){
		if(Notas[i] > media){
			notasAcima++;
		} else {
			notasAbaixo++;
		}
	}
	
	printf("Media = %f\n",media);
	printf("%d notas acima e %d notas abaixo\n\n",notasAcima,notasAbaixo);
	
	system("pause");
}
