#include<stdio.h>
#include<windows.h>
#include<conio.h>

main(){
	/* Criar um programa em linguagem C que ajude Luiz na aula de geometria, sabendo que tenha que obter 3 numeros e imprimir se eles podem
		ou n�o ser lados de um triangulo. A condicao para isto e: A<B+C e B<A+C e C<A+B.*/
	
	float ladoA, ladoB, ladoC;
	
	printf("Programa para validar se os numeros podem ser lados de um triangulo.");
	printf("\nInforme um numero: ");
	scanf("%f", & ladoA);
	printf("\nInforme outro numero: ");
	scanf("%f", & ladoB);
	printf("\nInforme outro numero: ");
	scanf("%f", & ladoC);
	
	if((ladoA < (ladoB + ladoC)) && (ladoB < (ladoA + ladoC)) && (ladoC < (ladoA + ladoB))) {
		printf("\n\nOs lados informados podem formar um triangulo.");
	}
	
	else {
		printf("\nOs lados informados NAO podem formar um triangulo.");
	}
	
	getch();
}
