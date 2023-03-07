#include<stdio.h> // Responsável pelos comandos printf e scanf
#include<conio.h> // Responsável pelo comando getch
#include<windows.h> // Responsável pelo comando system

main(){
	/* Criar um programa em linguagem C que faca a conversao de 4 bit( NIBLE ) em um numero decimal.*/
	system("cls"); // Limpa a tela do prompt 
	
	int num, x1, x2, x3, x4; // Declaracao das variaveis do tipo inteiro
	
	printf("Programa para conversao de 4bits para decimal\n"); // Imprime o texto para o usuario
	printf("Digite o numero: "); // Imprime o texto para o usuario
	scanf("%d%d%d%d", &x1, &x2, &x3, &x4); // Recebe os valores dos 4 bits fornecidos pelo usuario
	
	num = ((x1 * 8) + (x2 * 4) + (x3 * 2) + (x4 * 1)); // Executa a conversao de decimal para binario
	
	printf("Decimal: %d", num);	// Imprime para o usuario o valor convertido para decimal
	
	getch(); // Aguarda o usuario digitar uma tecla qualquer para encerrar a execucao do programa
}
