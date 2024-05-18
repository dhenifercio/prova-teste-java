# include <stdio.h>

int main(){
	
	int j, i, altura, base;
	
	printf("Digite uma altura inteira, para projetar uma figura: ");
	scanf("%i",&altura);
	
	//Ponto fixo
	for(i=0; i<altura+1; i++){
		printf(" ");
	}
	printf("*\n");
	
	//construção parte de cima
	for(i=0; i<=altura-2; i++){
		
		//Espaço antes dos ast.
		for(j=0; j<altura-i; j++){
			printf(" ");
		}
		
		//Asteristicos
		for(j=0; j<3+i*2;j++){
			printf("*");
		}
		printf("\n");
	}
	
	//base
	for(i=0; i<altura;i++){
		for(j=0; j<altura+1; j++){
			printf(" ");
		}
		printf("*\n");
	}
	return 0;
}