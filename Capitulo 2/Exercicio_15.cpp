#include<stdio.h> // Responsavel pelos comandos printf e scanf
#include<conio.h> // Responsavel pelo comando getch
#include<windows.h> // Responsavel pelo comando system

main(){
	/* Crie um programa em C que receba do usuário dois números, calcule e mostre o dobro e o triplo do primeiro numero, 
	e o produto do primeiro pelo segundo numero. */

	system("cls"); // Limpa a tela do prompt 
	
	float num1, num2, dobro, triplo, produto; // Declaracao das variaveis do tipo real(ponto flutuante)
	
	printf("Programa que calcula dobro, triplo e protudo entre numeros!\n"); // Imprime o texto para o usuario
	printf("Digite o primeiro numero: \n"); // Imprime o texto para o usuario
	scanf("%f", &num1);   // Recebe o primeiro numero digitado pelo usuario
		printf("Digite o segundo numero: \n"); // Imprime o texto para o usuario
	scanf("%f", &num2);   // Recebe o segundo numero digitado pelo usuario
		
	dobro = num1 * 2; // Calcula o dobro de num1
	triplo = num1 * 3; // Calcula o triplo de num1
	produto = num1 * num2; // Calcula o produto entre num1 e num2
	
	printf("\nDobro = %.2f\nTriplo = %.2f\nProduto de %.2f x %.2f = %.2f", dobro, triplo, num1, num2, produto); 
	// O comando acima exibe a mensagem com os valores ja calculados
	
	getch(); // Aguarda o usuario digitar uma tecla qualquer para encerrar a execucao do programa
}

