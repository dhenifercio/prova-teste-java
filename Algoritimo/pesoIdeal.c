# include <stdio.h>

int main()
{
	
	float sexo, peso, altura, pesoIdeal, peso1, peso2;
	
	printf("Descubra o peso ideal para uma mulher ou um homem, atraves da altura, e se o peso atual esta ideal ou nao");
	printf("\nDigite 1, se for homem, ou 2 se for mulher: ");
	scanf("%f",&sexo);
	
	printf("\nDigite a altura: ");
	scanf("%f",&altura);
	
	printf("\nDigite o peso atual: ");
	scanf("%f",&peso);
	
	if(sexo==1){
	    pesoIdeal=(72.7*altura)-62;
    	peso1= pesoIdeal*(1+0.05);
    	peso2= pesoIdeal*(1-0.05);
    	
		if(peso>peso1){
			printf("\n%f Peso acima do ideal!",pesoIdeal);
		}
		else{
	    	if(peso<peso2){
		    	printf("\n%f Peso abaixo do ideal!",pesoIdeal);
	    	}
	     	else{
			printf("\n %.2f Peso ideal!",pesoIdeal);
	    	}
	    }
	}
	else{
			if(sexo==2){
	    	pesoIdeal=(62.1 * altura)-48.7;
        	peso1= pesoIdeal*(1+0.05);
        	peso2= pesoIdeal*(1-0.05);
        }
        else{
		    if(peso>peso1){
			    printf("\n%f Peso acima do ideal!",pesoIdeal);
		    }
		    else{
	    	if(peso<peso2){
		    	printf("\n%f Peso abaixo do ideal!",pesoIdeal);
	    	}
			else{
			printf("\n %.2f Peso ideal!",pesoIdeal);
	    	}
	    }
	}
}
		
		
	
	return 0;
}