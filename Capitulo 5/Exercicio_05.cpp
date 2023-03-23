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

    while (true) { // Loop infinito
        printf("%s\n", palavra); // Imprime a palavra digitada pelo usuario

        // A funcao kbhit captura qualquer tecla digitada pelo usuario
        if (kbhit()) {  // Se a funcao kbhit receber algo, ou seja, se o usuario pressionar qualquer tecla, executa o bloco abaixo
            break;  // O comando break intrerrompe a execucao do laco atual, ou seja, ele sai do laco while(linha 17 a 24)
        }
    }
	
	getch();  // Aguarda o usuario digitar uma tecla qualquer para encerrar a execucao do programa
}

