#include<stdio.h>
#include<conio.h>
#include<windows.h>

main() {
	/* Criar um programa em linguagem C que imprima a tabela ASCII utilizando o comando FOR. */
	
	int i; 
	printf("Programa que os caracteres da tabela ASCII \n\n");
	
	for(i = 0; i <= 255; i++) {  // Tabela ASCII possui 256 caracteres
		printf("%i = %c\n", i, i); 
		Sleep(50); 
	}
	
	getch();
}

