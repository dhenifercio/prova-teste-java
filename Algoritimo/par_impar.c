#include <stdio.h> 

int main ()
{
	 int i, num;
	 
	 printf("Digite um numero de 0 a 20, inteiro para obter os numeros pares compreendidos ate ele: ");
	 scanf("%i",&num);
	 
	 if(num > 0 || num <101)
{
    	i=0;
    	while(i<=num){
        	if(i % 2 ==0){
	        	printf("%i ",i);
	        }
	   i++;	
         }
}
	
	return 0;
}
