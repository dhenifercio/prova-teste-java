#include <stdio.h>

int main(){
	
	float prova1, prova2, media, faltanota;
	
	printf("Digite as notas das provas, para descobrir sua media: ");
	printf("\nDigite a nota da primeira prova: ");
	scanf("%f",&prova1);
	
	printf("\nDigite a nota da segunda prova: ");
	scanf("%f",&prova2);
	
	media= (prova1+prova2) /2;
	
	printf("\nMedia final= %.2f",media);
	
	if(media>=5){
		printf("\nAprovado (a)!");
	}
	else{
    	faltanota= 5- media;
		printf("\nReprovado (a) por : %.2f de pontos",faltanota);
	}
	return 0;
}