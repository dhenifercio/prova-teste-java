#include <stdio.h>

int main()
{
	float peso, altura, imc;
	
	printf("Descubra um IMC (indice de massa corporal), informando o peso e a altura:");
	printf("\nDigite o peso: ");
	scanf("%f",&peso);
	
	printf("\nDigite a altura: ");
	scanf("%f",&altura);
	
	imc= peso/altura;
	
	if(imc<18.5){
		printf("Abaixo do peso");
	}
	else{
    	if(imc>=18.5 && imc<25){
	       printf("Peso ideal");
        }
        else{
           if(imc>=25 && imc<30){
            printf("Sobrepeso");
            }
            else{
               if(imc>=30 && imc<35){
               	printf("Obesidade grau 1");
             	}
             	else{
                	if(imc>=35 && imc<40){
	                	printf("Obesidade grau 2");
                    	}
                    	else{
                        	if(imc>=40){
	                        	printf("Obesidade grau 3");
                        	}
                        }
                    }
                }
            }
        }
        printf("\nIMC = %.2f", imc);
	return 0;
}