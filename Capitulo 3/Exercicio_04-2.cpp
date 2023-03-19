#include<stdio.h> // Responsavel pelos comandos printf e scanf
#include<conio.h> // Responsavel pelo comando getch
#include<windows.h> // Responsavel pelo comando system

main() {
	/* Criar tres programas em linguagem C que identifique e que ordene 2, 3 e 4 numeros em ordem decrescente. */
	/* Esse programa ordena somente tres numeros */

	float num1, num2, num3, maior, meio, menor; // Declarando as variaveis do tipo real(ponto flutuante)

	printf("Programa para ordenar 3 valores\n");  // Imprime a mensagem para o usuario
	printf("\nDigite o primeiro numero: "); // Imprime a mensagem para o usuario
	scanf("%f", &num1);  // Recebe o valor do primeiro numero 

	// Como num1 e unico, entao ele e o maior e o menor ate o momento
	maior = num1;
	menor = num1;

	printf("\nDigite o segundo numero: "); // Imprime a mensagem para o usuario
	scanf("%f", &num2);  // Recebe o valor do segundo numero

	if(num2 > maior) {  // Se num2 for maior que o atual maior numero, ele se torna o maior
		maior = num2;
	}
	else
		if(num2 < menor) { // Se num2 for menor que o atual menor numero, ele se torna o menor
			menor = num2;
		}
	// Para caso num1 == num2, nao e necessario uma nova comparacao

	printf("\nDigite o terceiro numero: ");  // Imprime a mensagem para o usuario
	scanf("%f", &num3);  // Recebe o valor do terceiro numero

	if(num3 > maior) { // Se num3 for maior que o 'maior' atual, o valor do 'maior' vai pro meio, e o 'maior' se torna o num3
		meio = maior;
		maior = num3;
	} 
	else
		if(num3 < menor) { //Se num3 for menor que o 'menor' atual, o valor do 'menor' vai pro meio, e o 'menor' se torna o num3
			meio = menor;
			menor = num3;
		}
		else { // Se num3 nao for menor, nem maior, entao ele e igual aos outros, e assume a posicao do meio
			meio = num3;
		}
		
	// Exibir os resultados 
	if (maior == menor && menor == meio) { // Se todos os numeros forem iguais
		printf("\nOs tres valores sao iguais, ambos sao %.2f.", num1);
		// Imprime para o usuario a mensagem e o valor do numero caso todos eles sejam iguais
	}
	else {
		printf("\n\n %.2f %.2f %.2f", maior, meio, menor);
		// Imprime para o usuario as variaveis ja ordenadas em ordem decrescente
	}

	getch(); // Aguarda o usuario digitar uma tecla qualquer para encerrar a execucao do programa
}
