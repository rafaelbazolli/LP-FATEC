#include<stdio.h> // Responsavel pelo comando printf
#include<conio.h> // Responsavel pelo comando getch
#include<windows.h> // Responsavel pelo comando Sleep

main() {
	/* Criar um programa em linguagem C que imprima a tabela ASCII utilizando o comando FOR. */
	
	int i;  // Declarando a variavel do tipo inteiro que sera o contador no FOR
	printf("Programa que os caracteres da tabela ASCII \n\n");  // Imprime a mensagem na tela
	
	for(i = 0; i <= 255; i++) {  // Tabela ASCII possui 256 caracteres, esse FOR vai percorrer os valores dessa tabela
		printf("%i = %c\n", i, i); // Imprime na tela o numero do caractere na tabela ASCII, e seu caractere correspondente
		Sleep(500);  // Aguarda 0.5 segundos ate seguir para a proxima iteracao
	}
	
	getch();  // Aguarda o usuario digitar uma tecla qualquer para encerrar a execucao do programa
}

