#include<stdio.h> // Responsavel pelos comandos printf e scanf
#include<windows.h> // Responsavel pelo comando system
#include<math.h> // Responsavel pelo comando pow

main(){
	
	system("cls"); // Limpa a tela do prompt 
	
	float a, b, c, x1, x2, d; // Declaracao das variaveis do tipo real(ponto flutuante)
	
	printf("Programa de Bhaskara\n");  // Imprime o texto para o usuario
	printf("Digite o valor de A: \n"); // Imprime o texto para o usuario
	scanf("%f", &a);  // Recebe o valor de A fornecido pelo usuario
	printf("Digite o valor de B: \n"); // Imprime o texto para o usuario
	scanf("%f", &b);  // Recebe o valor de B fornecido pelo usuario
	printf("Digite o valor de C: \n"); // Imprime o texto para o usuario
	scanf("%f", &c);  // Recebe o valor de C fornecido pelo usuario

	d = (b * b) - (4 * a* c);	// Calcula o valor de Delta 
	x1 = (-b +sqrt(d))/(2 * a);  // Calcula uma das raizes(x1)
	x2 = (-b -sqrt(d))/(2 * a);	 // Calcula outra das raizes(x2)
	
	printf("Delta = %.2f\n", d);  // Imprime para o usuario o valor de Delta
	printf("x1 = %.2f e x2 = %.2f\n\n", x1, x2); // Imprime para o usuario as raizes calculadas
	
	system("pause"); // Exibe uma mensagem ao final do programa, aguardando o usuario digitar enter para encerrar a execução
}
