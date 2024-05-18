#include <stdio.h>

int main(){
	
	float dinheiro,troco;
	
	printf("Digite o quanto a mulher liberou de grana: ");
	scanf("%f",&dinheiro);
	
	if(dinheiro>=30){
    	printf("\nebaa, eu vou ver o filme!");
    	if(dinheiro>=60){
        	printf("\nEba, vou comer pipoca e tomar coca!");
        	troco= dinheiro-60;
         	}
            else{
            	if(dinheiro>=40){
        		printf("\nEbaa, vou comer chocolate");
        		troco= dinheiro-40;
            	}
            else{
            	troco= dinheiro-30;
			}	    
		}	
			printf("\nTroco= %.1f",troco);
	}
	else{
    printf("Ahh!, Vou ajudar em casa");
	}
	
	
	return 0;
}