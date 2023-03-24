#include<stdio.h> // Responsavel pelos comandos printf e scanf
#include<conio.h> // Responsavel pelo comando getch
#include<windows.h> // Responsavel pelo comando system

main() {
	/* Crie um programa em C, usando laco FOR, para gerenciar o quadro de medalhas de uma equipe de 10 atletas apos o termino de uma competicao. 
	O programa deve receber, de cada atleta, quantas medalhas de Ouro, Prata e Bronze eles conseguiram, 
	e ao final exibir o total de cada medalha(Ouro, prata, bronze) da equipe.*/	
	
	int ouro, prata, bronze, totalOuro = 0, totalPrata = 0, totalBronze = 0;  // Declarando as variaveis do tipo inteiro
	
	for (int i = 1; i <= 10; i++) {  // Enquanto o contador for menor ou igual a 10, mantem o laco FOR
		system("cls");  // Limpa a tela do prompt
		printf("Programa para gerenciar o quadro de medalhas da Equipe!\n\n");  // Imprime a mensagem na tela
		printf("\nAtleta %d\nMedalha(s) de Ouro: ", i); // Imprime a mensagem na tela
		scanf("%d", &ouro);  // Recebe do usuario quantas medalhas de ouro esse atleta conseguiu
		printf("\nMedalha(s) de Prata: ");  // Imprime a mensagem na tela
		scanf("%d", &prata);  // Recebe do usuario quantas medalhas de prata esse atleta conseguiu
		printf("\nMedalha(s) de Bronze: ");  // Imprime a mensagem na tela
		scanf("%d", &bronze);  // Recebe do usuario quantas medalhas de bronze esse atleta conseguiu
		
		// A cada iteracao do laco FOR, esses acumuladores somam o valor atual recebido nas linhas 16, 18 e 20, ao valor ja existente em totalOuro, totalPrata, totalBronze
		totalOuro += ouro;  // Acumulador de medalhas de ouro. Seria o mesmo que escrever o comando totalOuro = totalOuro + ouro
		totalPrata += prata;  // Acumulador de medalhas de prata. Seria o mesmo que escrever o comando totalOuro = totalPrata + prata
		totalBronze += bronze;		// Acumulador de medalhas de bronze. Seria o mesmo que escrever o comando totalOuro = totalBronze + bronze
	}
	
	printf("\n\nQUADRO DE MEDALHAS DA EQUIPE\nTotal Medalhas de Ouro: %d\nTotal Medalhas de Prata: %d\nTotal Medalhas de Bronze: %d", totalOuro, totalPrata, totalBronze);
	// O comando acima exibe a mensagem contendo o total de cada um dos tipos de medalha que a equipe conseguiu na competicao
	
	getch();  // Aguarda o usuario digitar uma tecla qualquer para encerrar a execucao do programa
}

