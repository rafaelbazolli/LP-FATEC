#include<stdio.h>
#include<conio.h>
#include<windows.h>

main(){
	/* Criar um programa em linguagem C que receba uma medida em pés, faça as conversões e a seguir mostre os resultados.
	a) Polegadas;
	b) Jardas;
	c) Milhas.*/
	
	system("cls");
	
	float pes, pol, jar, mil;
	
	printf("Conversor de medidas em pes\n");
	printf("Digite o valor em pes: \n");
	scanf("%f", &pes);
	
	pol = pes * 12;
	jar = pes / 3;
	mil = pes / 5280;
	
	printf("Pes: %.2f\nPolegadas: %.2f\nJardas: %.2f\nMilhas: %.2f", pes, pol, jar, mil);	
	
	getch();
}
