#include<stdio.h> // Responsavel pelos comandos printf e scanf
#include<windows.h> // Responsavel pelo comando system

decimalBinario() {  // Declarando a funcao que ira converter o numero decimal em binario
	int num, x1, x2, x3, x4, x5, x6, x7, x8;  // Declarando as variaveis do tipo inteiro
	
// Note que o comando goto possui escopo de funcao, ou seja, o goto da linha 15 aponta para menu, mas ele apontara para o 
// menu da linha 9, e nao para o menu da linha 35 ou 56, pois o goto so consegue saltar para um local para dentro da propria funcao
	menu:  // Local para onde o comando goto da linha 16 ira apontar, caso o numero digitado seja invalido
	printf("\nDigite o numero(decimal ate 255): ");  // Imprime a mensagem na tela
	scanf("%d", &num);  // Recebe o valor do decimal informado pelo usuario
	
	if((num > 255) || (num < 0)) {  // Se o numero digitado pelo usuario estiver fora do range permitido, executa o bloco abaixo
		printf("\nPor favor, digite um numero valido!\nO numero digitado esta fora dos parametros permitidos.\n");   // Imprime a mensagem na tela
		Sleep(2000);  // Aguarda 2 segundos ate seguir para a execucao do proximo comando
		goto menu;  // Aponta para a linha 
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

binarioDecimal() {  // Declarando a funcao que ira converter o numero binario em decimal
	int num, dec, x1, x2, x3, x4, x5, x6, x7, x8;  // Declarando  as variaveis do tipo inteiro
	
	menu:
	printf("\nDigite o numero(binario de ate 4 bits): ");   // Imprime a mensagem na tela
	scanf("%d", &num);
	
	if(sizeof(num) >= 4) {
		printf("\nPor favor, digite um numero valido!\nO numero digitado esta fora dos parametros permitidos.\n");   // Imprime a mensagem na tela
		Sleep(2000);
		goto menu;
	}
	else {
		dec = ((x1 * 8) + (x2 * 4) + (x3 * 2) + (x4 * 1));
		
		printf("%d = %d", num, dec);
	}
}

main() {
	/* Criar em programa em linguagem C, utilizando FUNCAO, que converta de BIN/DEC e DEC/BIN */
	
	int opcao, opcaoRetornoMenu;
	
	menu:  // Local para onde o goto das linhas 68 e 83 irao apontar, caso o usuario digite um numero invalido, ou queira voltar ao menu
	system("cls");  // Limpa a tela do prompt
	printf("Programa para conversao de BIN/DEC || DEC/BIN \n\n");   // Imprime a mensagem na tela
	printf("1 - DECIMAL para BINARIO\n2 - BINARIO para DECIMAL\n3 - Sair\n");   // Imprime a mensagem na tela
	printf("\nDigite a opcao desejada: ");   // Imprime a mensagem na tela
	scanf("%i", &opcao);  // Recebe a opcao do usuario 
	
	if(opcao == 3) { // Se o usuario optar por sair do programa, executa o bloco
		sair:  // Local para onde o comando goto da linha 86 ira apontar, caso o usuario nao queira retornar ao menu
		printf("Encerrando o programa...");  // Imprime a mensagem na tela
		Sleep(500);  // Aguarda 0.5 segundos ate executar o proximo comando
		return 0;  // Retorna 0 para a funcao main, encerrando assim a execucao atual do programa
	}
	else if((opcao > 3) || (opcao < 1)) {  // Se a opcao digitada for incorreta(acima de 3 ou abaixo de 1)
		goto menu;  // Direciona a execucao do codigo para a linha 54, onde o usuario vai digitar novamente uma opcao
	}
	else { // Caso a opcao digitada seja uma das duas operacoes principais
		if(opcao == 1) {
			decimalBinario();
		}
		else {
			binarioDecimal();
		}
		
		menuRetorno:
		printf("\n\nDeseja retornar ao menu? (1 - SIM || 2 - NAO)");   // Imprime a mensagem na tela
		scanf("%d", &opcaoRetornoMenu);  // Recebe a opcao do usuario de retornar ou nao para o menu
		
		if(opcaoRetornoMenu == 1) {  // Se o usuario optou por retornar ao menu, executa o bloco
			goto menu;  // Direciona a execucao do codigo para a linha 56
		}
		else if(opcaoRetornoMenu == 2) {
			goto sair;  // Direciona a execucao do codigo para a linha 64, onde encerrara a execucao do programa
		}
		else {  // Se o usuario digitou uma opcao invalida na linha 82, executa o bloco abaixo
			goto menuRetorno;  // Direciona a execucao do codigo para a linha 80, e solicita novamente a opcao do usuario
		}
	}
}
