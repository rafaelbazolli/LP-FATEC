#include<stdio.h>  // Responsavel pelos comandos printf e scanf

main() {
    /* Preencher um vetor com 8 números inteiros fornecidos pelo usuário e gerar um novo a partir dele, onde se o numero digitado pelo usuário foi par, deve armazenar 0 naquela posição, se foi impar, deve armazenar o valor 1 na posição. 
    No final, exibir o novo vetor gerado. */

    int vetorUsuario[8], novoVetor[8], i;    // Declarando as variaveis do tipo inteiro

    for(i = 0; i < 8; i++) {  // Repete o laco 8 vezes para preencher todo o vetor do usuario
        printf("Digite um numero: ");   // Imprime a mensagem na tela
        scanf("%d", &vetorUsuario[i]);  // Recebe o valor do usuario e armazena na posicao atual do vetor

        novoVetor[i] = (vetorUsuario[i] % 2 == 0) ? 0 : 1;
        // Comando acima verifica se o numero atual digitado e par, se sim, ele armazena 0 no novo vetor, caso contrario amrazena 1
    }

    // Laco for para exibir o novo vetor
    printf("\nNovo vetor gerado:\n");  // Imprime a mensagem na tela
    for(i = 0; i < 8; i++) {  // Repete o laco 8 vezes para exibir o novo vetor inteiro
        printf("%d\t", novoVetor[i]);  // Imprime na tela o valor da posicao atual do novo vetor
    }
}