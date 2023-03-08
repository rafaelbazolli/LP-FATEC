#include<stdio.h>
#include<conio.h>
#include<windows.h>

main() {
	system("cls");
	
	int num;
	
	printf("Programa para verificar se um numero e PAR ou IMPAR\n");
	printf("Digite um numero inteiro: ");
	scanf("%i", &num);
	
	if (num % 2 == 0)
	{
		printf("\nO numero %i e PAR.", num);
	} 
	else {
		printf("\nO numero %i e IMPAR.", num);
	}
	
	getch();
}
