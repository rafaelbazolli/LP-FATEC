#include<stdio.h>
#include<conio.h>
#include<windows.h>

main(){
	/* Criar um programa em linguagem C que faça a conversão de 4 bit( NIBLE ) em um numero decimal.*/
	system("cls");
	
	int num, x1, x2, x3, x4;
	
	printf("Programa para conversao de 4bits para decimal\n");
	printf("Digite o numero: ");
	scanf("%d%d%d%d", &x1, &x2, &x3, &x4);
	
	num = ((x1 * 8) + (x2 * 4) + (x3 * 2) + (x4 * 1));
	
	printf("Decimal: %d", num);	
	
	getch();
}
