#include<stdio.h>
#include<windows.h>
#include<conio.h>

main(){
	/*Criar um programa em linguagem C que leia um número do usuário, se for maior que 20 imprimir a metade desse numero.*/
	
	float num, metade;
	
	printf("\nDigite o primeiro numero: ");
	scanf("%f", &num);
	
	metade = num / 2;
	
	if(num < 20) {
		printf("\n\nImpossivel exibir a metade do numero. O criterio nao foi atingido.");
	}		
	else {
		printf("\n\nA metade de %.2f e %.2f.", num, metade);
	}
		
	
	getch();
}

