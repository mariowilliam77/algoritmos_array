#include <stdio.h>

// Fun��o para verificar se um n�mero � primo
int ehPrimo(int num) {
    if (num <= 1) {
        return 0; // 0 e 1 n�o s�o primos
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0; // N�o � primo
        }
    }
    return 1; // � primo
}

int main() {
    int vetor[10];

    // Leitura dos 10 n�meros
    printf("Digite 10 numeros inteiros:\n");
    for (int i = 0; i < 10; i++) {
        printf("Posicao %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    // Verifica��o e exibi��o dos n�meros primos
    printf("\nNumeros primos e suas posicoes no vetor:\n");
    for (int i = 0; i < 10; i++) {
        if (ehPrimo(vetor[i])) {
            printf("Numero: %d, Posicao: %d\n", vetor[i], i);
        }
    }

    return 0;
}
