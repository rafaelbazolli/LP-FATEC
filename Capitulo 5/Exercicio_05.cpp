#include<stdio.h> // Responsavel pelo comando printf e scanf
#include<conio.h> // Responsavel pelos comandos getch e kbhit

main() {
	/* Criar em linguagem C utilizando o comando WHILE, um programa que imprima uma palavra infinitamente,
	ate que uma tecla seja pressionada */
	
	char palavra[100]; // Armazena a palavra digitada pelo usuario, uma string de tamanho 100
	// Char e um unico caractere, ao declarar a palavra com [], estamos declarando um vetor de caracteres, formando uma string
	
	printf("Programa que exibe palavra infinitamente!\n\n");  // Imprime a mensagem na tela
	
    printf("Digite uma palavra: ");  // Imprime a mensagem na tela
    scanf("%s", palavra);  // Recebe do usuario a palavra que sera exibida no loop

    while(!kbhit()) // Loop infinito
        printf("%s\n", palavra); // Imprime a palavra digitada pelo usuario	
	getch();  // Aguarda o usuario digitar uma tecla qualquer para encerrar a execucao do programa
}

