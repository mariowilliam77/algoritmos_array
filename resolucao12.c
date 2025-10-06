#include <stdio.h>

int main() {
    int v[10];
    int v1[10]; // Para números ímpares
    int v2[10]; // Para números pares
    int cont_impares = 0;
    int cont_pares = 0;

    // Leitura dos 10 números inteiros para o vetor v
    printf("Digite 10 numeros inteiros:\n");
    for (int i = 0; i < 10; i++) {
        printf("Posicao %d: ", i + 1);
        scanf("%d", &v[i]);
    }

    // Copia os valores para v1 (ímpares) e v2 (pares)
    for (int i = 0; i < 10; i++) {
        if (v[i] % 2 != 0) {
            v1[cont_impares] = v[i];
            cont_impares++;
        } else {
            v2[cont_pares] = v[i];
            cont_pares++;
        }
    }

    // Escreve os elementos utilizados de v1 (ímpares)
    printf("\nElementos impares (vetor v1):\n");
    if (cont_impares == 0) {
        printf("Nenhum numero impar foi digitado.\n");
    } else {
        for (int i = 0; i < cont_impares; i++) {
            printf("%d ", v1[i]);
        }
        printf("\n");
    }

    // Escreve os elementos utilizados de v2 (pares)
    printf("\nElementos pares (vetor v2):\n");
    if (cont_pares == 0) {
        printf("Nenhum numero par foi digitado.\n");
    } else {
        for (int i = 0; i < cont_pares; i++) {
            printf("%d ", v2[i]);
        }
        printf("\n");
    }

    return 0;
}
