#include<stdio.h> // Responsavel pelos comandos printf e scanf
#include<conio.h> // Responsavel pelo comando getch
#include<windows.h> // Responsavel pelos comandos system e Sleep
#include<math.h>  // Responsavel pelo comando sqrt

main(){
	/* Criar um programa em linguagem C que resolva a fórmula de Bháskara e determine se é possível obter raiz de um número negativo. */
	
	float a, b, c, x1, x2, delta;  // Declarando as variaveis do tipo real(ponto flutuante)
	
	menu:  // ponto para onde o comando goto ira apontar se delta for negativo
	system("cls");  // Limpa a tela do prompt
	printf("Programa de Bhaskara\n");  // Imprime a mensagem na tela
	printf("Digite o valor de A: \n"); // Imprime a mensagem na tela
	scanf("%f", &a);  // Recebe o valor digitado pelo usuario
	printf("Digite o valor de B: \n"); // Imprime a mensagem na tela
	scanf("%f", &b);  // Recebe o valor digitado pelo usuario
	printf("Digite o valor de C: \n"); // Imprime a mensagem na tela
	scanf("%f", &c);  // Recebe o valor digitado pelo usuario

	delta = (b * b) - (4 * a* c);   // Calcula o valor de Delta
	
	if(delta < 0) {  // Se delta for negativo, executa o bloco abaixo
		printf("Delta invalido! Tente outros numeros.");  // Imprime a mensagem na tela
		Sleep(1500);  // Aguarda 1.5 segundos ate seguir para o proximo comando
		goto menu;  // Aponta para o menu:, na linha 12. A execucao volta para solicitar novamenta os valores de A, B e C
	}
	
	x1 = (-b +sqrt(delta))/(2 * a);  // Calcula a raiz x1
	x2 = (-b -sqrt(delta))/(2 * a); // Calcula a raiz x2
	
	printf("Delta = %.2f\n", delta);  // Imprime a mensagem na tela com o valor de delta
	printf("x1 = %.2f e x2 = %.2f\n\n", x1, x2);  // Imprime a mensagem na tela com o valor das raizes
	
	getch(); // Aguarda o usuario digitar uma tecla qualquer para encerrar a execucao do programa
}
