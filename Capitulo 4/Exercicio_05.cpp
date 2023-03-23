#include<stdio.h> // Responsavel pelos comandos printf e scanf
#include<conio.h> // Responsavel pelo comando getch
#include<windows.h> // Responsavel pelo comando system

main() {
	/* Criar um programa em linguagem C que imprima dois numeros com o inicio de 0 e 10 e finalize 10 e 0, 
	todos os dois ao mesmo tempo, com o intervalo de 0,5 segundos utilizando FOR DUPLO. */
	
	int i, j; // Declarando as variaveis inteiras que serao os contadores no FOR
	printf("Programa que exibe os numeros de 0 a 10 / 10 a 0 \n\n");  // Imprime a mensagem na tela
	
	for(i = 0, j = 10; i <= 10, j >= 0; i++, j--) { 
		printf("%i || %i \n", i, j);  // Imprime as variaveis 'i' e 'j' na tela
		Sleep(500);  // Aguarda 0.5 segundo ate realizar a proxima iteracao
	}
	
	getch();  // Aguarda o usuario digitar uma tecla qualquer para encerrar a execucao do programa
}
