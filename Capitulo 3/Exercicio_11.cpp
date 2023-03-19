#include<stdio.h> // Responsavel pelos comandos printf e scanf
#include<conio.h> // Responsavel pelo comando getch
#include<windows.h> // Responsavel pelo comando system
#include<time.h>  // Responsavel pelo comando time

main(){
	/* Criar um programa ( MEGA SENA ) em linguagem C que sorteie 6 numeros com os criterios que:
		- Os numeros nao podem ser iguais entre eles
		- Nenhum dos numeros podem ser 0
		- Os numeros a serem sorteados sao de 1 a 60 */
	
	int num1, num2, num3, num4, num5, num6; // Declarando as variaveis do tipo inteiro

	printf("\nPROGRAMA MEGA SENA"); // Imprime a mensagem na tela
	printf("\nSorteio da Mega Sena valendo R$ 10.000.000,00\n\n"); // Imprime a mensagem na tela
	
	srand(time(NULL));  // Gera uma semente aleatoria, a partir da qual o comando rand() pode gerar novos numeros a cada execucao do programa
	
	// O comando abaixo gera um numero aleatorio entre 0 e 59 usando a funcao rand, e soma 1 ao resultado. Assim nunca sera sorteado 0
	num1 = (rand() % 60) + 1;  
	num2 = (rand() % 60) + 1;
	num3 = (rand() % 60) + 1;
	num4 = (rand() % 60) + 1;
	num5 = (rand() % 60) + 1;
	num6 = (rand() % 60) + 1;

	printf("E os numeros sorteados foram:\n%i %i %i %i %i %i", num1, num2, num3, num4, num5, num6);
	// O comando acima imprime para o usuario os 6 numeros na ordem em que foram sorteados
	
	getch(); // Aguarda o usuario digitar uma tecla qualquer para encerrar a execucao do programa
}
