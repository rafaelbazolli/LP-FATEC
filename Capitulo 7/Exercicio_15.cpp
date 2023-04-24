#include<stdio.h>  // Responsavel pelos comandos printf e scanf
#include<time.h>  // Responsavel pelo comando time
#include<windows.h> // Responsavel pelos comandos system e random/srand

main() {
    /* Preencha dois vetores de 10 posições com valores inteiros aleatórios entre 1 a 20. Depois deve ser gerado outro vetor de 10 posições, de acordo com as regras:
    - As posições pares do novo vetor devem conter a subtração dos elementos do vetor1 pelo vetor2 nas mesmas posições;
    - As posições impares do novo vetor devem conter o produto entre os elementos do vetor1 e do vetor2 nas mesmas posições; Ao final, exibir os 3 vetores.
    Ex: vetor1 = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10] vetor2 = [2, 2, 2, 2, 2, 2, 2, 2, 2, 2]  vetor3 = [-1, 4, 1, 8, 3, 12, 5, 16, 7, 20]*/

    int vetor1[10], vetor2[10], vetor3[10], i, j = 0, k = 1;  // Declarando as variaveis do tipo inteiro

    srand(time(NULL));  // Gera uma semente aleatoria, a partir da qual o comando rand() pode gerar novos numeros a cada execucao do programa

    // Preenchendo o primeiro vetor
    for(i = 0; i < 10; i++) {
        vetor1[i] = (rand() % 20) + 1; // Gera um numero aleatorio entre 0 e 19, e soma 1, deixando o numero entre 1 e 20
    }
    // Preenchendo o segundo vetor
    for(i = 0; i < 10; i++) {
        vetor2[i] = (rand() % 20) + 1; // Gera um numero aleatorio entre 0 e 19, e soma 1, deixando o numero entre 1 e 20
    }

    // Preenchendo o terceiro vetor
    for(i = 0; i < 10; i++) {
        if(i % 2 == 0) {  // Se a posicao for par, vetor3 deve receber a subtracao entre vetor1[i] e vetor2[i]
            vetor3[i] = vetor1[i] - vetor2[i];
        }
        else {  // Se a posicao for impar, vetor3 deve receber o produto entre vetor1[i] e vetor2[i]
            vetor3[i] = vetor1[i] * vetor2[i];
        }
    }

    // Laco for para exibir o Vetor 1
    printf("\nVetor 1\n");
    for(i = 0; i < 10; i++) {
        printf(" %d\t", vetor1[i]);
    }

    // Laco for para exibir o Vetor 2
    printf("\n\nVetor 2\n");
    for(i = 0; i < 10; i++) {
        printf(" %d\t", vetor2[i]);
    }
    // Laco for para exibir o Vetor 3
    printf("\n\nVetor 3\n");
    for(i = 0; i < 10; i++) {
        printf(" %d\t", vetor3[i]);
    }


}
