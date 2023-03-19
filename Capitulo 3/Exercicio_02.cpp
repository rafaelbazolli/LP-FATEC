#include<stdio.h> // Responsavel pelos comandos printf e scanf
#include<conio.h> // Responsavel pelo comando getch
#include<windows.h> // Responsavel pelo comando system

main() {
	/*Criar um programa em linguagem C que identifique se o numero é +, - ou NULO.*/
	
	float num;  // Declara uma variavel do tipo real(ponto flutuante)
	
	printf("Programa para verificar se um numero e positivo, negativo ou nulo\n");  // Imprime a mensagem na tela
	printf("Digite um numero: "); // Imprime a mensagem na tela
	scanf("%f", &num);  // Recebe o numero digitado pelo usuario
	
	if (num < 0) // Valida se o numero e negativo, se sim, executa o bloco
	{
		printf("O numero %.2f e negativo.", num); // Imprime na tela a mensagem, e o numero digitado
	}
	else
		if (num > 0) // Se o numero for positivo, executa o bloco
		{
			printf("O numero %.2f e positivo.", num);  // Imprime na tela a mensagem, e o numero digitado
		}
		else // Se o numero nao era positivo nem negativo, ele e nulo. E o bloco abaixo e executado
		{
			printf("O numero %.2f e nulo.", num);  // Imprime na tela a mensagem, e o numero digitado
		}
			
	getch(); // Aguarda o usuario digitar uma tecla qualquer para encerrar a execucao do programa
}

