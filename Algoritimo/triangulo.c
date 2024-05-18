#include <stdio.h>

int main(){
	
	float lado1, lado2, lado3;
	
	printf("Digite as medidas dos lados de um triangulo, e descubra a sua clasificacao: ");
	printf("\nDigite o valor do 1 lado: ");
	scanf("%f",&lado1);
	
	printf("\nDigite o valor do 2 lado: ");
	scanf("%f",&lado2);
	
	printf("\nDigite o valor do 3 lado: ");
	scanf("%f",&lado3);
	
	if(lado1==lado2 && lado1==lado3 && lado2==lado3){
		printf("Triangulo equilatero, pois todas as suas medidas sao iguais!");
	}
	else{
    	if(lado1==lado2 && lado1!=lado3 && lado2!=lado3 || lado1!=lado2 && lado2==lado3 && lado3!=lado1 || lado1==lado3 && lado1!=lado2 && lado3!=lado2){
	    	printf("Triangulo isoceles, pois dois de seus lados sao iguais!");
    	}
	else{
    	if(lado1!=lado2 && lado1!=lado3 && lado2!= lado3){
	    	printf("Triangulo escaleno, pois todos os seus lados sao diferentes!");
     	}
     }
 }
	return 0;
}