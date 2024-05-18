#include <stdio.h>

int main(){
	
	float numero;
	
	printf("Digite um numero, e descubra se ele e negativo ou positivo:");
	scanf("%f",&numero);
	
	if(numero>=0){
		printf("\nNumero positivo");
	}
	else{
		printf("\nNumero negativo");
	}
	return 0;
}