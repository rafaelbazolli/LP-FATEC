#include<stdio.h>
#include<conio.h>
#include<windows.h>

main() {
	/* Criar em linguagem C e utilizando o comando WHILE ou DO WHILE, um programa que pe�a n�meros ao usu�rio at� que a soma de todos os
	n�meros digitados for pelo menos 20. */
	
	int num, total = 0;
	
	printf("Programa de soma cumulativa ate no minimo 20!\n\n");
	
	do {
		printf("\nTotal = %d\n", total);
		printf("\nDigite um valor: ");
		scanf("%d", &num);
		
		total += num;		
		
	} while(total <= 20);
	printf("\nTotal FINAL = %d", total);
	
	getch();
}

