#include<stdio.h>  // Responsavel pelos comandos printf e scanf

main() {
    /* Preencha um vetor com 10 numeros inteiros fornecidos pelo usuario(vetor1). Em seguida, com base no vetor recebido, deve ser gerado um novo vetor de 10 numeros inteiros, onde: 
    - As cinco primeiras posicoes deverao ser preenchidas pelos numeros das posicoes pares do vetor1
    - As cinco ultimas posicoes deverao ser preenchidas pelos numeros das posicoes impares do vetor1 */

    int vetor[10], novoVetor[10], i, j = 0, k = 1;   // Declarando as variaveis do tipo inteiro

    for(i = 0; i < 10; i++) {  // Laco para preencher as 10 posicoes do vetor
        printf("Digite um numero: "); // Imprime a mensagem na tela
        scanf("%d", &vetor[i]);           // Recebe o valor e armazena na posicao atual do vetor
    }

    // Preenchendo o novo vetor j = contador para os numeros pares // k = contador para os numeros impares
    for(i = 0; i < 10; i++) {   // lac para percorrer as 10 posicoes no novo vetor e atribuir seus valores
        if(i < 5) {  // Condicional para as 5 primeiras posicoes do novoVetor
            novoVetor[i] = vetor[j];  // realiza a atribuicao dos valores
            j += 2;  // Incrementa o valor de j de 2 em 2, para que o proximo valor de j como indice seja sempre um numero par
        }
        else {
            novoVetor[i] = vetor[k];
            k += 2;  // Incrementa o valor de k de 2 em 2, para que o proximo valor de k como indice seja sempre um numero impar
        }
    }

    // Laco for para exibir o novo vetor
    for(i = 0; i < 10; i++) { 
        printf("%d  ", novoVetor[i]);  // Imprime na tela o valor na posicao atual do novo vetor
    }
}
