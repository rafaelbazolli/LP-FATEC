#include<stdio.h> // Responsável pelos comandos printf e scanf
#include<conio.h>  // Responsável pelo comando getch

main(){
	/*Criar um programa em linguagem C que efetue a soma de dois numeros dos tipo real*/
	
	float num1, num2, soma; // Variáveis do tipo real(ponto flutuante)

	printf("Programa de soma de dois numeros!!\n\n"); // Imprime texto para o usuário 
	printf("Digite o primeiro numero: \n"); // Imprime texto para o usuário 
	scanf("%f", &num1); // Obtem o valor do primeiro número
	printf("Digite o segundo numero: \n"); // Imprime texto para o usuário 
	scanf("%f", &num2); // Obtem o valor do segundo número
	
	soma = num1 + num2; // Realiza a operação de soma
	
	printf("%.2f + %.2f = %.2f", num1, num2, soma); // Imprime os valores digitados, e a soma dos números para o usuário
	
	getch(); // Aguarda o usuário digitar uma tecla qualquer para encerrar a execução do programa
	
}
