#include<stdio.h>
#include<conio.h>
#include<windows.h>

main(){
	/* Uma fábrica de brinquedos no Japão inventou uma nova forma de produzir bambolês. O cliente escolhe o raio do
bambolê e a fábrica produz o bambolê sob medida para o cliente. Crie um programa para ajudar o fabricante a calcular o perímetro do bambolê baseado
na medida do raio escolhida pelo cliente. */

	system("cls");
	
	float raio, perimetro, area;
	
	printf("Calculadora de perímetro do bambole\n");
	printf("Digite o valor do raio do bambole: \n");
	scanf("%f", &raio);
	
	perimetro = 2 * 3.14 * raio;
	
	printf("Raio do bambole: %.2f \nPerimetro necessario: %.2f", raio, perimetro);
		
	getch();
}
