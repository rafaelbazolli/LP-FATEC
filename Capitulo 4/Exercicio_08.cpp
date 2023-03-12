#include<stdio.h>
#include<windows.h>

/* Criar em programa (CALCULADORA) em linguagem C, utilizando FUNCAO, em que calcule 
	as quatro operações basicas. ( + , - , / e * ).*/

// Declaracao de todas as funcoes usadas
void soma() {
	float num1, num2, resultado;
	
	printf("\nDigite um numero: ");
	scanf("%f", &num1);
	printf("\nDigite outro numero: ");
	scanf("%f", &num2);
	
	resultado = num1 + num2;
	
	printf("\n%.2f + %.2f = %.2f", num1, num2, resultado);
}

void subtracao() {
	float num1, num2, resultado;
	
	printf("\nDigite um numero: ");
	scanf("%f", &num1);
	printf("\nDigite outro numero: ");
	scanf("%f", &num2);
	
	resultado = num1 - num2;
	
	printf("\n%.2f - %.2f = %.2f", num1, num2, resultado);
}

void multiplicacao() {
	float num1, num2, resultado;
	
	printf("\nDigite um numero: ");
	scanf("%f", &num1);
	printf("\nDigite outro numero: ");
	scanf("%f", &num2);
	
	resultado = num1 * num2;
	
	printf("\n%.2f * %.2f = %.2f", num1, num2, resultado);
}

void divisao() {
	float num1, num2, resultado;
	
	printf("\nDigite um numero: ");
	scanf("%f", &num1);
	printf("\nDigite outro numero: ");
	scanf("%f", &num2);
	
	resultado = num1 / num2;
	
	printf("\n%.2f / %.2f = %.2f", num1, num2, resultado);
}

int encerrarPrograma() {
	printf("Encerrando o programa...");
		Sleep(500);
		return 0;
}

main() {
	
	int opcao, opcaoDeRetorno;
	
	menu:
	system("cls");
	printf("Programa CALCULADORA\n\n");
	printf("1 - Adicao\n2 - Subtracao\n3 - Multiplicacao\n4 - Divisao\n\n5 - Sair do programa\n\n");
	printf("Digite a opcao desejada: ");
	scanf("%i", &opcao);
	
	if(opcao == 5) {
		encerrarPrograma();		
	}
	else if((opcao < 0) || (opcao > 5)) {
		printf("\nPor favor, selecione uma opcao valida!!!");
		Sleep(1000);
		goto menu;
	}
	else {
		if(opcao == 1) {
			soma();
		}
		else if(opcao == 2) {
			subtracao();
		}	
		else if(opcao == 3) {
			multiplicacao();
		}
		else if(opcao == 4) {
			divisao();
		}
		
		menuOpcaoDeRetorno:
		printf("\nDeseja retornar para o menu? (1 - SIM || 2 - NAO)\n ");
		scanf("%i", &opcaoDeRetorno);
	
		if(opcaoDeRetorno == 1) {
			goto menu;
		}
		else if(opcaoDeRetorno == 2) {
			encerrarPrograma();
		}
		else {
			goto menuOpcaoDeRetorno;
		}
	}
}

