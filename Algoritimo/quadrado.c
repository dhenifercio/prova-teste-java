#include <stdio.h>

int main()
{
	
	int i, j, altura;
	
	printf("Digite uma altura inteira, para projetar uma figura: ");
	scanf("%i",&altura);

	
    	for(j=0; j<altura*2; j++){
		printf("x");
    	}
    
    	for(j=0; j<altura*2-2; j++){
    			printf("\nx");
    			
    			for(i=0; i<altura*2-2; i++){
    		    	printf(" ");
    	    }
    	    printf("x");
        }
        printf("\n");
        
		for(j=0; j<altura*2; j++){
	    	printf("x");
    	}
    
    
	return 0;
}