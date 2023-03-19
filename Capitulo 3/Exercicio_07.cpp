#include<stdio.h> // Responsavel pelos comandos printf e scanf
#include<conio.h> // Responsavel pelo comando getch
#include<windows.h> // Responsavel pelo comando system

main(){
	/* Criar um programa em linguagem C que leia dois números inteiros e somá-los. Se a soma for maior que 10, mostrar o
	resultado. Senão exibir a mensagem que não é possível exibir o número. */
	
	int num1, num2, resultado; // Declarando as variaveis do tipo inteiro
	
	printf("Programa que soma dois numeros intieros!\n\n"); // Imprime a mensagem na tela
	printf("Digite o primeiro numero: "); // Imprime a mensagem na tela
	scanf("%i", &num1);  // Recebe o valor do numero digitado pelo usuario
	printf("Digite o segundo numero: "); // Imprime a mensagem na tela
	scanf("%i", &num2);  // Recebe o valor do numero digitado pelo usuario
	
	resultado = num1 + num2; // Efetua a soma e aramazena em 'resultado'
	
	if(resultado > 10) {
		printf("\n%i + %i = %i", num1, num2, resultado);
		// O comando acima imprime na tela os numeros digitados, e a soma deles
	}
	else {
		printf("\nNao foi possivel exibir o numero! Os criterios nao foram atingidos."); // Imprime a mensagem na tela
	}
	
	getch(); // Aguarda o usuario digitar uma tecla qualquer para encerrar a execucao do programa
}

