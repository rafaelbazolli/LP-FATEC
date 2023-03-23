#include<stdio.h> // Responsavel pelo comando printf
#include<conio.h> // Responsavel pelo comando getch
#include<windows.h> // Responsavel pelo comando Sleep

main() {
	/* Criar em linguagem C e utilizando o comando WHILE, um programa que imprima as letras de A a Z em um	
	intervalo de um decimo de segundo. */
	
	char letra = 'A';  // Declarando a variavel tipo  char, e atribuindo a ela um valor inicial sendo a letra 'A'
	
	printf("Programa que exibe o alfabeto de A a Z\n\n");  // Imprime a mensagem na tela
	
	while(letra <= 'Z') { 	// Enquanto letra for menor que Z, vai manter a execucao do bloco em loop
		printf("%c ", letra);  // Imprime na tela o caractere correspondente
		Sleep(100); // 0,1 segundos de sleep
		letra++; // Incremento 
	}
	
	getch();  // Aguarda o usuario digitar uma tecla qualquer para encerrar a execucao do programa
}

