#include <stdio.h>

int main(){
	
	int i, divisor, inicio, fim;
	
	printf("Digite um valor inteiro para ser o divisor: ");
	scanf("%i",&divisor);
	
	printf("Digite um valor inteiro para ser o inicio do intervalo: ");
	scanf("%i",&inicio);
	
	printf("Digite um valor inteiro para ser o final do intervalo: ");
	scanf("%i",&fim);

	i=inicio;
	printf("Numeros divisiveis por %i no intervalo de %i, ate %i : ", divisor,inicio,fim);
	do{
		if (i % divisor ==0){
			printf("%i ",i);
		}
		i++;
	}while (i<fim);

	return 0;
}