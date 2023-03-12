#include<stdio.h> // Responsavel pelo comando printf
#include<conio.h> // Responsavel pelo comando getch
#include<windows.h> // Responsavel pelo comando Sleep

main() {
	/* Criar em linguagem C e utilizando o comando WHILE, um programa que imprima na tela os números de 100 a 0
	 em um intervalo de um décimo de segundo */
	
	int i = 100; // Declaracao da variavel inteira i, que sera o contador dentro do laço WHILE
	// No WHILE nao e possivel declarar variavel dentro da passagem de parametros, como no FOR... for(int i = 0;;) { ... } 
	
	printf("Programa que exibe os numeros de 100 a 0\n\n");
	
	while(i >= 0) { 	// Enquanto i for maior ou igual a 100, vai manter a execucao do bloco em loop
		printf("%d ", i);
		Sleep(100); // 0,1 segundos de sleep
		i--; // Incremento ... ao contrario do FOR, no WHILE o incremento e inserido dentro do bloco de execucao
	}
	
	getch();
}

