#include <stdio.h>

#define TAM 10;

// Função para inserir um valor no vetor mantendo a ordem crescente
void inserirOrdenado(int vetor [], int *tamanho, int valor){
    int i = *tamanho - 1;

    // Move os elementos maiores que valor uma posição para a direita
    while(i>=0 && vetor[i] > valor){
        vetor[i +1] = vetor[i];
        i--;
    }
    // Insere o valor na posição correta
    vetor[i +1] = valor;
    (*tamanho)++;
}

int main(){
    int vetor[TAM];
    int tamanho = 0;
    int valor, i;

    printf("\n\tDigite 10 valores:\n");
    for(i=0; i<TAM; i++){
        printf("\n\tValor %d: ", i + 1);
        scanf("%d", &valor);
       inserirOrdenado(vetor, &tamanho, valor);
    }

    printf("\n\tValores em ordem crescente:\n");
    for(i=0; i<tamanho; i++){
        printf("%d", vetor[i]);
    }
    printf("\n");

    return 0;

}
