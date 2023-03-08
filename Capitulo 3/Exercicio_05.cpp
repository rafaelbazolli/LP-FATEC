#include<stdio.h>
#include<windows.h>
#include<math.h>

main(){
	/* Criar um programa em linguagem C que resolva a fórmula de Bháskara e determine se é possível obter raiz de um número negativo. */
	
	
	float a, b, c, x1, x2, delta;
	
	menu:
	system("cls");
	printf("Programa de Bhaskara\n");
	printf("Digite o valor de A: \n");
	scanf("%f", &a);
	printf("Digite o valor de B: \n");
	scanf("%f", &b);
	printf("Digite o valor de C: \n");
	scanf("%f", &c);

	
	delta = (b * b) - (4 * a* c);
	
	if(delta < 0) {
		printf("Delta invalido! Tente outros numeros.");
		Sleep(1500);
		goto menu;
	}
	
	x1 = (-b +sqrt(delta))/(2 * a);
	x2 = (-b -sqrt(delta))/(2 * a);
	
	printf("Delta = %.2f\n", delta);
	printf("x1 = %.2f e x2 = %.2f\n\n", x1, x2);
	
	system("pause");
}
