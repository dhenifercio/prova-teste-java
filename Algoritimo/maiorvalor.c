#include <stdio.h>

int main(){
	
	float num1, num2;
	
	printf("Digite dois valores e descubra qual e maior:");
	printf("\nDigite o primeiro valor: ");
	scanf ("%f",&num1);
	
	printf("\nDigite o segundo valor: ");
	scanf ("%f",&num2);
	
	if(num1>num2){
		printf("\n%.2f e o maior valor",num1);
	}
	else{
		printf("\n%.2f e o maior valor",num2);
	}
	return 0;
}