#include <stdio.h>   // Responsavel pelos comandos printf e scanf
#include <string.h>  // Responsavel pelo comando gets

int main() {
    int i, j;
    float notas[2][1], media[2];  // Declarando as variaveis do tipo real, uma matriz das notas e um vetor para as medias
    char nomes[2][30], situacao[2][10];  // Declarando as variaveis do tipo char que sao duas matrizes

    for(i = 0; i < 2; i++) {  // Laco for para receber as informacoes dos alunos
        fflush(stdin);   // Limpa o buffer do teclado a cada iteracao, para que o comando gets consiga receber corretamente a string abaixo
        printf("\nDigite o nome do %d aluno: ", i + 1);
        gets(nomes[i]);  // O comando gets vai armazenar a string na proxima posicao vazia do vetor a cada iteracao

        for(j = 0; j < 2; j++) {  // Laco for para receber as duas notas de cada aluno
            printf("\nDigite a %d nota do aluno:", j + 1);
            scanf("%f", &notas[i][j]);
        }

        media[i] = (notas[i][0] + notas[i][1]) / 2;   // Calculando a media das notas da matriz de notas

        if (media[i] > 6) {
            strcpy(situacao[i], "Aprovado");
        } else {
            strcpy(situacao[i], "Reprovado");
        }
    }

    // Exibindo quem foi aprovado ou reprovado
    printf("\n\nSituacao dos alunos");
    for(i = 0; i < 2; i++) {
        printf("\nNome: %s | %s", nomes[i], situacao[i]);
    }
}
