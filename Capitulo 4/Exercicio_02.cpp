#include<stdio.h> // Responsavel pelo comando printf
#include<conio.h> // Responsavel pelo comando getch
#include<windows.h> // Responsavel pelo comando Sleep

main() {
	/* Criar um programa em linguagem C que imprima um numero de 100 a 0 com o intervalo de 0,5 segundos. */
	
	printf("Programa que exibe os numeros de 100 a 0\n\n");  // Imprime a mensagem na tela
	
	for(int i = 100; i >= 0; i--) {  // Laco de repeticao que inicia em 100 e se repete enquanto o contador for maior ou igual a 0
		printf("%d ", i);  // Imprime para o usuario o contador
		Sleep(5); // Comando Sleep da lib windows.h funciona em ms, nao em segundos
	}
	
	getch();  // Aguarda o usuario digitar uma tecla qualquer para encerrar a execucao do programa
}

