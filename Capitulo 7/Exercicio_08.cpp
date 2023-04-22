#include<stdio.h>  // Responsavel pelo comando printf e scanf

main() {
    /* Preencha dois vetores de 5 posições com valores inteiros fornecidos pelo usuário. O programa deve mostrar os valores 
    dos vetores, e depois somar e mostrar os números que pertençam a mesma posição, ou seja: vet1[0] + vet2[0], vet1[1]+ vet2[1],... */

    int vetor1[5], vetor2[5], i;  // Declarando as variaveis do tipo inteiro

    printf("Preenchendo o primeiro vetor\n");  // Imprime a mensagem na tela
    for(i = 0; i < 5; i++) {  // Repete o laco 5 vezes para preencher o vetor1
        printf("Digite um numero: ");  // Imprime a mensagem na tela
        scanf("%d" ,&vetor1[i]);  // Recebe o valor do usuario e armazena na posicao atual do vetor
    }

    printf("\nPreenchendo o segundo vetor\n");  // Imprime a mensagem na tela
    for(i = 0; i < 5; i++) {  // Repete o laco 5 vezes para preencher o vetor2
        printf("Digite um numero: ");  // Imprime a mensagem na tela
        scanf("%d" ,&vetor2[i]);  // Recebe o valor do usuario e armazena na posicao atual do vetor
    }

    // Mostrando os valores do vetor1
    printf("\n\nVetor 1\n");  // Imprime a mensagem na tela
    for(i = 0; i < 5; i++) {  // Repete o laco 5 vezes para exibir todos os elementos do vetor
        printf("%d\t", vetor1[i]);  // imprime na tela o valor na posicao atual do vetor1
    }
    // Mostrando os valores do vetor2
    printf("\nVetor 2\n");  // Imprime a mensagem na tela
    for(i = 0; i < 5; i++) {  // Repete o laco 5 vezes para exibir todos os elementos do vetor
        printf("%d\t", vetor2[i]);  // imprime na tela o valor na posicao atual do vetor2
    }
    // Mostrando a soma dos vetores
    printf("\nSoma dos vetores\n");  // Imprime a mensagem na tela
    for(i = 0; i < 5; i++) {   // Repete o laco 5 vezes para exibir a soma em todas as posicoes
        printf("%d\t", vetor1[i] + vetor2[i]);  // Imprime a soma dos dois vetores na posicao atual
    }
}