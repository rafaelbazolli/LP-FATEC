#include<stdio.h> // Responsavel pelos comandos printf e scanf
#include<conio.h> // Responsavel pelo comando getch
#include<windows.h> // Responsavel pelo comando system

main() {
	
	int num;  // Declaracao de variavel do tipo inteiro
	
	printf("Programa para verificar se um numero e PAR ou IMPAR\n"); // Imprime a mensagem para o usuario
	printf("Digite um numero inteiro: "); // Imprime a mensagem para o usuario
	scanf("%i", &num);
	
	if (num % 2 == 0)  // Se o resto da divisao do num1 por 2 for zero, executa o bloco abaixo
	{
		printf("\nO numero %i e PAR.", num); // Imprime a mensagem que o numero e par, e o numero digitado
	} 
	else {  // Caso o resto da divisao do num1 tenha dado 1, executa o bloco abaixo
		printf("\nO numero %i e IMPAR.", num); // Imprime a mensagem que o numero e impar, e o numero digitado
	}
	
	getch(); // Aguarda o usuario digitar uma tecla qualquer para encerrar a execucao do programa
}
