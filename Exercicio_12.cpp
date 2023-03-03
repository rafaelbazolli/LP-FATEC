#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<math.h>

main(){
	/* Um fabricante de ferraduras africano acaba de expandir os negócios. Agora ele fabrica ferraduras para qualquer tipo de animal com
casco. O formato das ferraduras é o de meia tora. O cliente escolhe o raio externo e o raio interno e ele produz a ferradura. Crie um
programa para ajudar o ferreiro a calcular a área da ferradura baseado na medida do raio esterno e interno fornecido pelo cliente. */

	system("cls");
	
	float raioExterno, raioInterno, areaExterna, areaInterna, areaFerradura;
	
	printf("Calculadora de area de ferradura meia tora \n");
	printf("Digite o raio externo da ferradura: \n");
	scanf("%f", &raioExterno);
	printf("Digite o raio interno da ferradura: \n");
	scanf("%f", &raioInterno);
		
	
	areaExterna = (3.14 * pow(raioExterno, 2)) / 2;
	areaInterna = (3.14 * pow(raioInterno, 2)) / 2;
	
	areaFerradura = areaExterna - areaInterna;
	
	printf("A area da ferradura e: %.2f.", areaFerradura);
	
	getch();
}
