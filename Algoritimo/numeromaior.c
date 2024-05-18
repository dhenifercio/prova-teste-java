#include <stdio.h>

int main()
{
	
	float num1, num2, num3, maior;
	printf("Digite tres numeros, e descubra qual o maior entre eles:");
	printf("\nDigite o primeiro valor: ");
	scanf("%f",&num1);
	
	printf("\nDigite o segundo valor: ");
	scanf("%f",&num2);
	
	printf("\nDigite o terceiro valor: ");
	scanf("%f",&num3);
	
	if(num1>num2 && num1>num3){
	   maior= num1;
	}
	else{
    	if(num2>num3){
	    	maior=num2;
    	}
    	else{
    	maior=num3;
        }
    }
	 
	 printf("Maior valor= %.2f",maior);
	
	return 0;
}