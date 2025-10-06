#include <stdio.h>

int main() {
    int vetor[10];
    int pares = 0;

    // Leitura do vetor
    printf("Digite 10 valores inteiros:\n");
    for (int i = 0; i < 10; i++) {
        printf("Posicao %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    // Contagem dos valores pares
    for (int i = 0; i < 10; i++) {
        if (vetor[i] % 2 == 0) {
            pares++;
        }
    }

    // Impressão do resultado
    printf("\nO vetor possui %d valores pares.\n", pares);

    return 0;
}
