#include<stdio.h>
#include<conio.h>
#include<windows.h>

main(){
	/* Criar um programa em linguagem C programa que Calcule o consumo de um ve�culo conforme os dados 
	informado no teclado: Tempo em horas, velocidade m�dia e dist�ncia */

	system("cls");
	
	float tempo, velocidade, distancia, consumo = 10;
	
	printf("Calculadora de consumo medio de veiculo\n");
	printf("Digite o tempo do trajeto(horas): \n");
	scanf("%f", &tempo);
	printf("Digite a velocidade media(km/h): \n");
	scanf("%f", &velocidade);
	printf("Digite a distancia percorrida(km): \n");
	scanf("%f", &distancia);
	
	/* Se ja vai ser dada a distancia, e estamos supondo o gasto m�dio do ve�culo, velocidade m�dia e tempo s�o irrelevantes para o calculo */
	/* Considerando nesse caso um ve�culo que faz 10Km/L */
	consumo = distancia / consumo;	
	
	printf("O consumo aproximado do trajeto foi de %.2f litros de combustivel.", consumo);

	getch();
}
