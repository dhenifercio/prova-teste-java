#include <stdio.h>

int main(){
	
	float km, combustivel, kmporlitro;
	printf("DESCUBRA QUANTOS KM UM CARRO FAZ COM UM LITRO: ");
	printf("\nQAUNTOS KM ANDOU? ");
	scanf("%f",&km);
	
	printf("\nQAUNTOS LITROS GASTOU? ");
	scanf("%f",&combustivel);
	
	kmporlitro= km/combustivel;
	printf("\nKM POR LITROS= %f",kmporlitro);
	
	return 0;
}