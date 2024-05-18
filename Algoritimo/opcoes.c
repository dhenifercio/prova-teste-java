#include <stdio.h>

int main()
{
	
	float num1, num2, opcao;
	
	printf("Digite dois valores, e escolha uma opcao para calcular");
	printf("\nDigite o primeiro valor: ");
	scanf("%f",&num1);
	
	printf("\nDigite o segundo valor: ");
	scanf("%f",&num2);
	
	printf("\nEscolha uma opcao: digite 1 para soma, 2 para subtracao, 3 para multiplicacao e 4 para divisao ");
	scanf("%f",&opcao);
	
	if(opcao ==1){
		opcao=num1+num2;
		printf("valor da operacao: %f",opcao);
	}
	else{
    	if(opcao ==2){
	    	opcao=num1-num2;
		    printf("valor da operacao: %f",opcao);
        	}
        	else{
            	if(opcao ==3){
	            	opcao=num1*num2;
	             	printf("valor da operacao: %f",opcao);
	                }
	                else{
                    	if(opcao ==4){
	                    	opcao=num1/num2;
	                    	printf("valor da operacao: %f",opcao);
                         	}
                         	else{
	                            if(opcao!=1 && opcao!=2 && opcao!=3 && opcao!=4){
	                        	printf("Opcao invallida");
                              	}
                              }
                          }
                      }
                  }
	return 0;
}