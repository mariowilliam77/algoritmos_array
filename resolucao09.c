#include <stdio.h>

int main() {
    float vetor[5];
    int codigo;
    int i;

    // Leitura dos números reais para o vetor
    printf("Digite 5 numeros reais:\n");
    for (i = 0; i < 5; i++) {
        printf("Posicao %d: ", i + 1);
        scanf("%f", &vetor[i]);
    }

    // Leitura do código inteiro
    printf("\nDigite um codigo inteiro:\n");
    printf("0 - Finalizar o programa\n");
    printf("1 - Mostrar o vetor na ordem direta\n");
    printf("2 - Mostrar o vetor na ordem inversa\n");
    scanf("%d", &codigo);

    // Estrutura switch para processar o código
    switch (codigo) {
        case 0:
            printf("Programa finalizado.\n");
            break;
        case 1:
            printf("Vetor na ordem direta:\n");
            for (i = 0; i < 5; i++) {
                printf("%.2f ", vetor[i]);
            }
            printf("\n");
            break;
        case 2:
            printf("Vetor na ordem inversa:\n");
            for (i = 4; i >= 0; i--) {
                printf("%.2f ", vetor[i]);
            }
            printf("\n");
            break;
        default:
            printf("Codigo invalido.\n");
            break;
    }

    return 0;
}
