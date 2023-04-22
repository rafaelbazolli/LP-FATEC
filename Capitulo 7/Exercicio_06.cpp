#include<stdio.h>  // Responsavel pelo comando printf e scanf

main() {
    /* Preencher um vetor com 8 números inteiros fornecidos pelo usuário. Mostrar o vetor e informar quantos desses números
    são maiores que 30, somá-los, e exibir na tela. Também deve-se somar todos os números do vetor e exibir na tela. */

    int vetor[8], maioresQue30 = 0, soma = 0, i;  // Declarando as variaveis do tipo inteiro 

    for(i = 0; i < 8; i++) {  // Repete o laco 8 vezes, para que possa preencher o vetor
        printf("Digite um numero: ");  // Imprime a mensagem na tela
        scanf("%d", &vetor[i]);  // Recebe o valor do usuário e armazena na posicao atual do vetor

        // Abaixo e usado um operador ternario. Ele vai efetuar a comparacao se o vetor[i] e maior que 30. Se sim, ele retorna 1,
        // caso contrario, ele retorna 0.
        maioresQue30 += (vetor[i] > 30) ? 1 : 0;    // Acumulador para contar somente os que forem maiores que 30
        soma += vetor[i];  // Acumulador que soma todos os numeros do vetor
    }
    
    for(i = 0; i < 8; i++) {  // Repete o laco 8 vezes, para que possa exibir todo o vetor
        printf(" %d\t", vetor[i]);  // Imprime na tela o valor que esta nessa posicao do vetor
    }
    printf("\nNo vetor existem %d numeros maiores que 30.\nA soma dos numeros do vetor e %d", maioresQue30, soma);
    // Comando acima imprime a mensagem na tela contendo quantos foram maiores que 30, e a soma de todo o vetor
}