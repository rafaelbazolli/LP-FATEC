#include<stdio.h>
#include<conio.h>
#include<windows.h>

main(){
	/* Uma f�brica de brinquedos no Jap�o inventou uma nova forma de produzir bambol�s. O cliente escolhe o raio do
bambol� e a f�brica produz o bambol� sob medida para o cliente. Crie um programa para ajudar o fabricante a calcular o per�metro do bambol� baseado
na medida do raio escolhida pelo cliente. */

	system("cls");
	
	float raio, perimetro, area;
	
	printf("Calculadora de per�metro do bambole\n");
	printf("Digite o valor do raio do bambole: \n");
	scanf("%f", &raio);
	
	perimetro = 2 * 3.14 * raio;
	
	printf("Raio do bambole: %.2f \nPerimetro necessario: %.2f", raio, perimetro);
		
	getch();
}
