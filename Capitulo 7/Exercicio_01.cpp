#include<stdio.h>  // Responsavel pelos comandos printf e scanf
#include<conio.h>  // Responsavel pelo comando getch

main() {
	/* Preencher um vetor com 6 numeros fornecidos pelo usuario e mostra-los na tela. */
	int i, vetor[6];  // Declarando as variaveis do tipo inteiro. Incluindo o vetor de numeros inteiros de 6 posicoes
	
	// for que vai armazenar os valores no vetor
	for(i = 1; i <= 6; i++)	{  // O laco FOR percorre o mesmo tamanho do vetor, repetindo assim a quantidade de vezes necessarias para preenche-lo por completo
		printf ("\nDigite um numero: ");  // Imprime a mensagem na tela
		scanf("%d",&vetor[i]);  // Recebe o valor digitado pelo usuario, e armazena no vetor na posicao 'i'
	}
	printf("\n\n-=-=-=-=-=-=-=-=-=-=\n\n");  // Imprime a mensagem na tela
	
	for(i = 1; i <=6 ; i++) {  // Laco FOR que ira percorrer o vetor, para exibir seus valores
		printf ("%d\t",vetor[i]);  // Imprime a mensagem na tela, e o numero correspondente ao vetor na posicao 'i' 
	}
	
	getch();  // Aguarda o usuario digitar qualquer teclar para poder encerrar a execucao do programa
}
