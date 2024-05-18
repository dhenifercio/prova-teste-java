#include <stdio.h>

int main() {
    int vetor[10] = {0}; // Inicializa o vetor com zeros
    int i, valor, qtdValores = 10;

    printf("Digite ate 10 valores:\n", qtdValores);

    // Armazena os valores digitados pelo usuário
    for (i = 0; i < qtdValores; i++) {
        scanf("%d", &valor);
        vetor[i] = valor;
    }

    printf("Valores armazenados no vetor:\n");

    // Exibe os valores do vetor
    for (i = 9; i>=0; i--) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}