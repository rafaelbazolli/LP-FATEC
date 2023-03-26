#include<stdio.h>  // Responsavel pelo comando printf
#include<conio.h>  // Responsavel pelo comando getch
#include<string.h> // Responsavel pelo comando strlen

main() {
	/* Solicitar um nome ao usuário e mostrar o primeiro, o último, o quarto, do primeiro ao terceiro, do segundo ao ultimo caractere do nome fornecido. 
	Mostrar a posição de cada letra no vetor. */
	
	int tamanho, i;  // Declarando as variaveis do tipo inteiro
	char nome[50];  // Declarando a variavel do tipo char, a string de tamanho 50
	
	printf("\nDigite um nome: ");  // Imprime o texto na tela
	gets(nome);  // Recebe o nome digitado pelo usuario
	
	tamanho = strlen(nome);  // Atravez da funcao strlen, pega o tamanho da string nome, e armazena na variavel 'tamanho'
	
	printf("Palavra digitada: %s", nome);  // Imprime na tela a palavra digitada pelo usuario
	printf("\nPrimeiro caractere: %c", nome[0]); // Imprime na tela o primeiro caractere, posicao 0
	printf("\nUltimo caractere: %c", nome[tamanho - 1]);  // Imprime na tela o ultimo caractere, posicao = tamanho - 1
	printf("\nO quarto caractere: %c", nome[3]);  // Imprime na tela o quarto caractere, a posicao numero 3
	
	printf("\nDo primeiro ao terceiro caractere: ");  // Imprime a mensagem na tela
	
	for(i = 0; i < 3; i++) {  // Laco FOR para percorrer da posicao 0 ate a 2 do vetor
		printf("%c", nome[i]);  // Imprime na tela o caractere correspondente ao vetor na posicao de indice 'i'
	}
	
	printf("\nDo segundo ao ultimo caractere: "); // Imprime a mensagem na tela
	
	for(i = 1; i < tamanho; i++) {  // Laco FOR para percorrer da posicao 0 ate a o fim do vetor
		printf("%c", nome[i]); // Imprime na tela o caractere correspondente ao vetor na posicao de indice 'i'
	}
	
	// Agora mostrando todos os caracteres do vetor
	printf("\n\nTodos os caracteres do vetor: \n");  // Imprime a mensagem na tela
	for(i = 0; i < tamanho; i++) {
		printf("Posicao %d = '%c'\n", i, nome[i]);  // Imprime na tela o caractere correspondente ao vetor na posicao de indice 'i'
	}

	getch();  // Aguarda o usuario digitar qualquer teclar para poder encerrar a execucao do programa
}

