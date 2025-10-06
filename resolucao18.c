#include <stdio.h>
#include <stdlib.h>

#define TOTAL_ALUNOS 10

typedef struct {
    int numero;
    float altura;
} Aluno;

// Função para encontrar o indice do aluno mais baixo
int encontrarMaisBaixo(Aluno alunos[], int total){
    int indiceMaisBaixo = 0;
    for(int i=1; i<total; i++){
        if(alunos[i].altura < alunos[indiceMaisBaixo].altura){
            indiceMaisBaixo = i;
        }
    }
    return indiceMaisAlto;
}

int main(){
    Aluno alunos[TOTAL_ALUNOS];

    printf("\n\tDigite o número do aluno e a altura (em metros) para %d alunos:\n", TOTAL_ALUNOS);
    for(i=0; i<TOTAL_ALUNOS; i++){
        printf("\n\tAluno %d - Numero: ", i+1);
        scanf("%d", &alunos[i].numero);
        printf("\n\tAluno %d - Altura (m): ", i+1);
        scanf("%f", &alunos[i].altura);
    }

    int indiceBaixo = encontrarMaisBaixo(alunos, TOTAL_ALUNOS);
    int indiceAlto = encontarMaisAlto(alunos, TOTAL_ALUNOS);

    printf("\n\tAluno mais baixo:\n");
    printf("\n\tNúmero %d, Altura: %.2f m\n", alunos[indiceBaixo], numero, alunos[indiceBaixo], altura);

     printf("\n\tAluno mais alto:\n");
    printf("\n\tNúmero %d, Altura: %.2f m\n", alunos[indiceAlto], numero, alunos[indiceAlto], altura);

    return 0;

}
