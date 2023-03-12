#include<stdio.h>
#include<conio.h>
#include<windows.h>

main() {
	/* Criar em linguagem C e utilizando o comando WHILE, um programa que imprima as letras de A a Z em um	
	intervalo de um décimo de segundo. */
	
	char letra = 'A';
	
	printf("Programa que exibe o alfabeto de A a Z\n\n");
	
	while(letra <= 'Z') { 	// Enquanto letra for menor que Z, vai manter a execucao do bloco em loop
		printf("%c ", letra);
		Sleep(100); // 0,1 segundos de sleep
		letra++; // Incremento 
	}
	
	getch();
}

