#include <stdio.h>

int main() {
    int vetor[10];
    int i, j;

    // Leitura do vetor
    printf("Digite 10 valores inteiros para o vetor:\n");
    for (i = 0; i < 10; i++) {
        printf("Posicao %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    // Verificação e escrita de valores duplicados
    printf("\nValores duplicados encontrados:\n");
    for (i = 0; i < 10; i++) {
        for (j = i + 1; j < 10; j++) {
            if (vetor[i] == vetor[j]) {
                printf("%d (encontrado nas posicoes %d e %d)\n", vetor[i], i, j);
            }
        }
    }

    return 0;
}
