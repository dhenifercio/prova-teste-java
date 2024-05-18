# include <stdio.h>

int main (){
	
	float numero;
	int i;
	
	for (i=0;i<10;i++)
	{
		printf("\nDigite dez numeros, e descubra se ele e positivo, negativo, ou nulo: ");
		scanf("%f", &numero);
		
		if(numero >0){
			printf("Numero positivo!");
		}
    	else {
			if(numero < 0){
				printf("Numero negativo!");
			}
		}
		if(numero == 0){
			printf("Numero nulo! ");
		}
	}
	
	return 0;
}