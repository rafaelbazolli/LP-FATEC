#include<stdio.h> // Responsavel pelo comando printf e scanf
#include<conio.h> // Responsavel pelo comando getch

main() {
	/* Criar em linguagem C e utilizando o comando DO WHILE, que imprima a palavra FATEC o numero de vezes que for digitado
	 em um intervalo de um segundo. */
	
	int i = 0, repetir;  // Declarando as variaveis do tipo inteiro
	
	printf("Programa que exibe FATEC 'X' vezes!\n\n");  // Imprime na tela a mensagem
	
    printf("Digite quantas vezes a palavra sera repetida: ");  // Imprime na tela a mensagem
    scanf("%d", &repetir);  // Recebe do usuario o numero de vezes que ele deseja repetir a palavra

    while (i < repetir) { // Enquanto o contador for menor que o numero digitado pelo usuario, mantem o loop
        printf("FATEC\n");  // Imprime na tela o texto FATEC
        i++; // Incremento
    }
    	
	getch();  // Aguarda o usuario digitar uma tecla qualquer para encerrar a execucao do programa
}

