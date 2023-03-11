#include<stdio.h> // Responsavel pelos comandos printf e scanf
#include<conio.h> // Responsavel pelo comando getch
#include<windows.h> // Responsavel pelo comando system

main(){
	/*Criar um programa em linguagem C que converta sua idade em meses, semanas, dias, horas, minutos e segundos.*/
	system("cls"); // Limpa a tela do prompt 
	
	float idade, meses, semanas, dias, horas, minutos, segundos;  // Declaracao das variaveis do tipo real(ponto flutuante)
	
	printf("Digite sua idade: \n"); // Imprime texto para o usuario
	scanf("%f", &idade); // Recebe o valor da idade digitada pelo usuario
	
	meses = idade * 12; // Execucao do calculo dos meses
	semanas = meses * 4; // Execucao do calculo dos semanas
	dias = semanas * 7; // Execucao do calculo dos dias
	horas = dias * 24; // Execucao do calculo dos horas
	minutos = horas * 60; // Execucao do calculo dos minutos
	segundos = minutos * 60; // Execucao do calculo dos segundos
	
	printf("Voce tem %.0f anos. %.0f meses. %.0f semanas. %.0f dias. %.0f horas. %.0f minutos. %.0f segundos.", idade, meses, semanas, dias, horas, minutos, segundos);
	// O comando acima exibe o valor de todas as variaveis calculadas anteriormente 

	getch(); // Aguarda o usuario digitar uma tecla qualquer para encerrar a execucao do programa
}
