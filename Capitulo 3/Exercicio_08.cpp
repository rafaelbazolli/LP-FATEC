#include<stdio.h> // Responsavel pelos comandos printf e scanf
#include<conio.h> // Responsavel pelo comando getch
#include<windows.h> // Responsavel pelo comando system

main(){
	/* Criar um programa em linguagem C que leia um numero positivo do teclado e informar se ele e divisivel 
	por 10, por 5, por 2 ou se nao e divisivel por nenhum deles. */
	
	bool por2, por5, por10;  // Declarando as variaveis do tipo booleano
	int num;  // Decalarando a variavel do tipo inteiro
	
	printf("Programa para verificar se o numero e divisivel por 2, 5 ou 10"); // Imprime a mensagem na tela
	printf("\nDigite um numero: ");  // Imprime a mensagem na tela
	scanf("%d", &num);  // Recebe o numero digitado pelo usuario
	
	// Os comandos abaixo retornam o resto 0 caso a divisao seja bem sucedida, e armazenam na variavel correspondente
	por2 = num % 2; 
	por5 = num % 5;
	por10 = num % 10;
	
	if((por2 == 0) && (por5 == 0) && (por10 == 0)) { // Se for divisivel por todos
		printf("\n\nO numero e divisivel por 2, 5 e 10.");
	}
	else
		if((por2 == 0) && (por5 == 0) && (por10 == 1)) { // Se nao for divisivel apenas pelo 10
			printf("\n\nO numero e divisivel por 2 e 5.");
		}
		else 
			/* Somente divisivel por 2 e 10, ou por 5 e 10 sao desnecessarios, pois se for divisivel por 10
			   obrigatoriamente ele sera por 2 tambem. Da mesma forma, se for divisivel por 10, por 2 ele tambem sera */
			if((por2 == 1) && (por5 == 1) && (por10 == 1)) {
				printf("\n\nO numero nao e divisivel por 2, por 5 nem por 10."); // Imprime a mensagem na tela
			}
			else // Aqui serao tratados os que somente sao divisiveis por um unico numero
				if(por2 == 0) {  //Se for divisivel somente por 2
					printf("\n\nO numero e divisivel somente por 2.");  // Imprime a mensagem na tela
				}
				else
					if(por5 == 0) {  // Se for divisivel somente por 5
						printf("\n\nO numero e divisivel somente por 5."); // Imprime a mensagem na tela
					} 
					// Somente divisivel por 10 nao pode ser colocado, pois ele obrigatoriamente seria divisivel por 2 e por 5
	getch(); // Aguarda o usuario digitar uma tecla qualquer para encerrar a execucao do programa
}
