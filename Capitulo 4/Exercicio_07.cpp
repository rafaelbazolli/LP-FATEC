#include<stdio.h>
#include<conio.h>
#include<windows.h>

main() {
	/* Criar um programa em linguagem C que imprima uma tabuada do 1 a 10 conforme entrada do usuário, 
	com o intervalo de 0,5 segundos utilizando o comando FOR */
	
	int i, j, num; 
	printf("Programa que exibe tabuada do numero escolhido!\n\n");
	printf("\nDigite um numero: ");
	scanf("%i", &num);
	
	for(i = 1; i <= 10; i++) { 
	
		j = i * num;
		
		printf("%i X %i = %i\n", i, num, j); 
		Sleep(500); 
	}
	
	getch();
}

