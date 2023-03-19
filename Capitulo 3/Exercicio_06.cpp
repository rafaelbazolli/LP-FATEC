#include<stdio.h> // Responsavel pelos comandos printf e scanf
#include<conio.h> // Responsavel pelo comando getch
#include<windows.h> // Responsavel pelo comando system

main(){
	/*Criar um programa em linguagem C que leia um número do usuário, se for maior que 20 imprimir a metade desse numero.*/
	
	float num, metade;  // Declara as variaveis do tipo real(ponto flutuante)
	
	printf("\nDigite o numero: ");  // Imprime a mensagem na tela
	scanf("%f", &num);  // Recebe o valor digitado pelo usuario
	
	metade = num / 2; // Calcula a metade do valor
	
	if(num < 20) {  // Se o numero for menor que 20, executa o bloco abaixo
		printf("\n\nImpossivel exibir a metade do numero. O criterio nao foi atingido."); // Imprime a mensagem na tela
	}		
	else {  // Se o numero digitado foi maior ou igual a 20, executa o bloco abaixo
		printf("\n\nA metade de %.2f e %.2f.", num, metade); // Imprime a mensagem na tela, mostrando o numero e sua metade
	}
		
	getch(); // Aguarda o usuario digitar uma tecla qualquer para encerrar a execucao do programa
}

