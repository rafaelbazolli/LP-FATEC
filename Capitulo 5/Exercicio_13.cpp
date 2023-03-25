#include<stdio.h> // Responsavel pelos comandos printf e scanf
#include<conio.h> // Responsavel pelo comando getch
#include<windows.h> // Responsavel pelo comando Sleep

main() {
	int idade;  // Declarando as variaveis tipo inteiro
	
	menu:    // Local para onde o goto aponta, caso o valor da idade esteja fora do range considerado valido
	system("cls");  // Limpa a tela do prompt
	printf("Programa que classifica competidores por categoria!\n\n"); // Imprime o texto na tela
	printf("Digite a idade do competidor: ");   // Imprime o texto na tela
	scanf("%i", &idade);  // Recebe a idade do competidor
	
	switch(idade) {
		case 5: case 6: case 7: {  // Se a idade for 5, 6 ou 7, executa o bloco
			printf("\nIdade: %d anos.\nCategoria Infantil A.", idade);
			break;  // Interrompe a execucao do switch 
		}
		case 8: case 9: case 10: {  // Se a idade for 8, 9 ou 10, executa o bloco
			printf("\nIdade: %d anos.\nCategoria Infantil B.", idade);
			break;  // Interrompe a execucao do switch 
		}
		case 11: case 12: case 13: {  // Se a idade for 11, 12 ou 13, executa o bloco
			printf("\nIdade: %d anos.\nCategoria Juvenil A.", idade);
			break;  // Interrompe a execucao do switch 
		} 
		case 14: case 15: case 16: case 17: {  // Se a idade for 14, 15, 16 ou 17, executa o bloco
			printf("\nIdade: %d anos.\nCategoria Juvenil A.", idade);
			break;  // Interrompe a execucao do switch 
		}
		default: {  // Para qualquer outro valor que nao se encaixou nos cases acima, executa o bloco abaixo
			if(idade >= 18) {   // Se a idade for igual ou superior a 18, executa o bloco abaixo
				printf("\nIdade: %d anos.\nCategoria Adulto.", idade);  // Imprime a mensagem na tela
			} else {  // Se a idade for  menor que 5, ou negativa, executa o bloco abaixo  
				printf("Desculpe! A idade digitada esta incorreta ou a idade e insuficiente para que ele possa competir. Tente novamente.");
				Sleep(5000);  // Aguarda 5 segundos antes de seguir para a proxima instrucao
				goto menu;  // Retorna para o menu(linha 9), e solicita novamente as notas para o usuario
			}	
		}
	}
	getch();  // Aguarda o usuario digitar uma tecla qualquer para encerrar a execucao do programa
}

