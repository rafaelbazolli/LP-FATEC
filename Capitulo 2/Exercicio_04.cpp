#include<stdio.h> // Responsavel pelos comandos printf e scanf
#include<conio.h> // Responsavel pelo comando getch
#include<windows.h> // Responsavel pelo comando system

main(){
	/* Criar um programa em linguagem C que faca a conversao de m em km hm, dam, dc, dm e mm*/
	system("cls"); // Limpa a tela do prompt 
	
	float metros, km, hm, dam, dc, cm, mm; // Declaracao das variaveis do tipo real(ponto flutuante)
	
	printf("Digite um valor em metros: \n"); // Imprime o texto para o usuario
	scanf("%f", &metros); // Recebe o valor digitado pelo usuario, em metros
	
	km = metros / 1000; // Execucao da conversao para quilometros
	hm = metros / 100; // Execucao da conversao para hectometros
	dam = metros / 10; // Execucao da conversao para decametros
	dc = metros * 10; // Execucao da conversao para decimetros
	cm = metros * 100; // Execucao da conversao para centimetros
	mm = metros * 1000; // Execucao da conversao para milimetros 
	
	printf("A medida em metros e %f. Equivale a: \n%f km\n%f hm\n%f dam\n%.3f dc\n%.3f cm\n%.3f mm", metros, km, hm, dam, dc, cm, mm);
	// O comando acima exibe o valor de todas as variaveis calculadas anteriormente 

	getch(); // Aguarda o usuario digitar uma tecla qualquer para encerrar a execucao do programa
}
