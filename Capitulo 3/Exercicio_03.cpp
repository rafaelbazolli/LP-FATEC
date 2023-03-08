#include<stdio.h>
#include<conio.h>
#include<windows.h>

main() {
	/* Criar um programa (CALCULADORA ) em linguagem C que calcule as quatro operações básicas ( + ,- , / e * ). */
	system("cls");
	
	int opcao, retornoMenu;
	float num1, num2, resultado;
	
	menu:
	printf("CALCULADORA\n");
	printf("Operacoes:\n1- Adicao\n2- Subtracao\n3- Multiplicacao\n4- Divisao \n5 - SairDigite a operacao desejada: \n");
	scanf("%i", &opcao);
	
	if(opcao > 4 || opcao < 1) {
		printf("Opcao invalida!");
	}
	else 
	{
		entradaValores:
		printf("\nDigite o primeiro numero: ");
		scanf("%f", &num1);
		printf("\nDigite o segundo numero: ");
		scanf("%f", &num2);	
	}
	
	
	if(opcao == 1) {
		soma:
		resultado = num1 + num2;
		printf("%.2f + %.2f = %.2f", num1, num2, resultado);
		
		printf("Deseja efetuar outra soma?(1- SIM / 2 - NAO)");
			scanf("%i", &retornoMenu);
			
			if(retornoMenu == 1) {
				goto soma;
			}
	}
	else
		if(opcao == 2) {
			subtracao:
			resultado = num1 - num2;
			printf("%.2f - %.2f = %.2f", num1, num2, resultado);
			
			printf("Deseja efetuar outra subtracao?(1- SIM / 2 - NAO)");
			scanf("%i", &retornoMenu);
			
			if(retornoMenu == 1) {
				goto subtracao;
			}
		}
		else
			if(opcao == 3) {
				multiplicacao:
				resultado = num1 * num2;
				printf("%.2f * %.2f = %.2f", num1, num2, resultado);
				
				printf("Deseja efetuar outra multiplicacao?(1- SIM / 2 - NAO)");
				scanf("%i", &retornoMenu);
			
				if(retornoMenu == 1) {
					goto multiplicacao;
				}
			}
			else
				if(opcao == 4) {
					divisao:
					resultado = num1 / num2;
					printf("%.2f / %.2f = %.2f", num1, num2, resultado);
				}
				
				printf("Deseja efetuar outra divisao?(1- SIM / 2 - NAO)");
				scanf("%i", &retornoMenu);
			
				if(retornoMenu == 1) {
					goto divisao;
				}
	
	getch();
	end:;
}

