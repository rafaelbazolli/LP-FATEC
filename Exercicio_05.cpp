#include<stdio.h>
#include<conio.h>
#include<windows.h>

main(){
	/* Criar um programa em linguagem C que converta um numero decimal de 0 a 15 em numero bin�rio.*/
	system("cls");
	
	int num, x1, x2, x3, x4; /* x1 � o menor*/
	
	printf("Conversor de decimal para bin�rio\n");
	printf("Digite um n�mero decimal de 0 a 15: \n");
	scanf("%d", &num);
	
	x1 = num % 2;
	x2 = (num/2) % 2;
	x3 = (num/2/2) % 2;
	x4 = (num/2/2/2) % 2;
	
	printf("\n%d%d%d%d", x4, x3, x2, x1);

	getch();
}
