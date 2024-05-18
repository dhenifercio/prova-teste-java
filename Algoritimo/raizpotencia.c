#include <math.h>

int main(){
	
	float numero, raiz, potencia;
	
	printf("DIGITE UM NUMERO, E DESCUBRA A SUA RAIZ QUADRADA E SUA OITAVA POTENCIA: ");
	scanf("%f", &numero);
	raiz= sqrt(numero);
	potencia= pow(numero,8);
	
	printf("\nRESULTADO DA RAIZ= %f",raiz);
	printf("\nRESULTADO DA OITAVA POTENCIA= %f",potencia);
	return 0;
}