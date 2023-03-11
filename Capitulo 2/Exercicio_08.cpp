#include<stdio.h> // Responsavel pelos comandos printf e scanf
#include<conio.h> // Responsavel pelo comando getch
#include<windows.h> // Responsavel pelo comando system

main(){
	/* Criar um programa em linguagem C que receba uma medida em pes, faca as conversoes e a seguir mostre os resultados.
	a) Polegadas; b) Jardas; c) Milhas.*/
	
	system("cls"); // Limpa a tela do prompt 
	
	float pes, pol, jar, mil; // Declaracao das variaveis do tipo real(ponto flutuante)
	
	printf("Conversor de medidas em pes\n"); // Imprime o texto para o usuario
	printf("Digite o valor em pes: \n"); // Imprime o texto para o usuario
	scanf("%f", &pes);  // Recebe o valor da medida em pes, fornecida pelo usuario
	
	pol = pes * 12; // Conversao da medida em pes para polegadas
	jar = pes / 3; // Conversao da medida em pes para jardas
	mil = pes / 5280; // Conversao da medida em pes para milhas
	
	printf("Pes: %.2f\nPolegadas: %.2f\nJardas: %.2f\nMilhas: %.2f", pes, pol, jar, mil);	
	// Acima, e exibido para o usuario a mensagem contendo as variaveis calculadas anteriormente, medida em polegadas, jardas e milhas
	
	getch(); // Aguarda o usuario digitar uma tecla qualquer para encerrar a execucao do programa
}
