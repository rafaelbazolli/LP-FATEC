#include<stdio.h>
#include<conio.h>
#include<windows.h>

main() {
	/* Criar um programa (CALCULADORA ) em linguagem C que calcule as quatro operações básicas ( + ,- , / e * ). */
	system("cls");
	
	int opcao;
	float num1, num2, resultado;
	
	printf("CALCULADORA\n");
	printf("Operacoes:\n1- Adicao\n2- Subtracao\n3- Multiplicacao\n4- Divisao \nDigite a operacao desejada: \n");
	scanf("%i", &opcao);
	
	if(opcao > 4 || opcao < 1) {
		printf("Opcao invalida!");
	}
	else 
	{
		printf("\nDigite o primeiro numero: ");
		scanf("%f", &num1);
		printf("\nDigite o segundo numero: ");
		scanf("%f", &num2);	
	}
	
	
	if(opcao == 1) {
		resultado = num1 + num2;
		printf("%.2f + %.2f = %.2f", num1, num2, resultado);
	}
	else
		if(opcao == 2) {
			resultado = num1 - num2;
			printf("%.2f - %.2f = %.2f", num1, num2, resultado);
		}
		else
			if(opcao == 3) {
				resultado = num1 * num2;
				printf("%.2f * %.2f = %.2f", num1, num2, resultado);
			}
			else
				if(opcao == 4) {
					resultado = num1 / num2;
					printf("%.2f / %.2f = %.2f", num1, num2, resultado);
				}
			
	getch();
}

