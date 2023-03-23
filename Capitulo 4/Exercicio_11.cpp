#include<stdio.h> // Responsavel pelos comandos printf e scanf
#include<conio.h> // Responsavel pelo comando getch
#include<windows.h> // Responsavel pelo comando system

main() {
	/* Crie um programa em linguagem C, usando FOR. O programa deve receber um número inteiro, que será a quantidade de idades que deverão ser lidas. 
	O programa deve também calcular a media das idades fornecidas e mostrá-la na tela. */
	int repetir, idade;  // Declarando as variaveis do tipo inteiro
	float mediaIdades, somaIdades = 0;  // Declarando as variaveis do tipo real(ponto flutuante)
	
	menu:
	system("cls");  // Limpa a tela do prompt
	printf("Programa que calcula a media das idades!\n\n");  // Imprime a mensagem na tela
	printf("Digite quantas idades deseja inserir: ");  // Imprime a mensagem na tela
	scanf("%d", &repetir);  // Recebe do usuario quantas vezes ele quer que o laco se repita
	
	if(repetir < 0) {  // Tratativa de erro, caso o usuario digite um numero negativo de vezes, ele retornara para o menu
		printf("\n\nPor favor, digite uma quantidade valida !!");  // Imprime a mensagem na tela
		Sleep(2000);  // Aguarda 2 segundos ate seguir para proxima execucao
		goto menu;  // Direciona a execucao do programa para a linha 11, onde sera fornecida novamente a opcao de repetir
	} else if(repetir == 0) {  // Caso o usuario nao queira nenhuma repeticao, executa o bloco abaixo
		goto end;  // Desvia a execucao do programa para a linha 35, e encerra o programa
	}
	
	for(int i = 0; i < repetir; i++) {  // Mantem o laco for enquanto o contador for menor ou igual ao numero de repeticoes que o usuario deseja
		printf("\nDigite a idade: ");  // Imprime a mensagem na tela
		scanf("%d", &idade);  // Recebe o valor da idade digitada pelo usuario
		
		somaIdades += idade;  // Acumulador, soma a idade lida na linha 24, com o total das idades de cada iteracao
	}
	mediaIdades = somaIdades / repetir;  // Divide o total da somatoria das idades, pela quantidade de idades que foi fornecida, obtendo a media delas
	
	printf("\nMedia das idades = %.2f", mediaIdades);  // Imprime na tela a mensagem e a media das idades
	
	end:
	getch();  // Aguarda o usuario digitar uma tecla qualquer para encerrar a execucao do programa
}

