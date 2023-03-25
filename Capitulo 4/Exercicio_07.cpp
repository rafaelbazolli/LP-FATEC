#include<stdio.h> // Responsavel pelos comandos printf e scanf
#include<conio.h> // Responsavel pelo comando getch
#include<windows.h> // Responsavel pelo comando Sleep

main() {
	/* Criar um programa em linguagem C que imprima uma tabuada do 1 a 10 conforme entrada do usu�rio, 
	com o intervalo de 0,5 segundos utilizando o comando FOR */
	
	int i, j, num;  // Declaracao das variaveis do tipo inteiro
	printf("Programa que exibe tabuada do numero escolhido!\n\n");  // Imprime a mensagem na tela
	printf("\nDigite um numero: "); // Imprime a mensagem na tela
	scanf("%i", &num);  // Recebe o numero informado pelo usuario
	
	for(i = 1; i <= 10; i++) {   // Repete o bloco 10 vezes, iniciando no 1, e indo ate 10
	
		j = i * num;   // 'j' sera a variavel que recebe a multiplicacao atual, numero digitado pelo usuario x contador atual
		
		printf("%i X %i = %i\n", i, num, j);   // Imprime na tela o numero do usuario, o contador, e o produto entre eles
		Sleep(500); // Aguarda 0.5 segundos ate seguir para a proxima iteracao
	}
	
	getch();  // Aguarda o usuario digitar uma tecla qualquer para encerrar a execucao do programa
}

