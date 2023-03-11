#include<stdio.h> // Responsavel pelos comandos printf e scanf
#include<conio.h> // Responsavel pelo comando getch
#include<windows.h> // Responsavel pelo comando system

main(){
	/* Uma fabrica de brinquedos no Japao inventou uma nova forma de produzir bamboles. O cliente escolhe o raio do
bambole e a fabrica produz o bambole sob medida para o cliente. Crie um programa para ajudar o fabricante a calcular o perimetro do bambol� baseado
na medida do raio escolhida pelo cliente. */

	system("cls"); // Limpa a tela do prompt 
	
	float raio, perimetro, area; // Declaracao das variaveis do tipo real(ponto flutuante)
	
	printf("Calculadora de perimetro do bambole\n"); // Imprime o texto para o usuario
	printf("Digite o valor do raio do bambole: \n"); // Imprime o texto para o usuario
	scanf("%f", &raio);  // Recebe o valor do raio fornecido pelo usuario
	
	perimetro = 2 * 3.14 * raio; // Calcula o perimetro do bambole
	
	printf("Raio do bambole: %.2f \nPerimetro necessario: %.2f", raio, perimetro);
	//  Acima, e exibida a mensagem para o usuario contendo o raio digitado, e o perimetro do bambole ja calculado
		
	getch(); // Aguarda o usuario digitar uma tecla qualquer para encerrar a execucao do programa
}
