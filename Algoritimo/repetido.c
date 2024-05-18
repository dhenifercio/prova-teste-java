#include <stdio.h>

int main()
{
	
	float num1, num2, num3;
	printf("Digite tres numeros, e descubra se algum esta se repetindo:");
	printf("\nDigite o primeiro valor: ");
	scanf("%f",&num1);
	
	printf("\nDigite o segundo valor: ");
	scanf("%f",&num2);
	
	printf("\nDigite o terceiro valor: ");
	scanf("%f",&num3);
	
	if(num1==num2){
		printf("\nValor repetido: %.2f",num1);
	}
	else{
    	if(num1==num3){
	    	printf("\nValor repetido: %.2f",num1);
     	}
     	else{
        	if(num2==num3){
	        	printf("\nValor repetido: %.2f",num2);
        	}
        	else{
	         	if(num1 !=num2 && num1!=num3 && num2!= num3){
	            	printf("Nenhum valor repetido!");
	        	}
	        }
	    }
	}
	
	return 0;
}