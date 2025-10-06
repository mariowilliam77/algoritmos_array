#include <stdio.h>

int main() {
    const int TAMANHO = 20;
    int vetor[TAMANHO];
    int i, j;

    // Leitura dos 20 Elementos do Vetor
    printf("\nDigite 20 numeros inteiros:\n");
    for (i = 0; i < TAMANHO; i++) {
        printf("Elemento %d: ", i + 1);
        if (scanf("%d", &vetor[i]) != 1) {
            printf("\nErro na leitura. Digite um numero inteiro valido.\n");
            return 1;
        }
    }

    // Escrita dos Elementos Eliminando Repetidos
    printf("\nElementos Unicos do Vetor\n");

    // Percorre cada elemento do vetor
    for (i = 0; i < TAMANHO; i++) {
        int repetido = 0;
        for (j = 0; j < i; j++) {
            if (vetor[i] == vetor[j]) {
                repetido = 1;
                break;
            }
        }


        if (repetido == 0) {
            printf("%d ", vetor[i]);
        }
    }

    printf("\n");

    return 0;
}
