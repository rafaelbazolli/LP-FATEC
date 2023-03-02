#include<stdio.h>
#include<conio.h>
#include<windows.h>

main(){
	/*Criar um programa em linguagem C que converta sua idade em meses, semanas, dias, horas, minutos e segundos.*/
	system("cls");
	
	float idade, meses, semanas, dias, horas, minutos, segundos;
	
	printf("Digite sua idade: \n");
	scanf("%f", &idade);
	
	meses = idade / 12;
	semanas = meses * 4;
	dias = semanas * 7;
	horas = dias * 24;
	minutos = horas * 60;
	segundos = minutos * 60;
	
	printf("Você tem %.0f anos. %.0f meses. %.0f semanas. %.0f dias. %.0f horas. %.0f minutos. %.0f segundos.", idade, meses, semanas, dias, horas, minutos, segundos);
	
	getch();
}
