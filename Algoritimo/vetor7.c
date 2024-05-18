#include <stdio.h>
#define TAM 100

int main()
{
	
	int i, num[TAM];
	
	for(i=0; i<TAM; i++){
		num[i]=i+1;
	}
	for(i=0; i<TAM; i++){
		if(num[i] %2 ==0){
			printf("%i ",num[i]);
		}
	}
	
	
	return 0;
}