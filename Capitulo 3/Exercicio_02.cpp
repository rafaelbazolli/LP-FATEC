#include<stdio.h>
#include<conio.h>
#include<windows.h>

main() {
	/*Criar um programa em linguagem C que identifique se o numero é +, - ou NULO.*/
	system("cls");
	
	float num;
	
	printf("Programa para verificar se um numero e positivo, negativo ou nulo\n");
	printf("Digite um numero: ");
	scanf("%f", &num);
	
	if (num < 0) 
	{
		printf("O numero %.2f e negativo.", num);
	}
	else
		if (num > 0) 
		{
			printf("O numero %.2f e positivo.", num);
		}
		else 
		{
			printf("O numero %.2f e nulo.", num);
		}
			
	getch();
}

