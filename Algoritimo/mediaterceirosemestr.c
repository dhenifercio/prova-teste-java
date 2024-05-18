#include <stdio.h>

int main()
{
	
	int i, d, alunos, disciplina;
	float media, nota, somaNota=0;
	
	printf("DIGITE A QUANTIDADE DE ALUNOS QUE ESTAO CURSANDO O 3 SEMESTRE : ");
	scanf("%i",&alunos);
	
	for(i=0; i<alunos; i++){
		printf("\nQuantas disciplinas foram cursadas ?");
		scanf("%i",&disciplina);
		somaNota = 0;
		
		for(d=0; d<disciplina; d++){
			printf("\nDigite a nota de cada disciplina: ");
			scanf("%f", &nota);
			
			somaNota = somaNota + nota;
		}
		
		media= somaNota/disciplina;
		printf("\nMedia do aluno: %.2f", media);
	}
		
	return 0;
}