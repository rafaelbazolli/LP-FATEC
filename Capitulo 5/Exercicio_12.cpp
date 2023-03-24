#include<stdio.h> // Responsavel pelo comando printf e scanf
#include<conio.h> // Responsavel pelo comando getch

main() {
	/* Criar em linguagem C e utilizando o comando WHILE ou DO WHILE, um programa que peca numeros ao usuario ate que a soma de todos os
	numeros digitados for pelo menos 20. */
	
	int num, total = 0;  // Declarando as variaveis do tipo inteiro
	
	printf("Programa de soma cumulativa ate no minimo 20!\n\n");  // Imprime a mensagem na tela
	
	do {
		printf("\nTotal = %d\n", total);  // Imprime na tela a mensagem contendo o valor total da soma ate o momento
		printf("\nDigite um valor: ");  // Imprime a mensagem na tela
		scanf("%d", &num);  // Recebe um valor digitado pelo  usuario
		
		total += num;  // Realiza a soma cumulativa. Esse comando seria o equivalente a total = total + soma
		
	} while(total <= 20);  // Enquanto 'total' for menor ou igual a 20, ele mantem o laco, retornando daqui para a linha 13
	printf("\nTotal FINAL = %d", total);
	
	getch(); // Aguarda o usuario digitar uma tecla qualquer para encerrar a execucao do programa
}
