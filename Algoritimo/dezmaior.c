#include <stdio.h>

int main(){
	
	float numero, maior, menor;
	int i;
	
	printf("Digite dez valores, e descubra qual o maior e o menor entre eles: ");
	
	printf("\nDigite um valor:");
	scanf("%f",&numero);
	maior=numero;
	menor=numero;
		
	for(i=0;i<9;i++)
	{
		printf("\nDigite um valor:");
		scanf("%f",&numero);
		
		if(numero> maior){
			maior=numero;
		}
		else{
			if(numero<menor){
				menor=numero;
			}
		}
	}
	
	printf("Maior: %.2f\nMenor: %.2f",maior,menor);
	return 0;
}