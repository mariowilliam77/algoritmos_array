#include <stdio.h>

int main() {
    // Parte 1: Subtração de arrays
    int arrayA[10];
    int arrayB[10];
    int arrayC[10];

    printf("Digite 10 numeros inteiros para o array A:\n");
    for (int i = 0; i < 10; i++) {
        printf("Posicao %d: ", i + 1);
        scanf("%d", &arrayA[i]);
    }

    printf("Digite 10 numeros inteiros para o array B:\n");
    for (int i = 0; i < 10; i++) {
        printf("Posicao %d: ", i + 1);
        scanf("%d", &arrayB[i]);
    }

    for (int i = 0; i < 10; i++) {
        arrayC[i] = arrayA[i] - arrayB[i];
    }

    printf("\nValores do array C (A - B):\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", arrayC[i]);
    }
    printf("\n");

    // ---

    // Parte 2: Encontrar valores duplicados no vetor
    int vetor[10];

    printf("\nDigite 10 valores inteiros para o vetor:\n");
    for (int i = 0; i < 10; i++) {
        printf("Posicao %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("\nValores iguais encontrados:\n");
    for (int i = 0; i < 10; i++) {
        for (int j = i + 1; j < 10; j++) {
            if (vetor[i] == vetor[j]) {
                printf("%d na posicao %d e %d\n", vetor[i], i, j);
            }
        }
    }

    return 0;
}
