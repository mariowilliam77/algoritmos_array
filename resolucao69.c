#include <stdio.h>

int main(){
    // declaração de variaveis
    int mat[8][8];
    int i, j;
    int somaDiagonalSecundaria = 0;
    int maiorDiagonalPrincipal;

    // Entrada de dados
    printf("\n\tDigite os elementos da matriz:\n");
    for(i=0; i<8; i++){
        for(j=0; j<8; j++){
            scanf("%d", &mat[i][j]);
        }
    }

    // Localiza o maior da diagonal principal com primeiro elemento
    maiorDiagonalPrincipal = mat[0][0];

    for(i=0; i<8; i++){
        // Verifica a diagonal principal
        if(mat[i][j] > maiorDiagonalPrincipal){
            maiorDiagonalPrincipal = mat[i][j];
        }

        // Soma da Diagonal secundaria
        somaDiagonalSecundaria += mat[i][4 -1 - i];

        }

        // Resultados
        printf("\n\tMaior elemento da diagonal principal:\n", maiorDiagonalPrincipal);
        printf("\n\tSoma dos elementos da diagonal secundaria:\n", somaDiagonalSecundaria);


    return 0;

}
