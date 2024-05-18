#include <stdio.h>

int main (){
	
	float notaTeorica, notaLab, final;
	int i;
	
	printf("Descubra a nota final de um aluno, atraves da nota teorica e de laboratorio");
	
	for (i=0;i<50;i++)
	{
		printf("\nNota teorica: ");
		scanf("%f",&notaTeorica);
		
		printf("\nNota do laboratorio: ");
		scanf("%f",&notaLab);
		
		final= notaTeorica*0.6 + notaLab*0.4;
		
		if(final>=7){
			printf("\n%.2f Muito bem!",final);
		}
		else{
			if(final>=5 && final<7){
		    	printf("\n%.2f Razoavel",final);
		    }
		}
		if(final<5){
			printf("\n%.2fMuito mal!",final);
		}
	}
	return 0;
}