#include<stdio.h> // Responsável pelos comandos printf e scanf
#include<conio.h> // Responsável pelo comando getch
#include<windows.h> // Responsável pelo comando system

main(){
	/* Criar um programa em linguagem C que converta um numero decimal de 0 a 15 em numero bin�rio.*/
	system("cls"); // Limpa a tela do prompt 
	
	int num, x1, x2, x3, x4; // Declaracao das variaveis do tipo inteiro
	
	printf("Conversor de decimal para binario\n"); // Imprime o texto para o usuario
	printf("Digite um numero decimal de 0 a 15: \n"); // Imprime o texto para o usuario
	scanf("%d", &num); // Recebe o numero decimal digitado pelo usuario
	
	x1 = num % 2; // Calcula o valor do primeiro bit
	x2 = (num/2) % 2; // Calcula o valor do segundoo bit
	x3 = (num/2/2) % 2; // Calcula o valor do terceiro bit
	x4 = (num/2/2/2) % 2; // Calcula o valor do quarto bit
	
	printf("\n%d%d%d%d", x4, x3, x2, x1); 
	// O comando acima mprime para o usuario o valor dos bits concatenados

	getch(); // Aguarda o usuario digitar uma tecla qualquer para encerrar a execucao do programa
}
