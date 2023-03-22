#include<stdio.h> // Responsavel pelos comandos printf e scanf
#include<conio.h> // Responsavel pelo comando getch
#include<windows.h> // Responsavel pelo comando system

main() {
	/* Criar um programa em linguagem C que imprima o alfabeto de A a Z com o intervalo de 0,5 segundos. */
	
	printf("Programa que exibe o alfabeto de Z a A \n\n");
	
	/* A linguagem C usa tabela ASCII como referencia. Quando iteramos a letra 'A' fazendo o incremento, na verdade estamos 
	incrementando o numero inteiro correspondente a essa letra na tabela ASCII */  
	for(char i = 'Z'; i >= 'A'; i--) { // Laco de repeticao que inicia em 'Z' e se repete enquanto o contador for maior ou igual a 'A'
		printf("%c ", i); // Imprime o caractere na tela. Para imprimir um caractere, e necessario usar o %c
		Sleep(500); // Aguarda 0.5 segundo ate realizar a proxima iteracao
	}
	
	getch();  // Aguarda o usuario digitar uma tecla qualquer para encerrar a execucao do programa
}
