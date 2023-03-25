#include<stdio.h> // Responsavel pelo comando printf e scanf
#include<conio.h> // Responsavel pelo comando getch
#include<windows.h> // Responsavel pelo comando system

main() {
	/* Crie um programa em C que receba n�meros inteiros fornecidos pelo usu�rio usando WHILE. Se o n�mero digitado for divis�vel por 2 e por 5, 
	o programa deve fazer uma contagem regressiva, do numero digitado at� 0, e em seguida sair do la�o. */
	
	int num;  // Declarando a variavel do tipo inteiro
		
	while(true) {  // Cria um laco infinito
		system("cls");  // Limpa a tela do prompt
		printf("\n\nDigite um numero: ");  // Imprime a mensagem na tela
		scanf("%d", &num);  // Recebe o numero digitado pelo usuario
		
		if((num % 2 == 0) && (num % 5 == 0)) {  // Se for divisivel por 2 e por 5, executa o bloco

			for(int i = num; i >= 0; i--) {  // Enquanto o i for maior ou igual a 0, ele mantem o laco FOR 
				printf("\n%d", i);  // Exibe o contador na tela, que vai decaindo ate ser igual a 0 ao longo das iteracoes
			}
			break;  // Interrompe a execucao do WHILE
		}
	}
	getch(); // Aguarda o usuario digitar uma tecla qualquer para encerrar a execucao do programa
}

