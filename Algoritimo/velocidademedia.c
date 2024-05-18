#include <stdio.h>

int main(){
	
	float distancia, tempo, velocidadeMedia;
	
	printf("DESCUBRA A VELOCIDADE MEDIA: ");
	printf("\nQUAL A DISTANCIA PERCORRIDA? ");
	scanf("%f",&distancia);
	
	printf("\nQUAL O TEMPO GASTO? ");
	scanf("%f",&tempo);
	
	velocidadeMedia= distancia/tempo;
	printf("\nVELOCIDADE MEDIA= %f",velocidadeMedia);
	return 0;
}