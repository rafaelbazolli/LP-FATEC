#include<stdio.h>
#include<windows.h>
#include<math.h>

main(){
	system("cls");
	
	float a, b, c, x1, x2, d;
	
	printf("Programa de Bhaskara\n");
	printf("Digite o valor de abc\n");
	scanf("%f%f%f", &a, &b, &c);
	
	d = (b * b) - (4 * a* c);
	x1 = (-b +sqrt(d))/(2 * a);
	x2 = (-b -sqrt(d))/(2 * a);
	
	printf("Delta = %.2f\n", d);
	printf("x1 = %.2f e x2 = %.2f\n\n", x1, x2);
	
	system("pause");
}
