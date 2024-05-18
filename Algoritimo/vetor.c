#include <stdio.h>
#define TAM 10

int main(){
	
	int i, v1[TAM], v2[TAM], igual=0;
	
	for(i=0; i<TAM; i++){
		printf("Digite um valor na posicao %i: ",i+1);
		scanf("%i",&v1[i]);
		}
		printf("\n");
		for(i=0; i<TAM; i++){
			printf("Digite um valor na posicao %i: ",i+1);
			scanf("%i",&v2[i]);
		}
		
		for(i=0; i<TAM; i++){
			if(v1[i] == v2[i]){
				igual++;
			}
		}
		printf("\nQuantidade que se repete nos dois vetores, e na mesma posicao: %i",igual);
		
		return 0;
}