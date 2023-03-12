#include<stdio.h>
#include<conio.h>
#include<windows.h>

main() {
	/* Criar em linguagem C e utilizando o comando DO WHILE, um programa que identifique se um número é PAR, IMPAR e 0 para sair.*/
	
	int num; // Declaracao da variavel do tipo inteiro

	do { 
		system("cls");
		printf("Programa PAR ou IMPAR\n\n"); // Imprime o texto na tela
		printf("Digite um numero: "); // Imprime o texto na tela
		scanf("%d", &num);  // Recebe um valor do usuario
		
		if(num == 0) {  // Condicao de saida do programa, caso o usuario digite 0
			continue; // O continue vai seguir com a execucao do codigo apenas, nesse caso saindo do if
		}
		else {
			if(num % 2 == 0) {
				printf("\n\n%d e PAR!", num);
				Sleep(1500);
			} 
			else {
				printf("\n\n%d e IMPAR!", num);
				Sleep(1500);
			}
		}
		
		// Caso o usuario digite 0, o continue vai passar o codigo saindo do if e vindo direto para esse trecho
		// Aqui o while define a saida do programa, nao sendo necessario usar o break no lugar do continue
	} while(num != 0); // 'i' comecou sendo igual ao numero digitado pelo usuario. Vai ser diminuido ate atingir 0, so entao saira do laço
	
}

