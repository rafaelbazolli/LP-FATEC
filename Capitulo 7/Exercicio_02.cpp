#include<stdio.h>  // Responsavel pelo comando printf
#include<conio.h>  // Responsavel pelo comando getch

main() {
	/* Preencher um vetor com os n�meros pares do n�mero 2 a 20. */
	int vetor[10], i, j;  // Declarando as variaveis do tipo inteiro 

	//  A variavel'j' serve para manter controle sobre o indice do vetor, pois as posicoes para armazenamento precisam ser sequenciais nesse caso
	for(i = 2, j = 0; i <= 20; i += 2, j++) {  // Enquanto i for menor ou igual a 20, mantem o laco.
		vetor[j] = i; // Usamos o 'j' como referencia pois ele esta sendo incrementado de 1 em 1, ao contrario do 'i' que esta de 2 em 2
	}
	
	for(i = 0; i < 10; i++){  // O laco FOR vai percorrer o vetor, e exibir os numeros 
		printf(" %d \n", vetor[i]); // Imprime na tela os elementos do vetor
	}
	
	getch();  // Aguarda o usuario digitar qualquer teclar para poder encerrar a execucao do programa
}

