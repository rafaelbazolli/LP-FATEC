#include<stdio.h> // Responsavel pelos comandos printf e scanf
#include<conio.h> // Responsavel pelo comando getch
#include<windows.h> // Responsavel pelo comando system
#include<math.h> // Responsavel pelo comando pow

main(){
	/* Uma pizzaria de Sao Paulo inventou uma nova modalidade de pizza, chamada de Meia Pizza da Casa.
	 O cliente escolhe o raio da pizza e o pizzaiolo faz uma meia pizza de calabresa com essa medida de
	  raio. Crie um programa para ajudar o pizzaiolo a calcular a area da Meia Pizza da Casa baseada 
	  na medida do raio escolhida pelo cliente. */

	system("cls"); // Limpa a tela do prompt 
	
	float raio, meiaArea, area; // Declaracao das variaveis do tipo real(ponto flutuante)
	
	printf("Calculadora de area da pizza\n"); // Imprime o texto para o usuario
	printf("Digite o valor do raio da pizza: \n"); // Imprime o texto para o usuario
	scanf("%f", &raio);  // Recebe o valor do raio fornecido pelo usuario
	
	area = 3.14 * pow(raio, 2); // Calcula a area da pizza
	meiaArea = area / 2; // Calcula a area de meia pizza
	
	printf("Raio da pizza: %.2f \nArea total da pizza: %.2f\nArea da Meia Pizza da Casa: %.2f", raio, area, meiaArea);	
	// Acima, exibe a mensagem para o usuario contendo o raio da pizza, a area dela, e a area da Meia Pizza da Casa
	
	getch(); // Aguarda o usuario digitar uma tecla qualquer para encerrar a execucao do programa
}
