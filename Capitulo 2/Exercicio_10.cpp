#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<math.h>

main(){
	/* Uma pizzaria de São Paulo inventou uma nova modalidade de pizza, chamada de “Meia Pizza da Casa”.
	 O cliente escolhe o raio da pizza e o pizzaiolo faz uma meia pizza de calabresa com essa medida de
	  raio. Crie um programa para ajudar o pizzaiolo a calcular a área da “Meia Pizza da Casa” baseada 
	  na medida do raio escolhida pelo cliente. */

	system("cls");
	
	float raio, meiaArea, area;
	
	printf("Calculadora de area da pizza\n");
	printf("Digite o valor do raio da pizza: \n");
	scanf("%f", &raio);
	
	area = 3.14 * pow(raio, 2);
	meiaArea = area / 2;
	
	printf("Raio da pizza: %.2f \nArea total da pizza: %.2f\nArea da Meia Pizza da Casa: %.2f", raio, area, meiaArea);	
	
	getch();
}
