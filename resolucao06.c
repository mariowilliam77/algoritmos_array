#include <stdio.h>

// Função para ordenar o vetor
void ordenarVetor(int vetor[], int tamanho) {
    int i, j, temp;

    // Ordena a primeira metade (crescente)
    for (i = 0; i < tamanho / 2; i++) {
        for (j = i + 1; j < tamanho / 2; j++) {
            if (vetor[i] > vetor[j]) {
                temp = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = temp;
            }
        }
    }

    // Ordena a segunda metade (decrescente)
    for (i = tamanho / 2; i < tamanho - 1; i++) {
        for (j = i + 1; j < tamanho; j++) {
            if (vetor[i] < vetor[j]) {
                temp = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = temp;
            }
        }
    }
}

// Função para imprimir o vetor
void imprimirVetor(int vetor[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}

int main() {
    int vetorA[] = {5, 8, 2, 10, 15, 20, 18, 12, 9, 7, 3}; // Exemplo de vetor
    int tamanho = 11;

    printf("Vetor original:\n");
    imprimirVetor(vetorA, tamanho);

    ordenarVetor(vetorA, tamanho);

    printf("Vetor ordenado:\n");
    imprimirVetor(vetorA, tamanho);

    return 0;
}
