#include<stdio.h> // Responsavel pelos comandos printf e scanf
#include<conio.h> // Responsavel pelo comando getch
#include<windows.h> // Responsavel pelo comando system

main(){
	/* Crie um programa que leia a base e a altura de um triangulo, calcule sua area, e imprima o resultado para o usuario. */

	system("cls"); // Limpa a tela do prompt 
	
	float base, altura, area; // Declaracao das variaveis do tipo real(ponto flutuante)
	
	printf("Calculadora de area e perimetro de Triangulos! \n"); // Imprime o texto para o usuario
	printf("Digite o tamanho da base do triangulo: \n"); // Imprime o texto para o usuario
	scanf("%f", &base);   // Recebe o valor da base fornecido pelo usuario
	printf("Digite a altura do triangulo: \n"); // Imprime o texto para o usuario
	scanf("%f", &altura);  // Recebe o valor da altura fornecida pelo usuario
		
	area = (base * altura) / 2;  // Calcula a area do triangulo
	
	printf("A area do triangulo e: %.2f.",area); // Exibe a mensagem com a area do triangulo calculada
	
	getch(); // Aguarda o usuario digitar uma tecla qualquer para encerrar a execucao do programa
}

