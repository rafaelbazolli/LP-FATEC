#include<stdio.h> // Responsavel pelo comando printf
#include<conio.h> // Responsavel pelo comando getch
#include<windows.h> // Responsavel pelo comando Sleep

main() {
	/* Criar em linguagem C e utilizando o comando WHILE, um programa que imprima as letras de Z a A em um 
	intervalo de um decimo de segundo. */
	
	char letra = 'Z';  // Declarando a variavel tipo  char, e atribuindo a ela um valor inicial sendo a letra 'Z'
	
	printf("Programa que exibe o alfabeto de Z a A\n\n");
	
	while(letra >= 'A') { 	// Enquanto letra for maior que A, vai manter a execucao do bloco em loop
		printf("%c ", letra);  // Imprime na tela o caractere correspondente
		Sleep(100); // 0,1 segundos de sleep
		letra--; // Incremento 
	}
	
	getch();  // Aguarda o usuario digitar uma tecla qualquer para encerrar a execucao do programa
}

