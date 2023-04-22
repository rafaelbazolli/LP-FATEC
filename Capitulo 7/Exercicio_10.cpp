#include<stdio.h>  // Responsavel pelos comandos printf e scanf

main() {
    /* Crie um programa que leia a altura de 10 atletas de uma equipe de basquete, e armazene as leituras num vetor. 
    Depois, mostre na tela o vetor lido, qual e o atleta mais alto, o mais baixo, a média da altura da equipe.*/

    int i;   // Declarando a variavel do tipo inteiro que sera usada como contador 
    float alturas[10], maisAlto = 0, maisBaixo = 0, soma = 0, media; // Declarando as variaveis do tipo real(ponto flutuante)

    for(i = 0; i < 10; i++) {  // Repete o laco 10 vezes para preencher o vetor de alturas
        printf("Digite a altura do atleta: ");  // Imprime a mensagem na tela
        scanf("%f", &alturas[i]); // Recebe o valor do usuario e armazena na posicao atual do vetor

        soma += alturas[i];
        maisAlto = (alturas[i] > maisAlto) ? alturas[i] : maisAlto;  // Valida se o valor da altura atual e maior que o mais alto

        if(i == 0)  // Se estiver na primeira iteracao, o valor lido sera o menor
            maisBaixo = alturas[i];
        else  // Se estiver nas proximas iteracoes a partir da primeira, ele fara a comparacao atravez do operador ternario
            maisBaixo = (alturas[i] < maisBaixo) ? alturas[i] : maisBaixo;
    }
    media = soma / 10;  // Calcula a media das alturas

    // Laco for para exibir o vetor de alturas
    printf("\n\nAlturas dos atletas: \n");  // Imprime a mensagem na tela
    for(i = 0; i < 10; i++) {  // Repete o laco 10 vezes para exibir as alturas
        printf("%.2f\t", alturas[i]);  // Imprime na tela o valor na posicao atual do vetor alturas
    }

    printf("\nO jogador mais alto tem %.2fm.", maisAlto);  // Imprime qual o valor mais alto do vetor
    printf("\nO jogador mais baixo tem %.2fm.", maisBaixo);  // Imprime qual o valor mais baixo do vetor
    printf("\nA media de altura da equipe e %.2fm.", media);  // Imprime qual a media dos valores do vetor
}