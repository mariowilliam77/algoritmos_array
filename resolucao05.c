#include <stdio.h>

// Função para ler as notas dos alunos
void lerNotas(float notas[], int tamanho) {
    printf("Digite as notas dos 15 alunos:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("Nota do aluno %d: ", i + 1);
        scanf("%f", &notas[i]);
    }
}

// Função para calcular a média
float calcularMedia(float notas[], int tamanho) {
    float soma = 0.0;
    for (int i = 0; i < tamanho; i++) {
        soma += notas[i];
    }
    return soma / tamanho;
}

int main() {
    float notas[15];
    int numAlunos = 15;

    // Chama a função para ler as notas
    lerNotas(notas, numAlunos);

    // Chama a função para calcular a média
    float mediaGeral = calcularMedia(notas, numAlunos);

    // Imprime a média geral
    printf("\nA media geral da turma eh: %.2f\n", mediaGeral);

    return 0;
}
