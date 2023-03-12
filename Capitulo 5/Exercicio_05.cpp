#include<stdio.h>
#include<conio.h>
#include<windows.h>

main() {
	/* Criar em linguagem C utilizando o comando WHILE, um programa que imprima uma palavra infinitamente,
	até que uma tecla seja pressionada */
	
	char palavra[100]; // Armazena a palavra digitada pelo usuário, uma string de tamanho 100
	// Char é um unico caractere, ao declarar a palavra com [], estamos declarando um vetor de caracteres, formando uma string
	
	printf("Programa que exibe palavra infinitamente!\n\n");
	
    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    while (true) { // Loop infinito
        printf("%s\n", palavra); // Recebe a palavra digitada pelo usuario

        if (kbhit()) { // Se uma tecla for pressionada, saia do loop
            break;
        }
    }
	
	getch();
}

