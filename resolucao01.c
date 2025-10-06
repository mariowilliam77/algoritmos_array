#include <stdio.h>

int main(){
// Declaração de variaveis
    int vet[10];
    int i;
    int maior_elemento, posicao_maior;

    // Entrada de dados
    printf("\n\tDigite 10 numeros inteiros\n: ");
    for (i=0; i<10; i++){
        printf("Numero %d:", i+1);
        scanf("%d", &vet[i]);
    }

    maior_elemento = vetor[0];
    posicao_maior = 0;

    // Loop para o maior elemento e sua posição
         for (i=0; i<10; i++){
            printf("%d", vet[i]);
        }
        printf("\n");

    // Saída
    printf("\n\tO maior elemento do vetor e: %d\n", maior_elemento);
    printf("\n\tEle se encontra na posicao: %d\n", posicao_maior);

    return 0;

}// Fim do programa
