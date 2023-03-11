#include<stdio.h> // Responsavel pelos comandos printf e scanf
#include<conio.h> // Responsavel pelo comando getch
#include<windows.h> // Responsavel pelo comando system
#include<math.h> // Responsavel pelo comando pow

main(){
	/* Criar um programa em linguagem C que calcule o perimetro e a area de uma circunferencia de raio R (fornecido pelo usuario).*/
	system("cls"); // Limpa a tela do prompt 
	
	float raio, perimetro, area; // Declaracao das variaveis do tipo real(ponto flutuante)
	
	printf("Calculadora de perimetro e area de circunferencia\n"); // Imprime o texto para o usuario
	printf("Digite o valor do raio: \n"); // Imprime o texto para o usuario
	scanf("%f", &raio); 	// Recebe o valor do raio fornecido pelo usuario
	
	perimetro = 2 * 3.14 * raio; // Calcula o perimetro da circunferencia
	area = 3.14 * pow(raio, 2); // Calcula a area da circunferencia
	
	printf("Raio: %.2f \nPerimetro: %.2f\nArea: %.2f", raio, perimetro, area);	
	// Acima o comando exibe para o usuario a mensagem com as variaveis calculadas anteriormente

	getch(); // Aguarda o usuario digitar uma tecla qualquer para encerrar a execucao do programa
}
