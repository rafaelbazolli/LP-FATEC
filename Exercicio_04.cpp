#include<stdio.h>
#include<conio.h>
#include<windows.h>

main(){
	/* Criar um programa em linguagem C que faça a conversão de m em km hm, dam, dc, dm e mm*/
	system("cls");
	
	float metros, km, hm, dam, dc, cm, mm;
	
	printf("Digite um valor em metros: \n");
	scanf("%f", &metros);
	
	km = metros / 1000;
	hm = metros / 100;
	dam = metros / 10;
	dc = metros * 10;
	cm = metros * 100;
	mm = metros * 1000;
	
	printf("A medida em metros e %f. Equivale a: \n%f km\n%f hm\n%f dam\n%.3f dc\n%.3f cm\n%.3f mm", metros, km, hm, dam, dc, cm, mm);
	
	getch();
}
