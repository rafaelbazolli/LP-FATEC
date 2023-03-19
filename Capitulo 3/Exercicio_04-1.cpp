#include<stdio.h> // Responsavel pelos comandos printf e scanf
#include<conio.h> // Responsavel pelo comando getch
#include<windows.h> // Responsavel pelo comando system

main() {
	/* Criar tres programas em linguagem C que identifique e que ordene 2, 3 e 4 numeros em ordem decrescente. */
	/* Esse programa ordena somente dois numeros */

	float num1, num2, maior, menor;

	printf("Programa para ordenar 2 valores\n");  // Imprime a mensagem para o usuario
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

	if (num1 == num2) {  // Exibir os resultados da comparacao
		printf("\nOs dois valores sao iguais, ambos sao %.2f.", num1);
		// Imprime para o usuario a mensagem e o numero mostrando que sao todos iguais
	}
	else {
	printf("\n\n %.2f %.2f", maior, menor);
	// Imprime para o usuario a mensagem com os numeros ja ordenados de forma decrescente 
	}

	getch(); // Aguarda o usuario digitar uma tecla qualquer para encerrar a execucao do programa
}
