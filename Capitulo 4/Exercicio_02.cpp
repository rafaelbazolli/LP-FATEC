#include<stdio.h>
#include<conio.h>
#include<windows.h>

main() {
	/* Criar um programa em linguagem C que imprima um numero de 100 a 0 com o intervalo de 0,5 segundos. */
	
	printf("Programa que exibe os numeros de 100 a 0\n\n");
	
	for(int i = 100; i >= 0; i--) {
		printf("%d ", i);
		Sleep(500); // Comando Sleep da lib windows.h funciona em ms, nao em segundos
	}
	
	getch();
}

