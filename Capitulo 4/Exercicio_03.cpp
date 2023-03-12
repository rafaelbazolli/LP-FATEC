#include<stdio.h>
#include<conio.h>
#include<windows.h>

main() {
	/* Criar um programa em linguagem C que imprima o alfabeto de A a Z com o intervalo de 0,5 segundos. */
	
	printf("Programa que exibe o alfabeto de A a Z \n\n");
	
	for(char i = 'A'; i <= 'Z'; i++) { // Usa tabela ASCII
		printf("%c ", i); // Para imprimir um caractere, e necessario usar o %c
		Sleep(500); 
	}
	
	getch();
}

