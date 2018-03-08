#include<stdio.h>
#include<stdlib.h>


main() {
	float *vetorNotas, soma=0, media;
	int tamTurma, i;
	
	printf("Informe o tamanho da turma: ");
	scanf("%d", &tamTurma);
	
	vetorNotas = (float*) malloc(tamTurma*sizeof(float));
	
	for(i=0; i<tamTurma; i++){
		printf("\nNota %d: ",i);
		scanf("%f", &vetorNotas[i]);
		soma = soma+vetorNotas[i];
	}
	
	media = soma/tamTurma;
	
	printf("Media = %f\n\n", media);
	
	system("pause");
}
