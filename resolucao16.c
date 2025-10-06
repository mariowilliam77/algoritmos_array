#include <stdio.h>

int main(){
    // Declaração de variaveis
    int vet[10];
    int i, j, num, repetido;

    // Entrada de dados
    printf("\n\tDigite 10 numeros diferentes:\n");
    for(i=0; i<10; i++){
        do{
            printf("\nNumero %d:", i+1);
            scanf("%d", &num);

            // Verificar se o numero ja foi digitado
            repetido = 0;
            for(j=0; j<10; j++){
                if(vet[j] == num){
                    repetido = 1;
                    printf("\n\tValor repetido!! Digite outro numero\n");
                    break;
                }
            }
        }while(repetido == 1);

        vet[i] = num;
    } // Final do for

    // Exibir vetor final
    printf("\n\tVetor final:\n");
    for(i=0; i<10; i++){
        printf("%d", vet[i]);
    }
    printf("\n");


    return 0;

}
