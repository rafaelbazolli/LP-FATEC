#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<time.h>

main(){
	/* Criar um programa ( MEGA SENA ) em linguagem C que sorteie 6 numeros com os criterios que:
		- Os numeros não podem ser iguais entre eles
		- Nenhum dos números podem ser 0
		- Os numeros a serem sorteados sao de 1 a 60 */
	
	int num1, num2, num3, num4, num5, num6;

	printf("\nPROGRAMA MEGA SENA");
	printf("\nSorteio da Mega Sena valendo R$ 10.000.000,00\n\n");
	
	srand(time(NULL));
	
	num1 = (rand() % 60) + 1;
	num2 = (rand() % 60) + 1;
	num3 = (rand() % 60) + 1;
	num4 = (rand() % 60) + 1;
	num5 = (rand() % 60) + 1;
	num6 = (rand() % 60) + 1;

	printf("E os numeros sorteados foram:\n%i %i %i %i %i %i", num1, num2, num3, num4, num5, num6);
	
	getch();
}
