#include<stdio.h>
#include<stdlib.h>

//Protótipo da função
float calcularMedia(float n1, float n2, float n3, float n4);

main(){
	float nota1, nota2, nota3, nota4, media;
	int i;
	
	for(i=0; i<3; i++){
		printf("Informe a nota 1 do aluno %d: ",i);
		scanf("%f", &nota1);
		printf("Informe a nota 2 do aluno %d: ",i);
		scanf("%f", &nota2);
		printf("Informe a nota 3 do aluno %d: ",i);
		scanf("%f", &nota3);
		printf("Informe a nota 4 do aluno %d: ",i);
		scanf("%f", &nota4);
		
		 media = calcularMedia(nota1, nota2, nota3, nota4);
		 
		 printf("A media do aluno %d e %f\n\n", i, media);
	}
	system("pause");
		
}

//Implementação
float calcularMedia(float n1, float n2, float n3, float n4){
	float soma, media; //Variáveis locais
	
	soma = n1 + n2 + n3 + n4;
	media = soma/4;
	
	return media;
}
