#include<stdio.h>  // Responsavel pelo comando printf

main() {
	/* Preencher um vetor com 8 numeros inteiros; solicitar um numero do teclado. Pesquisar se esse numero existe no vetor. 
	Se existir, imprimir em qual posicao do vetor e qual a ordem foi digitado. Se nao existir, imprimir MSG que nao existe. */

	int vetor[8], num, i;  // Declarando as variaveis do tipo inteiro, incluindo o vetor de 8 posicoes 
	bool existe = false;  // Declarando a variavel booleana que indica se o numero foi encontrado ou nao dentro do vetor

	for(int i=0; i < 8; i++) {   // Enquanto i for menor que 8, mantem a execucao do laco abaixo
		printf("\nDigite o numero na posicao %d do vetor: ", i);  // Imprime a mensagem na tela contendo a posicao no vetor
		scanf("%d", &vetor[i]);  // Recebe o valor do usuario e armazena na posicao atual do vetor usando i como referencia
	}

	printf("\n\nDigite um numero: ");  // Imprime a mensagem na tela
	scanf("%d", &num);  // Recebe o valor do numero que o usuario esta buscando

	for(i = 0; i < 8; i++) {  // Enquanto i for menor que 8, mantem a execucao do laco abaixo
		if(num == vetor[i]) {  // Se o numero do usuario for igual ao numero na posicao atual do vetor, executa o bloco
			existe = true;   // A variavel existe passa a ser verdadeira, indicando que o numero foi encontrado no vetor
			printf("O numero %d esta na posicao %d do vetor.", num, i);  // Imprime a mensagem na tela, com a posicao do vetor
			printf("\nO numero %d foi o %d numero a ser digitado.", num, i + 1);  // Imprime a mensagem na tela com a ordem
		}
	}
	if(!existe) {  // Se a variavel existe for falsa, indica que o numero nao foi encontrado no vetor, e exibe a mensagem abaixo
		printf("O numero nao existe dentro do vetor!");
	}
}
