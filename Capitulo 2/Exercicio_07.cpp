#include<stdio.h> // Responsável pelos comandos printf e scanf
#include<conio.h> // Responsável pelo comando getch
#include<windows.h> // Responsável pelo comando system
#include<math.h> // Responsável pelo comando pow

main(){
	/* Criar um programa em linguagem C que calcule o perimetro e a area de uma circunferencia de raio R (fornecido pelo usuario).*/
	system("cls"); // Limpa a tela do prompt 
	
	float raio, perimetro, area; // Declaracao das variaveis do tipo real(ponto flutuante)
	
	printf("Calculadora de perimetro e area de circunferencia\n"); // Imprime o texto para o usuario
	printf("Digite o valor do raio: \n"); // Imprime o texto para o usuario
	scanf("%f", &raio);
	
	perimetro = 2 * 3.14 * raio;
	area = 3.14 * pow(raio, 2);
	
	printf("Raio: %.2f \nPerimetro: %.2f\nArea: %.2f", raio, perimetro, area);	
	getch();
}
