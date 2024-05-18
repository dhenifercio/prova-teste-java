# include <stdio.h>

int main(){
	
	float altura, mediaalt, numhomens, media, somaalt=0;
	float  menoralt=0, maioralt=0;
	int i, feminino =0, masculino=0, generoMalto, opcoes;
	
	printf("Digite as informacoes para obter as classificacoes: ");
	
	for(i=0;i<14;i++){
		
		printf("\nDigite 1 para masculino e 2 para feminino: ");
		scanf("%i",&opcoes);
		
		printf("Digite a altura: ");
		scanf("%f",&altura);
		
		if(altura < menoralt || menoralt == 0){
			menoralt = altura;
		}
	    if(opcoes == 2){
	        feminino++;
			somaalt = somaalt + altura;	
		}else{
			masculino++;
		}
	
	    if(altura> maioralt){
	    	maioralt= altura;
	    	generoMalto= opcoes;
		}
	}

    media= somaalt/feminino;
    
    printf("\nMenor altura do grupo: %.2f",menoralt);
    printf("\nMedia da altura das mulheres: %.2f",media);
    printf("\nNumero de homens: %i",masculino);    
    printf("\nGenero mais alto: ");
        
        if(generoMalto == 1){
        	printf("Masculino");
		}
		else{
			printf("Feminino");
		}

                                      
	return 0;
}