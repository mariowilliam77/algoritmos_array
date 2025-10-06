#include <stdio.h>
#include <stdlib.h>

double calcularProdutoEscalar(double vetorX[], double vetorY[], int n) {
    double produtoEscalar = 0.0;

    // Percorre os vetores at� o tamanho 'n' e acumula a soma dos produtos.
    for (int i = 0; i < n; i++) {
        produtoEscalar += vetorX[i] * vetorY[i];
    }

    return produtoEscalar;
}

int main() {
    // Declara��o dos vetores para armazenar os conjuntos de n�meros reais
    double conjuntoX[MAX_ELEMENTOS];
    double conjuntoY[MAX_ELEMENTOS];
    int n; // Vari�vel para armazenar o n�mero real de elementos lidos

    // --- 1. Entrada de Dados ---

    printf("Calculadora de Produto Escalar\n");
    printf("------------------------------\n");

    // Pede ao usu�rio o tamanho dos conjuntos
    do {
        printf("Digite o n�mero de elementos (m�ximo %d): ", MAX_ELEMENTOS);
        // Verifica se a leitura foi bem-sucedida
        if (scanf("%d", &n) != 1) {
            printf("Entrada inv�lida. Por favor, digite um n�mero.\n");

            while (getchar() != '\n');
            n = 0; // Garante que o loop continue
        } else if (n <= 0 || n > MAX_ELEMENTOS) {
            printf("O n�mero de elementos deve ser positivo e n�o exceder %d.\n", MAX_ELEMENTOS);
        }
    } while (n <= 0 || n > MAX_ELEMENTOS);


    // Leitura dos elementos do Conjunto X
    printf("\n--- Entrada do Conjunto X ---\n");
    for (int i = 0; i < n; i++) {
        printf("X[%d]: ", i + 1);
        // Verifica se a leitura de um double foi bem-sucedida
        while (scanf("%lf", &conjuntoX[i]) != 1) {
            printf("Entrada inv�lida. Digite um n�mero real para X[%d]: ", i + 1);
            while (getchar() != '\n'); // Limpa o buffer
        }
    }

    // Leitura dos elementos do Conjunto Y
    printf("\n--- Entrada do Conjunto Y ---\n");
    for (int i = 0; i < n; i++) {
        printf("Y[%d]: ", i + 1);
        // Verifica se a leitura de um double foi bem-sucedida
        while (scanf("%lf", &conjuntoY[i]) != 1) {
            printf("Entrada inv�lida. Digite um n�mero real para Y[%d]: ", i + 1);
            while (getchar() != '\n'); // Limpa o buffer
        }
    }


    // --- 2. C�lculo ---

    // Chama a fun��o para calcular o produto escalar
    double resultado = calcularProdutoEscalar(conjuntoX, conjuntoY, n);


    // --- 3. Impress�o dos Resultados ---

    printf("\n------------------------------\n");
    printf("--- Resultados ---\n");

    // Imprime o Conjunto X
    printf("\nConjunto X: {");
    for (int i = 0; i < n; i++) {
        printf("%.2lf%s", conjuntoX[i], (i == n - 1) ? "" : ", ");
    }
    printf("}\n");

    // Imprime o Conjunto Y
    printf("Conjunto Y: {");
    for (int i = 0; i < n; i++) {
        printf("%.2lf%s", conjuntoY[i], (i == n - 1) ? "" : ", ");
    }
    printf("}\n");

    // Imprime o Produto Escalar
    printf("\nF�rmula: x1*y1 + x2*y2 + ... + x%d*y%d\n", n, n);
    printf("Produto Escalar: *%.2lf*\n", resultado);

    printf("------------------------------\n");

    return 0;
}
