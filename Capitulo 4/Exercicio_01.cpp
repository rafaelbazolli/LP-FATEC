#include<stdio.h>
#include<conio.h>
#include<windows.h>

main() {
	/* Criar um programa em linguagem C que imprima um numero de 0 a 100 com o intervalo de 0,5 segundos. */
	
	printf("Programa que exibe os numeros de 0 a 100\n\n");
	
	for(int i = 0; i <= 100; i++) {
		printf("%d ", i);
		Sleep(500); // Comando Sleep da lib windows.h funciona em ms, nao em segundos
	}
	
	getch();
}


