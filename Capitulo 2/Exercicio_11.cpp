#include<stdio.h> // Responsavel pelos comandos printf e scanf
#include<conio.h> // Responsavel pelo comando getch
#include<windows.h> // Responsavel pelo comando system

main(){
	/* Criar um programa em linguagem C programa que Calcule o consumo de um veiculo conforme os dados 
	informado no teclado: Tempo em horas e a distancia */

	system("cls"); // Limpa a tela do prompt 
	
	float tempo, velocidade, distancia, consumo = 10; // Declaracao das variaveis do tipo real(ponto flutuante)
	
	printf("Calculadora de consumo medio de veiculo\n");
	printf("Digite o tempo do trajeto(horas): \n");
	scanf("%f", &tempo);
	printf("Digite a velocidade media(km/h): \n");
	scanf("%f", &velocidade);
	printf("Digite a distancia percorrida(km): \n");
	scanf("%f", &distancia);
	
	/* Se ja vai ser dada a distancia, e estamos supondo o gasto medio do veiculo, velocidade media e tempo sao irrelevantes para o calculo */
	/* Considerando nesse caso um veiculo que faz 10Km/L */
	consumo = distancia / consumo;	
	
	printf("O consumo aproximado do trajeto foi de %.2f litros de combustivel.", consumo);
	// Acima e exibida uma mensagem com o consumo aproximado de combustivel do veiculo no trajeto

	getch(); // Aguarda o usuario digitar uma tecla qualquer para encerrar a execucao do programa
}
