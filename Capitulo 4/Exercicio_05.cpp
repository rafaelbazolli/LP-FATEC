#include<stdio.h>
#include<conio.h>
#include<windows.h>

main() {
	/* Criar um programa em linguagem C que imprima dois números com o inicio de 0 e 10 e finalize 10 e 0, 
	todos os dois ao mesmo tempo, com o intervalo de 0,5 segundos utilizando FOR DUPLO. */
	
	int i, j; // Declarando as variaveis inteiras que serao os contadores no FOR
	printf("Programa que exibe os numeros de 0 a 10 / 10 a 0 \n\n");
	
	for(i = 0, j = 10; i <= 10, j >= 0; i++, j--) { 
		printf("%i || %i \n", i, j); 
		Sleep(500); 
	}
	
	getch();
}

