#include<stdio.h>
#include<conio.h>

main(){
	/*Criar um programa em linguagem C que efetue a soma de dois n�meros dos tipo real*/
	
	float num1, num2, soma;
	printf("Programa de soma de dois n�meros!!\n\n");
	printf("Digite o primeiro numero: \n");
	scanf("%f", &num1);
	printf("Digite o segundo numero: \n");
	scanf("%f", &num2);
	
	soma = num1 + num2;
	
	printf("%.2f + %.2f = %.2f", num1, num2, soma);
	
	getch();
	
}
