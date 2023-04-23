#include<stdio.h>  // Responsavel pelos comandos printf e scanf

main() {
    /* Faça um programa em C que receba um vetor de 6 numeros inteiros e um número inteiro X, e retorne todos os pares de elementos do
     vetor que somados resultam em X. Os pares podem se repetir, 2 + 4 ou 4 + 2...*/

     int vetor[6], x, i, j; // Declarando as variaveis de tipo inteiro

    for(i = 0; i < 6; i++) {   // Repete o laco 6 vezes para preencher o vetor
    printf("Digite um numero: "); // Imprime a mensagem na tela
    scanf("%d", &vetor[i]);  // Recebe o valor do usuario e armazena na posicao atual do vetor
    }

    printf("\nInsira um numero inteiro: ");  // Imprime a mensagem na tela
    scanf("%d", &x);  // Recebe o valor de x

    for(i = 0; i < 6; i++) { // repete o laco 6 vezes para percorrer cada elemento do vetor
        for(j = 1; j < 6; j++) {   // Repete o laco 6 vezes.. para cada elemento do vetor, ele vai percorrer novamente o vetor para fazer as comparacoes
            if(vetor[i] + vetor[j] == x) { // se a soma do numero na posicao i, junto ao numero na posicao j, que esta percorrendo o array, for 'x', executa o bloco
                if(i == j)  // Da um continue e pula fora do if, caso o indice de i e j sejam iguais, ou seja, se ele estiver tentando se somar a ele mesmo
                    continue;
                else
                    printf("\n%d + %d = %d", vetor[i], vetor[j], x);  // Imprime na tela as posicoes que foram somadas e resultaram em X
            }
        }
    }
}
