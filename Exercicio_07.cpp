#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<math.h>

main(){
	/* Criar um programa em linguagem C que calcule o perímetro e a área de uma circunferência de raio R (fornecido pelo usuário).*/
	system("cls");
	
	float raio, perimetro, area;
	
	printf("Calculadora de perímetro e área de circunferencia\n");
	printf("Digite o valor do raio: \n");
	scanf("%f", &raio);
	
	perimetro = 2 * 3.14 * raio;
	area = 3.14 * pow(raio, 2);
	
	printf("Raio: %.2f \nPerimetro: %.2f\nArea: %.2f", raio, perimetro, area);	
	getch();
}
