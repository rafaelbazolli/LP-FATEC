#include<stdio.h>  // Responsavel pelo comando printf e scanf

main() {
    /* Preencher um vetor com os números pares do número 2 a 20. Preencher um vetor com os números de 10 a 19. 
    Somar os vetores acima. */

    int vetorPares[10], vetor2[10], i, aux = 0;  // Declarando as variaveis do tipo inteiro que serao usadas

    for(i = 0; i < 10; i++) {  // Vai repetir o laco 10 vezes, para preencher as 10 posicoes do vetorPares
        vetorPares[i] = aux + 2;  // A cada iteracao ele armazena o valor da variavel aux no indice i do vetor
        aux += 2;  // No final do bloco ele acrescenta 2 ao valor de aux, para que a proxima iteracao ocorra com o proximo num par
    }

    for(i = 0; i < 10; i++) {  // Vai repetir o laco 10 vezes, para preencher as 10 posicoes do vetor2
        vetor2[i] = i + 10;  // A cada iteracao armazena o contador + 10, ja que ele precisa pegar os valores de 10 a 19
    }

    printf("\nA soma dos vetores: ");  // Imprime a mensagem na tela
    for(i = 0; i < 10; i++) {  // Repete 10 vezes o laco para percorrer as 10 posicoes dos dois vetores 
        printf("\t[%d] ", vetorPares[i] + vetor2[i]);  // Imprime na tela a soma dos vetores em cada uma das posicoes
    }
}