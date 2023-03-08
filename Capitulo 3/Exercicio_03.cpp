#include<stdio.h>
#include<conio.h>
#include<windows.h>

main() {
	/* Criar um programa (CALCULADORA ) em linguagem C que calcule as quatro opera��es b�sicas ( + ,- , / e * ). */
	int opcao, retornoMenu;
	float num1, num2, resultado;
	
	menu:
	system("cls");
	printf("CALCULADORA\n");
	printf("Operacoes:\n1- Adicao\n2- Subtracao\n3- Multiplicacao\n4- Divisao \n5 - Sair\nDigite a operacao desejada: \n");
	scanf("%i", &opcao);
	
	if (opcao == 5) {
		printf("\n\nEncerrando o programa...");
		return 0;
	}
	else
		if(opcao > 5 || opcao < 1) {
			printf("\nOpcao invalida! Retornando ao menu...");
			Sleep(2000);
			goto menu;
		}
		else 
			entradaValores:
			printf("\nDigite o primeiro numero: ");
			scanf("%f", &num1);
			printf("\nDigite o segundo numero: ");
			scanf("%f", &num2);	
			
			if(opcao == 1) {
				resultado = num1 + num2;
				printf("%.2f + %.2f = %.2f", num1, num2, resultado);
				
				printf("\nDeseja efetuar outra soma?(1- SIM / 2 - NAO)  ");
					scanf("%i", &retornoMenu);
					
					if(retornoMenu == 1) {
						goto entradaValores;
					}
			}
			else
				if(opcao == 2) {
					resultado = num1 - num2;
					printf("%.2f - %.2f = %.2f", num1, num2, resultado);
					
					printf("\nDeseja efetuar outra subtracao?(1- SIM / 2 - NAO)  ");
					scanf("%i", &retornoMenu);
					
					if(retornoMenu == 1) {
						goto entradaValores;
					}
				}
				else
					if(opcao == 3) {
						resultado = num1 * num2;
						printf("%.2f * %.2f = %.2f", num1, num2, resultado);
						
						printf("\nDeseja efetuar outra multiplicacao?(1- SIM / 2 - NAO) ");
						scanf("%i", &retornoMenu);
					
						if(retornoMenu == 1) {
							goto entradaValores;
						}
					}
					else
						if(opcao == 4) {
							resultado = num1 / num2;
							printf("%.2f / %.2f = %.2f", num1, num2, resultado);
						
						
							printf("\nDeseja efetuar outra divisao?(1- SIM / 2 - NAO) ");
							scanf("%i", &retornoMenu);
					
							if(retornoMenu == 1) {
								goto entradaValores;
							}
						}			
			goto menu;

	getch();
	end:;
}

