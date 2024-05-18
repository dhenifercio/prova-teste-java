#include <stdio.h>

int main()
{
	
	int i;
	float nota, notaUm, media;
	
	i=0;
	do{
		printf("Digite a nota do aluno no modulo 1: ");
     	scanf("%f",&nota);

		if(nota<0 || nota>10){
			printf("Nota invalida, digite novamente: \n");
      	}
      	i++;
	}while (nota<0 || nota>10);
	
		do{
		printf("Digite a nota do aluno no modulo 2: ");
     	scanf("%f",&notaUm);

		if(notaUm<0 || notaUm>10){
			printf("Nota invalida, digite novamente: \n");
      	}
      	i++;
	}while (notaUm<0 || notaUm>10);
	
	media= (nota+notaUm)/2;
	printf("Media= %f",media);
	return 0;
}