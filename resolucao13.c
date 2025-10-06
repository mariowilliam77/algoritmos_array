 #include <stdio.h>

 #define N 5

 int main(){
        int X[N], Y[N];
        int i, j;

    // Leitura do vetor X
    printf("\n\tDigite 5 elementos para o vetor X:\n");
    for(i=0; i<N; i++){
        scanf("%d", &X[i]);
    }

    // Leitura do vetor Y
    printf("\n\tDigite 5 elementos para o vetor Y:\n");
    for(i=0; i<N; i++){
        scanf("%d", &Y[i]);
    }

    // Soma
    printf("\n\tSoma entre X e Y:\n");
    for(i=0; i<N; i++){
        printf("%d", X[i] + Y[i]);
        printf("\n");
    }

    // Produto
    printf("\n\tProduto entre X e Y:\n");
    for(i=0; i<N; i++){
        printf("%d", X[i] * Y[i]);
        printf("\n");
    }

    // Diferença
    printf("\n\tDiferenca entre X e Y:\n");
    for(i=0; i<N; i++){
        int existe = 0;
        for(j=0; j<N; j++){
            if(X[i] == Y[j]){
               existe = 1;
               break;
            }
        }
        if(!existe){
            printf("%d", X[i]);
            printf("\n");
        }

     }

     // Interseção
     printf("\n\tIntersecao entre X e Y:\n");
    for(i=0; i<N; i++){
        for(j=0; j<N; j++){
            if(X[i] == Y[j]){
                printf("%d", X[i]);
                printf("\n");
            }
        }
    }

    // União
    printf("\n\tUniao entre X e Y:\n");
    // Elementos de X
    for(i=0; i<N; i++){
            printf("%d", X[i]);
    }
    // Elementos de Y que não estão em X
    for(i=0; i<N; i++){
        int existe = 0;
        for(j=0; j<N; j++){
            if(X[i] == Y[j]){
               existe = 1;
               break;
            }
        }
        if(!existe){
            printf("%d", Y[i]);
            printf("\n");
        }

     }



    return 0;

 }
