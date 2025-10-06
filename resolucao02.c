#include <stdio.h>

int main(){
    int n;
    int vetor_principal[100];
    int vetor_impares[100];
    int contador_impares = 0;

// Entrada de dados
printf("\n\tDigite a quantidade de numeros (n)a serem lidos:\n ");
scanf("%d", &n);

// Garantir que n nao ultrapasse o tamanho do vetor
    if(n>100){
        printf("\n\tO numero de elementos e maior que a capacidade do vetor (100). O programa ira ler apenas 100 numeros.\n");
        n=100;
    }

    // Leitura
    printf("\n\tDigite %dnumeros inteiros no intervalo [0, 50]:\n", n);
    for(int i=0; i<n; i++){
        int num;
        scanf("%d", &num);
        // Valida se o numero está no intervalo de [0, 50]
        if(num >=0 && num <=50){
            vetor_principal[i] = num;
        } else{
            printf("\n\tNumero fora do intervalo [0, 50]. Digite o numero novamente para a posicao %d: ", i+1);
            i--; // Decrementa i
        }
    }

    // Preenchimento do vetor de impares
    for (int i=0; i<n; i++){
        if (vetor_principal[i] % 2 != 0){
            vetor_impares[contador_impares] = vetor_principal[i];
            contador_impares++;
        }
    }

    // Impressão do vetor principal
    printf("\n-- Vetor Principal ---\n");
    for (int i=0; i<n; i++){
        printf("\n\t%4", vetor_principal[i]);
        if((i + 1)% 10 == 0){
            printf("\n");
        }
    }

    // Impressão do vetor de impares
    printf("\n-- Vetor de Impares ---\n");
    for (int i=0; i<contador_impares; i++){
        printf("\n\t%4", vetor_impares[i]);
        if((i + 1)% 10 == 0){
            printf("\n");
        }
    }
    printf("\n");

    return 0;

}
