#include<stdio.h>
#include<conio.h>
#include<windows.h>

main(){
	/* Criar um programa em linguagem C programa que Calcule o consumo de um veículo conforme os dados 
	informado no teclado: Tempo em horas, velocidade média e distância */

	system("cls");
	
	float tempo, velocidade, distancia, consumo = 10;
	
	printf("Calculadora de consumo medio de veiculo\n");
	printf("Digite o tempo do trajeto(horas): \n");
	scanf("%f", &tempo);
	printf("Digite a velocidade media(km/h): \n");
	scanf("%f", &velocidade);
	printf("Digite a distancia percorrida(km): \n");
	scanf("%f", &distancia);
	
	/* Se ja vai ser dada a distancia, e estamos supondo o gasto médio do veículo, velocidade média e tempo são irrelevantes para o calculo */
	/* Considerando nesse caso um veículo que faz 10Km/L */
	consumo = distancia / consumo;	
	
	printf("O consumo aproximado do trajeto foi de %.2f litros de combustivel.", consumo);

	getch();
}
