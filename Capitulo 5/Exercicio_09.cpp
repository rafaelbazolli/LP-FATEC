#include<stdio.h> // Responsavel pelo comando printf e scanf
#include<windows.h> // Responsavel pelos comandos System e Sleep

main() {
	/* Criar em linguagem C e utilizando o comando SWITCH, um programa que identifique se um numero e PAR ou IMPAR e 0 para sair.*/
	
	int num, aux; // Declaracao da variavel do tipo inteiro
	
	while(true) {  // Laco infinito
		system("cls");  // Limpa a tela do prompt
		printf("Programa PAR ou IMPAR\n\n"); // Imprime o texto na tela
		printf("Digite um numero: "); // Imprime o texto na tela
		scanf("%d", &num);  // Recebe um valor do usuario
		
		if(num == 0) {  // Se a entrada do usuario for 0, sai do WHILE direto usando o break 
			break;
		}
		else {  // Se a entrada do usuario for qualquer numero diferente de 0
			aux = num % 2;  // Variavel auxiliar, armazena o resto da divisao por 2, ou seja, aux sempre sera 0 ou 1
		
			switch(aux) {  // Como o SWITCH so opera sobre numeros inteiros, e por isso que ele ira manipular 'aux', ja que ela e 0 ou 1
				case 0:  // Caso 'aux' seja 0, e porque o numero e PAR
				{
					printf("\n\n%d e PAR!", num);  // Imprime o texto para o usuario
					Sleep(2000);  // Pausa a execucao por 2 segundos, antes de executar o proximo comando
					break;  // Comando break para encerrar a execucao do SWITCH
				}
				case 1:  // Caso 'aux' seja 1, e porque o numero e IMPAR
				{
					printf("\n\n%d e IMPAR!", num);  // Imprime o texto para o usuario
					Sleep(2000);  // Pausa a execucao por 2 segundos, antes de executar o proximo comando
					break; // Comando break para encerrar a execucao do SWITCH
				}
			}
			// Ao usar o comando break, a o SWITCH e encerrada, e a execucao do programa chega direto nesse ponto
		}
		// Como o laco WHILE e infinito, vai retornar agora para a linha 10, e repetir todo o trecho de codigo
	}
}
