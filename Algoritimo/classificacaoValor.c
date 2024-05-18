# include <stdio.h>

int main ()
{
	
	float valor;
	
	printf("Digite um valor, e descubra se ele e positivo, negativo ou nulo: ");
	scanf("%f",&valor);
	
	if(valor>0){
    	printf("Valor positivo!");
	}
	else{
		if(valor == 0){
		printf("Valor nulo!");
     	}
	
	else {
	      printf("Valor negativo!");
		}
	}	

	return 0;
}