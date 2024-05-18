# include <stdio.h>

int main(){
	
	float numero, media, soma;
	int i;
	
	printf("Digite 10 numeros e descubra a media deles: ");
	
	for (i=0;i<10;i++)
	{
		printf ("\nDigite um valor: ");
		scanf("%f", &numero);
		soma= soma + numero;
	}
	
	media= soma/10;
	printf("\nMedia= %.2f",media);
	
	return 0;
}