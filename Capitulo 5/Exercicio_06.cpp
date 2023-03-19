#include<stdio.h>
#include<conio.h>
#include<windows.h>

main() {
	/* Criar em linguagem C e utilizando o comando DO WHILE, que imprima a palavra FATEC o número de vezes que for digitado
	 em um intervalo de um segundo. */
	
	int i = 0, repetir;
	
	printf("Programa que exibe FATEC 'X' vezes!\n\n");
	
    printf("Digite quantas vezes a palavra sera repetida: ");
    scanf("%d", &repetir);

    while (i < repetir) { // Enquanto o contador for menor que o numero digitado pelo usuario, mantem o loop
        printf("FATEC\n");  // Imprime na tela o texto FATEC
        i++; // Incremento
    }
    	
	getch();
}

