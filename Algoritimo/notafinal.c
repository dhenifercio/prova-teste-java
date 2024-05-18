#include <stdio.h>

int main(){
	
	float prt1, prp1, prt2, prp2, notaFinal;
	
	printf("CALCULE A NOTA FINAL DE ALGORITIMO E PROGRAMACAO: ");
	printf("\nDIGITE A NOTA DA PRIMEIRA PROVA TEORICA: ");
	scanf ("%f", &prt1);
	
	printf("\nDIGITE A NOTA DA SEGUNDA PROVA TEORICA: ");
	scanf ("%f", &prt2);
	
	printf("\nDIGITE A NOTA DA PRIMEIRA PROVA PRATICA: ");
	scanf ("%f", &prp1);
	
	printf("\nDIGITE A NOTA DA SEGUNDA PROVA PRATICA: ");
	scanf ("%f", &prp2);
	
	notaFinal= ((prt1+prt2)*0.6 + (prp1+prp2)*0.4) /2;
	
	printf("\nNOTA FINAL= %.2f", notaFinal);
	
	return 0;
}