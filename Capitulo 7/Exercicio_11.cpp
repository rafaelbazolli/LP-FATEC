#include<stdio.h>  // Responsavel pelos comandos printf e scanf

main() {
    /* Faca um programa que leia um vetor de 12 numeros inteiros representando o faturamento de uma empresa nos ultimos 12 meses. 
    O programa deve calcular e exibir a média aritmetica do faturamento, o maior e o menor valor faturado e em que mes ocorreram. */

    int i, mesMaior, mesMenor; // declarando as variaveis do tipo inteiro
    float faturamento[12], soma = 0, media, menorFaturamento, maiorFaturamento = 0; // Declaranado as variaveis do tipo real(ponto flutuante)

    for(i = 0; i < 12; i++) { // Repete o laco 12 vezes para preencher o o vetor de faturamento
        printf("Digite o valor do faturamento no mes %d: ", i + 1); // Imprime a mensagem na tela contendo o mes do faturamento
        scanf("%f", &faturamento[i]); // Recebe o valor informado pelo usuario e armazena na posicao atual do vetor

        soma += faturamento[i];  // Acumulador para somar todos os valores do faturamento

        if(faturamento[i] > maiorFaturamento) {  // Se o faturamento atual e maior que o atual maior
            maiorFaturamento = faturamento[i];
            mesMaior = i + 1;   // Variavel que armazena o mes que foi detectado o maior faturamento
        }
        
        if(i == 0) {  //Se estiver na primeira iteracao, o menor numero e o  faturamento atual
            menorFaturamento = faturamento[i];
            mesMenor = i + 1;  // Armazena o mes que foi detectado o menor faturamento
        }
        else {
            menorFaturamento = (faturamento[i] < menorFaturamento) ? faturamento[i] : menorFaturamento;
            mesMenor = i + 1;  // Variavel que armazena o mes que foi detectado o menor faturamento
        }
            
    }
    media = soma / 12;  // calcula a media dos faturamentos

    // Laco for para exibir os faturamentos
    printf("\n\nFaturamentos: \n");  // Imprime a mensagem na tela
    for(i = 0; i < 12; i++) {
        printf("Mes %d = R$ %.2f |\t", i + 1, faturamento[i]);
    }
    printf("\nMedia de faturamento da empresa: R$ %.2f", media);  // Imprime a media dos faturamentos 
    printf("\nMaior Faturamento foi de %.2f no mes %d.", maiorFaturamento, mesMaior); // Imprime o maior faturamento e o mes
    printf("\nMenor Faturamento foi de %.2f no mes %d.", menorFaturamento, mesMenor); // Imprime o menor faturamento e o mes
}