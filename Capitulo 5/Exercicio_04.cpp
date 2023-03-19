#include<stdio.h>
#include<conio.h>
#include<windows.h>

main() {
	/* Criar em linguagem C e utilizando o comando WHILE, um programa que imprima as letras de Z a A em um 
	intervalo de um décimo de segundo. */
	
	char letra = 'Z';
	
	printf("Programa que exibe o alfabeto de Z a A\n\n");
	
	while(letra >= 'A') { 	// Enquanto letra for maior que A, vai manter a execucao do bloco em loop
		printf("%c ", letra);
		Sleep(100); // 0,1 segundos de sleep
		letra--; // Incremento 
	}
	
	getch();
}

