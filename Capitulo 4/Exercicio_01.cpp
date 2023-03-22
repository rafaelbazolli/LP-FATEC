#include<stdio.h> // Responsavel pelos comandos printf e scanf
#include<conio.h> // Responsavel pelo comando getch
#include<windows.h> // Responsavel pelo comando system

main() {
	/* Criar um programa em linguagem C que imprima um numero de 0 a 100 com o intervalo de 0,5 segundos. */
	
	printf("Programa que exibe os numeros de 0 a 100\n\n");  // Imprime a mensagem na tela
	
	for(int i = 0; i <= 100; i++) {  // Laco de repeticao que inicia em 0 e se repete enquanto o contador for menor ou igual a 100
		printf("%d ", i);  // Imprime para o usuario o contador
		Sleep(500); // Comando Sleep da lib windows.h funciona em ms, nao em segundos
	}
	
	getch();  // Aguarda o usuario digitar uma tecla qualquer para encerrar a execucao do programa
}


