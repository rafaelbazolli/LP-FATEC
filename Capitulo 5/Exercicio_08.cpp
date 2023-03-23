#include<stdio.h> // Responsavel pelo comando printf e scanf
#include<conio.h> // Responsavel pelo comando getch
#include<windows.h> // Responsavel pelos comandos System e Sleep

main() {
	/* Criar em linguagem C e utilizando o comando DO WHILE, um programa que identifique se um numero e PAR, IMPAR e 0 para sair.*/
	int num; // Declaracao da variavel do tipo inteiro

	do { 
		system("cls");  // Limpa a tela do prompt
		printf("Programa PAR ou IMPAR\n\n"); // Imprime o texto na tela
		printf("Digite um numero: "); // Imprime o texto na tela
		scanf("%d", &num);  // Recebe um valor do usuario
		
		if(num == 0) {  // Condicao de saida do programa, caso o usuario digite 0
			continue; // O continue vai seguir com a execucao do codigo apenas, nesse caso saindo do if, saltando pra linha 28
		}
		else {  // Caso o usuario digite algo diferente de zero, ele valida se o numero e par ou impar
			if(num % 2 == 0) {  // Se o resto da divisao do num por 2 for zero, executa o bloco abaixo
				printf("\n\n%d e PAR!", num);  // Imprime a mensagem na tela, e o numero digitado pelo usuario
				Sleep(1500);  // Aguarda 1.5 segundos ate executar a proxima instrucao
			} 
			else {  // Se o resto da divisao nao foi zero, o resto entao so pode ser 1, e o numero e impar..
				printf("\n\n%d e IMPAR!", num);  // Imprime a mensagem na tela, e o numero digitado pelo usuario
				Sleep(1500);  // Aguarda 1.5 segundos ate executar a proxima instrucao
			}
		}
		
		// Caso o usuario digite 0, o continue vai passar o codigo saindo do if e vindo direto para esse trecho
		// Aqui o while define a saida do programa, nao sendo necessario usar o break no lugar do continue
	} while(num != 0); // 'i' comecou sendo igual ao numero digitado pelo usuario. Vai ser diminuido ate atingir 0, so entao saira do laco
}
