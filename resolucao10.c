#include <stdio.h>

int main() {
    float numero;
    float maior;
    int primeiroNumero = 1;

    printf("Digite uma sequencia de numeros reais.\n");
    printf("A sequencia termina quando o numero 0 for digitado.\n\n");

    while (1) {
        printf("Digite um numero: ");
        scanf("%f", &numero);

        // Se o número digitado for zero, sai do loop
        if (numero == 0) {
            break;
        }

        // Se for o primeiro número lido, ele é o maior
        if (primeiroNumero) {
            maior = numero;
            primeiroNumero = 0;
        } else {
            // Compara com o maior atual
            if (numero > maior) {
                maior = numero;
            }
        }
    }

    // Verifica se a sequência não estava vazia
    if (primeiroNumero) {
        printf("\nNenhum numero foi digitado, alem do zero.\n");
    } else {
        printf("\nO maior numero da sequencia eh: %.2f\n", maior);
    }

    return 0;
}
