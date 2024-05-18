#include <stdio.h>

int main(){

float num1,num2, soma;

printf("DIGITE UM VALOR:");
scanf("%f", &num1);

printf("DIGITE UM VALOR:");
scanf("%f", &num2);

soma = num1 + num2;

printf("%.4f + %.4f = %.4f \n", num1, num2, soma);
	return 0;
}