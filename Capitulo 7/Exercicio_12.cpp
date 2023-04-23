#include<stdio.h>  // Responsavel pelos comandos printf e scanf

main() {
    /* Faça um programa em C que receba dois vetores de inteiros de tamanho 6 e verifique se eles são iguais, ou seja, se todos os elementos 
    de um vetor são iguais aos elementos do outro vetor na mesma posição. Exibir a mensagem se são iguais ou não. */

    int vetor1[6], vetor2[6], i, aux = 0;  // Declarando as variaveis do tipo inteiro

    // Recebendo os valores no primeiro vetor
    printf("Primeiro vetor\n");  // Imprime a mensagem na tela
    for(i = 0; i < 6; i++) {   // Repete o laco 6 vezes para preencher o vetor1
        printf("Digite um numero: ");  // Imprime a mensagem na tela
        scanf("%d", &vetor1[i]);  // Recebe o valor do usuario e armazena na posicao atual do vetor1
    }

    // Recebendo os valores no segundo vetor
    printf("\nSegundo vetor\n");  // Imprime a mensagem na tela
    for(i = 0; i < 6; i++) {   // Repete o laco 6 vezes para preencher o vetor2
        printf("Digite um numero: ");  // Imprime a mensagem na tela
        scanf("%d", &vetor2[i]);   // Recebe o valor do usuario e armazena na posicao atual do vetor2
    }

    // Comparando os vetores
    for(i = 0; i < 6; i++) {
        aux += (vetor1[i] == vetor2[i]) ? 1 : 0;  // Caso os dois vetores na mesma posicao tenham o mesmo valor, aux recebe 1, senao recebe 0
    }
    if(aux == 6){  // Se as 6 posicoes foram iguais, ambas retornaram 1 para aux. Se aux for 6 entao todas as posicoes foram iguais
        printf("Os vetores sao IGUAIS!");  // Imprime a mensagem na tela
    }
    else{
        printf("Os vetores sao DIFERENTES!");  // Imprime a mensagem na tela
    }
}