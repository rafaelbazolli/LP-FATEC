#include<stdio.h>
#include<windows.h>

decimalBinario() {
	int num, x1, x2, x3, x4, x5, x6, x7, x8;
	
	menu:
	printf("\nDigite o numero(decimal ate 255): ");
	scanf("%d", &num);
	
	if((num > 255) || (num < 0)) {
		printf("\nPor favor, digite um numero valido!\nO numero digitado esta fora dos parametros permitidos.\n");
		Sleep(2000);
		goto menu;
	}
	else {
		x1 = num % 2;
	x2 = (num/2) % 2;
	x3 = (num/2/2) % 2;
	x4 = (num/2/2/2) % 2;
	x5 = (num/2/2/2/2) % 2;
	x6 = (num/2/2/2/2/2) % 2;
	x7 = (num/2/2/2/2/2/2) % 2;
	x8 = (num/2/2/2/2/2/2/2) % 2;
	
	printf("%d = %d%d%d%d%d%d%d%d", num, x8, x7, x6, x5, x4, x3, x2, x1);
	}	
}

binarioDecimal() {
	int num, dec, x1, x2, x3, x4, x5, x6, x7, x8;
	
	menu:
	printf("\nDigite o numero(binario de ate 4 bits): ");
	scanf("%d", &num);
	
	if(sizeof(num) >= 4) {
		printf("\nPor favor, digite um numero valido!\nO numero digitado esta fora dos parametros permitidos.\n");
		Sleep(2000);
		goto menu;
	}
	else {
		dec = ((x1 * 8) + (x2 * 4) + (x3 * 2) + (x4 * 1));
		
		printf("%d = %d", num, dec);
	}
}

main() {
	/* Criar em programa em linguagem C, utilizando FUNÇÃO, que converta de BIN/DEC e DEC/BIN */
	
	int opcao, opcaoRetornoMenu;
	
	menu:
	system("cls");
	printf("Programa para conversao de BIN/DEC || DEC/BIN \n\n");
	printf("1 - DECIMAL para BINARIO\n2 - BINARIO para DECIMAL\n3 - Sair\n");
	printf("\nDigite a opcao desejada: ");
	scanf("%i", &opcao);
	
	if(opcao == 3) { // Se o usuario optar por sair do programa
		sair:
		printf("Encerrando o programa...");
		Sleep(500);
		return 0;
	}
	else if((opcao > 3) || (opcao < 1)) {  // Se a opcao digitada for incorreta(acima de 3 ou abaixo de 1)
		goto menu;
	}
	else { // Caso a opcao digitada seja uma das duas operacoes principais
		if(opcao == 1) {
			decimalBinario();
		}
		else {
			binarioDecimal();
		}
		
		menuRetorno:
		printf("\n\nDeseja retornar ao menu? (1 - SIM || 2 - NAO)");
		scanf("%d", &opcaoRetornoMenu);
		
		if(opcaoRetornoMenu == 1) {
			goto menu;
		}
		else if(opcaoRetornoMenu == 2) {
			goto sair;
		}
		else {
			goto menuRetorno;
		}
	}
}
