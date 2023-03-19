#include<stdio.h> // Responsavel pelos comandos printf e scanf
#include<conio.h> // Responsavel pelo comando getch
#include<windows.h> // Responsavel pelos comandos system e Sleep

main() {
	/* Criar um programa (CALCULADORA ) em linguagem C que calcule as quatro opera��es b�sicas ( + ,- , / e * ). */
	int opcao, retornoMenu;  // Declarando as variaveis do tipo inteiro
	float num1, num2, resultado;  // Declarando as variaveis do tipo real(ponto flutuante)
	
	menu:  // ponto para onde o comando goto ira apontar caso a opcao seja invalida, ou o usuario queira retornar ao menu
	system("cls");  // Limpa a tela do prompt
	printf("CALCULADORA\n");  // Imprime a mensagem na tela
	printf("Operacoes:\n1- Adicao\n2- Subtracao\n3- Multiplicacao\n4- Divisao \n5 - Sair\nDigite a operacao desejada: \n"); // Imprime a mensagem na tela
	scanf("%i", &opcao);  // Recebe a opcao do menu que o usuario deseja realizar
	
	if (opcao == 5) {  // Se o usuario selecionou a opcao 5, que e a saida do programa
		printf("\n\nEncerrando o programa...");  // Imprime a mensagem na tela
		Sleep(1000);  // Comando Sleep aguarda 1 segundo antes de encerrar a execucao do programa
		return 0;  // Encerra a execucao do programa todo, retornando 0 para a funcao main(linha 5)
	}
	else
		if(opcao > 5 || opcao < 1) {  // Se a opcao digitada for invalida(maior que 5, ou menor que 1), executa no bloco abaixo
			printf("\nOpcao invalida! Retornando ao menu...");  // Imprime a mensagem na tela
			Sleep(2000); // Comando Sleep aguarda 2 segundo antes de encerrar a execucao do programa
			goto menu;  // Aponta para alinha 10, e direciona a execucao do programa novamente para o menu
		}
		else 
			entradaValores:  // Ponto para onde o comando goto de todas as operacoes ira apontar caso o o usuario queira repetir a operacao
			printf("\nDigite o primeiro numero: ");  // Imprime a mensagem na tela
			scanf("%f", &num1);  // Recebe o numero digitado pelo usuario
			printf("\nDigite o segundo numero: "); // Imprime a mensagem na tela
			scanf("%f", &num2);	// Recebe o numero digitado pelo usuario
			
			if(opcao == 1) {   // Se o usuario selecionou a opcao de soma
				resultado = num1 + num2;  // Efetua a soma
				printf("%.2f + %.2f = %.2f", num1, num2, resultado);  // Exibe os numeros digitados e a soma
				
				printf("\nDeseja efetuar outra soma?(1- SIM / 2 - NAO)  ");  // Imprime a mensagem na tela
					scanf("%i", &retornoMenu);  // Recebe a opcao do usuario de retornar o nao ao menu
					
					if(retornoMenu == 1) { // Usuario deseja retornar ao menu
						goto entradaValores; // Aponta para a linha 28, direciona a execucao do programa a novamente pedir os valores. A opcao do usuario nesse ponto esta preservada
					}
			}
			else
				if(opcao == 2) { // Se o usuario selecionou a opcao de subtracao 
					resultado = num1 - num2;  // Efetua a subtracao 
					printf("%.2f - %.2f = %.2f", num1, num2, resultado);
					
					printf("\nDeseja efetuar outra subtracao?(1- SIM / 2 - NAO)  ");  // Imprime a mensagem na tela
					scanf("%i", &retornoMenu);  // Recebe a opcao do usuario de retornar o nao ao menu
					
					if(retornoMenu == 1) {
						goto entradaValores; // Aponta para a linha 28, direciona a execucao do programa a novamente pedir os valores. A opcao do usuario nesse ponto esta preservada
					}
				}
				else
					if(opcao == 3) {  // Se o usuario selecionou a opcao de multiplicacao
						resultado = num1 * num2;  // Efetua a multiplicacao
						printf("%.2f * %.2f = %.2f", num1, num2, resultado);
						
						printf("\nDeseja efetuar outra multiplicacao?(1- SIM / 2 - NAO) ");  // Imprime a mensagem na tela
						scanf("%i", &retornoMenu);  // Recebe a opcao do usuario de retornar o nao ao menu
					
						if(retornoMenu == 1) {
							goto entradaValores; // Aponta para a linha 28, direciona a execucao do programa a novamente pedir os valores. A opcao do usuario nesse ponto esta preservada
						}
					}
					else
						if(opcao == 4) {  // Se o usuario selecionou a opcao de divisao 
							resultado = num1 / num2;
							printf("%.2f / %.2f = %.2f", num1, num2, resultado);
						
						
							printf("\nDeseja efetuar outra divisao?(1- SIM / 2 - NAO) "); // Imprime a mensagem na tela
							scanf("%i", &retornoMenu);   // Recebe a opcao do usuario de retornar o nao ao menu
					
							if(retornoMenu == 1) {
								goto entradaValores; // Aponta para a linha 28, direciona a execucao do programa a novamente pedir os valores. A opcao do usuario nesse ponto esta preservada
							}
						}			
			goto menu;  // Toda vez que o usuario digitar qualquer opcao diferente de 1 na pergunta de retorno ao menu, ele sempre retornara ao menu

	getch(); // Aguarda o usuario digitar uma tecla qualquer para encerrar a execucao do programa
}

