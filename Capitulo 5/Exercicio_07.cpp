#include<stdio.h>
#include<conio.h>
#include<windows.h>

main() {
	/* Criar em linguagem C e utilizando o comando DO WHILE, um programa que imprima uma contagem regressiva do numero que voce digitar.*/
	
	int i, num; // Declaracao das variaveis do tipo inteiro
	
	printf("Programa que imprime contagem regressiva!\n\n"); // Imprime o texto na tela
	printf("Digite um numero: "); // Imprime o texto na tela
	scanf("%d", &num);  // Recebe o numero digitado pelo usuario
	
	i = num; // 'i' recebe o mesmo valor de 'num', para que possa ser manipulado sem perdermos o valor dado pelo usuario(num)
	
	do { 
		printf("%d\n", i); // Imprime na tela o valor de 'i'
		i--; 
	} while(i >= 0); // 'i' comecou sendo igual ao numero digitado pelo usuario. Vai ser diminuido ate atingir 0, so entao saira do laço
    	
	getch(); // Aguarda o usuario digitar alguma tecla, e so entao encerra o programa
}

