#include <stdio.h>
#include <stdlib.h>

void contarSinais(int vetor[], int tamanho, int *numPositivos, int *numNegativos) {
    // Inicializa os contadores com zero
    *numPositivos = 0;
    *numNegativos = 0;

    // Percorre todos os elementos do vetor
    for (int i = 0; i < tamanho; i++) {
        // Verifica se o n�mero � positivo
        if (vetor[i] > 0) {
            (*numPositivos)++;
        }
        // Verifica se o n�mero � negativo (o zero j� foi exclu�do na leitura)
        else if (vetor[i] < 0) {
            (*numNegativos)++;
        }
        // O caso em que vetor[i] == 0 n�o precisa ser tratado,
        // pois o 0 n�o foi armazenado, mas se fosse, n�o incrementaria
        // nem positivo nem negativo.
    }
}


int main() {
    int sequencia[MAX_ELEMENTOS];
    int numeroLido;
    int i = 0;

    printf("--- Contador de Sinais ---\n");
    printf("Digite uma sequencia de numeros inteiros.\n");
    printf("A sequencia sera encerrada quando voce digitar o numero *0*.\n");
    printf("O limite de elementos (fora o zero) e de %d.\n\n", MAX_ELEMENTOS);

    // --- 1. Leitura e Armazenamento da Sequ�ncia ---
    do {
        printf("Numero %d: ", i + 1);

        // Verifica se a leitura foi bem-sucedida e se � um n�mero
        if (scanf("%d", &numeroLido) != 1) {
            printf("\nErro: Entrada invalida. Por favor, digite apenas numeros inteiros.\n");
            // Limpa o buffer e sai do programa
            while (getchar() != '\n');
            return 1; // Retorna c�digo de erro
        }

        // Crit�rio de Parada: se for 0, encerra a leitura
        if (numeroLido == 0) {
            break;
        }

        // Verifica o limite de elementos
        if (i < MAX_ELEMENTOS) {
            sequencia[i] = numeroLido;
            i++; // Incrementa o �ndice/tamanho real
        } else {
            printf("\nAviso: O limite de %d elementos foi atingido. Encerrando a leitura.\n", MAX_ELEMENTOS);
            break;
        }

    } while (1); // Loop infinito, que � interrompido pelo 'break'

    // 'i' agora armazena o tamanho real da sequ�ncia de n�meros
    int tamanhoReal = i;

    // Se o usu�rio digitou apenas 0 ou nada, n�o h� o que processar
    if (tamanhoReal == 0) {
        printf("\nNenhuma sequencia de numeros valida foi inserida (apenas o zero de parada).\n");
        return 0;
    }

    // --- 2. Processamento (Chamada da Fun��o) ---
    int positivos;
    int negativos;

    // A fun��o 'contarSinais' � chamada e armazena os resultados nas vari�veis
    // 'positivos' e 'negativos' atrav�s dos ponteiros (&)
    contarSinais(sequencia, tamanhoReal, &positivos, &negativos);

    // --- 3. Impress�o dos Resultados ---
    printf("\n--- Resultados ---\n");

    // Imprime a sequ�ncia lida (opcional, mas �til para verifica��o)
    printf("Sequencia lida (Tamanho %d): [", tamanhoReal);
    for (int k = 0; k < tamanhoReal; k++) {
        printf("%d%s", sequencia[k], (k == tamanhoReal - 1) ? "" : ", ");
    }
    printf("]\n\n");

    printf("Numero de elementos *positivos*: %d\n", positivos);
    printf("Numero de elementos *negativos*: %d\n", negativos);
    printf("--------------------------------\n");

    return 0;
}
