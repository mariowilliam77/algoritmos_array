#include <stdio.h>

int main() {
    // Define o tamanho do vetor
    const int TAMANHO = 10;
    float vetor[TAMANHO];
    int i, j;
    float temp; // Variável temporária para a troca

    // Leitura dos Elementos do Vetor
    printf("Digite 10 numeros de ponto flutuante:\n");
    for (i = 0; i < TAMANHO; i++) {
        printf("Elemento %d: ", i + 1);
        if (scanf("%f", &vetor[i]) != 1) {
            printf("\nErro na leitura. Certifique-se de digitar um numero valido.\n");
            return 1; // Retorna código de erro
        }
    }

    // Ordenação do Vetor
    for (i = 0; i < TAMANHO - 1; i++) {
        for (j = 0; j < TAMANHO - i - 1; j++) {
            if (vetor[j] > vetor[j + 1]) {
                temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
            }
        }
    }

    // Escrita dos Elementos do Vetor Ordenado
    printf("\nVetor Ordenado \n");
    for (i = 0; i < TAMANHO; i++) {
        printf("Elemento %d: %.2f\n", i + 1, vetor[i]);
    }

    return 0;
}
