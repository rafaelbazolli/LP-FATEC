#include<stdio.h> // Responsavel pelos comandos printf e scanf
#include<conio.h> // Responsavel pelo comando getch
#include<windows.h> // Responsavel pelo comando system

main(){
	/* Criar um programa em linguagem C que ajude Luiz na aula de geometria, sabendo que tenha que obter 3 numeros e imprimir se eles podem
		ou nao ser lados de um triangulo. A condicao para isto e: A<B+C e B<A+C e C<A+B.*/
	
	float ladoA, ladoB, ladoC; // Declarando as variaveis do tipo real(ponto flutuante)
	
	printf("Programa para validar se os numeros podem ser lados de um triangulo."); // Imprime a mensagem na tela
	printf("\nInforme um numero: ");  // Imprime a mensagem na tela
	scanf("%f", &ladoA);  // Recebe o valor do primeiro lado
	printf("\nInforme outro numero: ");  // Imprime a mensagem na tela
	scanf("%f", &ladoB);  // Recebe o valor do segundo lado
	printf("\nInforme outro numero: ");  // Imprime a mensagem na tela
	scanf("%f", &ladoC);  // Recebe o valor do terceiro lado
	
	// No if abaixo e dada uma condicao de existencia do triangulo, um lado nao pode ser maior que a soma dos outros dois lados
	if((ladoA < (ladoB + ladoC)) && (ladoB < (ladoA + ladoC)) && (ladoC < (ladoA + ladoB))) {
		printf("\n\nOs numeros informados podem formar lados de um triangulo."); // Imprime a mensagem na tela
	}	
	else {
		printf("\nOs numeros informados NAO podem formar lados de triangulo."); // Imprime a mensagem na tela
	}
	
	getch(); // Aguarda o usuario digitar uma tecla qualquer para encerrar a execucao do programa
}

