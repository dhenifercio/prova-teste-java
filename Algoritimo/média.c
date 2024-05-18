#include <stdio.h>

int main() {
	
	float num1, num2, num3, media;
     	printf("DIGITE TRES VALORES SUCESSIVAMENTE");
        printf("\n DIGITE O PRIMEIRO VALOR: ");
		scanf("\n %f" ,&num1);
	
		printf("DIGITE O SEGUNDO VALOR: ");	
     	scanf("\n %f", &num2);
   	
   		printf("DIGITE O TERCEIRO VALOR: ");	
    	scanf("\n%f", &num3);
    	
    	media=(num1+num2+num3)/3;
    	
    	printf("MEDIA= %f\n" , media);
	return 0;
}