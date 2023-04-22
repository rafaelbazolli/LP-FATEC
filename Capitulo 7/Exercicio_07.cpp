#include<stdio.h>  // Responsavel pelo comando printf e scanf

main() {
    /* Preencher um vetor com 8 números inteiros fornecidos pelo usuário. Calcular a média dos valores do vetor.
    Mostrar quantos números são múltiplos de 5, quantos números são maiores que 10 e menores que 30, e qual o maior número do vetor. */

    int vetor[8], maior = 0, multiplo5 = 0, entre10E30 = 0, i;  // Declarando as variaveis do tipo inteiro
    float soma = 0, media;    // Declarando as variaveis tipo real(ponto flutuante) 

    for(i = 0; i < 8; i++) {  // Repete o laco 8 vezes para que o vetor seja preenchido
        printf("Digite um numero: ");  // Imprime a mensagem na tela
        scanf("%d", &vetor[i]);   // Recebe o valor do usuario e armazena na posicao atual do vetor

        soma += vetor[i];   // Acumulador que vai somar todos os valores recebidos do vetor
        maior = (vetor[i] > maior) ? vetor[i] : maior;  // Operador ternario que verifica se o numero atual lido e o maior. Se sim, ele armazena o vetor[i] como sendo maior, caso contrario ele mantem a variavel sendo 'maior'
        multiplo5 += (vetor[i] % 5 == 0) ? 1 : 0;  // Acumulador para os multiplos de 5, tambem usando operador ternario para atribuir os valores
        entre10E30 += ((vetor[i] > 10) && (vetor[i] < 30)) ? 1 : 0;  
        // No comando acima, e usado um operador ternario para o acumulador entre10E30. Ele tambem aceita expressoes maiores 
        // nas comparacoes, a partir delas ele valida se a resposta e verdadeira ou falsa, e faz a atribuicao correspodente
    }

    media = soma / 8;  // Calcula a media dos valores do vetor
    for(i = 0; i < 8; i++)  // Caso nao use as chaves no for, ele entende que deve executar somente a proxima linha no laco.
        printf("%d\t", vetor[i]);  // Imprime o valor que esta na posicao atual do vetor

    printf("\nMedia dos valores do vetor e %.2f", media);  // Imprime na tela a mensagem com a media dos valores
    printf("\nExistem %d numeros multiplos de 5 no vetor.", multiplo5);  // Imprime quantos sao multiploes de 5
    printf("\nExistem %d numeros maiores que 10 e menores que 30 no vetor.", entre10E30);  // Imprime quantos estao entre 10 e 30
    printf("\nO maior numero do vetor e %d", maior);  // Imprime na tela a mensagem e qual o maior numero do vetor
}