#include<stdio.h>  // Responsavel pelos comandos printf e scanf

main() {
    /* Faça um programa que leia um vetor de 12 números inteiros representando o faturamento de uma empresa nos últimos 12 meses. 
    O programa deve calcular e exibir a média aritmética do faturamento, o maior e o menor valor faturado e em que mês ocorreram. */

    int i, mesMaior, mesMenor;
    float faturamento[12], soma = 0, media, menorFaturamento, maiorFaturamento = 0;

    for(i = 0; i < 12; i++) {
        printf("Digite o valor do faturamento no mes %d: ", i + 1);
        scanf("%f", &faturamento[i]);

        soma += faturamento[i];

        if(faturamento[i] > maiorFaturamento) {
            maiorFaturamento = faturamento[i];
            mesMaior = i + 1;
        }
        
        if(i == 0) {
            menorFaturamento = faturamento[i];
            mesMenor = i + 1;
        }
        else {
            menorFaturamento = (faturamento[i] < menorFaturamento) ? faturamento[i] : menorFaturamento;
            mesMenor = i + 1;
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