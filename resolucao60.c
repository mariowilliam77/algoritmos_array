// Questão 60
#include <stdio.h>

int main(){
    // Declaração de variaveis
    int mat[10][10];
    int i, j;
    int maior, linhaMaior = 0, colunaMaior;

    // Entrada de dados
    printf("\n\tDigite os elementos da matriz [%d][%d]:\n", 10,10);
    for(i=0; i<10; i++){
        for(j=0; j<10; j++){
            scanf("%d", &mat[i][j]);
        }
    }

    // Inicializar maior com o primeiro elememto da matriz
    maior = mat[0][0];

    // Percorrer a matriz procurando o maior
    for(i=0; i<10; i++){
        for(j=0; j<10; j++){
            if(mat[i][j] > maior)
                maior = mat[i][j];
                linhaMaior = i;
                colunaMaior = j;
            }
        }
    }

     //Resultados
    printf("\nMaior valor: %d\n", maior);
    printf("Localizacao -> Linha: %d Coluna:%d\n",linhaMaior, colunaMaior);


    return 0;

}
