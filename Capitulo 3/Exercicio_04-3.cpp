#include<stdio.h> // Responsavel pelos comandos printf e scanf
#include<conio.h> // Responsavel pelo comando getch
#include<windows.h> // Responsavel pelo comando system

main() {
	/* Criar tres programas em linguagem C que identifique e que ordene 2, 3 e 4 numeros em ordem decrescente. */
	/* Esse programa ordena somente quatro numeros */

	float num1, num2, num3, num4, maior, meio, meio2, menor; // Declarando as variaveis do tipo real(ponto flutuante)
	/* A sequencia no decorrer do programa sera: menor meio meio2 maior */

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
		
	printf("\nDigite o quarto numero: "); // Imprime a mensagem para o usuario
	scanf("%f", &num4);  // Recebe o valor do quarto numero
	
	// Validando a posicao do num4
	if(num4 > maior) { // Se num4 e maior que todos
		meio2 = maior;
		maior = num4;
	}
	else
		if(num4 == maior) { // Se num4 e igual ao maior
			meio2 = num4;
		}
		else { // Se o num4 e menor que o atual maior numero, agora ele sera comparado ao valor do meio
			if(num4 >= meio) { // Se num4 for maior ou igual ao valor do meio, ele pode assumir a mesma posicao
				meio2 = num4;
			}
			else
				if(num4 < meio) { // Se num4 for menor que o valor do meio
					//Se num4 for menor, precisa validar se ele e menor que tudo, ou menor apenas que o valor meio
					if(num4 < menor) {
						meio2 = meio;
						meio = menor;
						menor = num4;
					}
					else
						if(num4 >= menor) {
							meio2 = meio;
						meio = num4;
						}	
				}
		}

	// Exibir os resultados
	if ((num1 == num2) && (num2 == num3) && (num3 == num4)) { // Se todos os numeros forem iguais
		printf("\nOs quatro valores sao iguais, ambos sao %.2f.", num1);
		// Imprime para o usuario a mensagem e o valor do numero caso todos eles sejam iguais
	}
	else {
		printf("\n\n%.2f %.2f %.2f %.2f", maior, meio2, meio, menor);
		// Imprime para o usuario as variaveis ja ordenadas em ordem decrescente
	}

	getch(); // Aguarda o usuario digitar uma tecla qualquer para encerrar a execucao do programa
}
