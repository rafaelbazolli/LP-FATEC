#include<stdio.h> // Responsavel pelos comandos printf e scanf
#include<conio.h> // Responsavel pelo comando getch
#include<windows.h> // Responsavel pelo comando system
#include<math.h> // Responsavel pelo comando pow

main(){
	/* Um fabricante de ferraduras africano acaba de expandir os negocios. Agora ele fabrica ferraduras para qualquer tipo de animal com
casco. O formato das ferraduras e o de meia tora. O cliente escolhe o raio externo e o raio interno e ele produz a ferradura. Crie um
programa para ajudar o ferreiro a calcular a area da ferradura baseado na medida do raio esterno e interno fornecido pelo cliente. */

	system("cls"); // Limpa a tela do prompt 
	
	float raioExterno, raioInterno, areaExterna, areaInterna, areaFerradura; 
	
	printf("Calculadora de area de ferradura meia tora \n"); // Imprime o texto para o usuario
	printf("Digite o raio externo da ferradura: \n"); // Imprime o texto para o usuario
	scanf("%f", &raioExterno);   // Recebe o valor do raio externo fornecido pelo usuario
	printf("Digite o raio interno da ferradura: \n"); // Imprime o texto para o usuario
	scanf("%f", &raioInterno);  // Recebe o valor do raio interno fornecido pelo usuario
		
	areaExterna = (3.14 * pow(raioExterno, 2)) / 2;  // Calcula a area do circulo mais externo, e divide por dois para ter a semicircunferencia
	areaInterna = (3.14 * pow(raioInterno, 2)) / 2;  // Calcula a area do circulo mais interno, e divide por dois para ter a semicircunferencia
	
	areaFerradura = areaExterna - areaInterna;  // Calcula a diferenca entre o semicirculo externo e o interno, restando apenas a area da ferradura
	
	printf("A area da ferradura e: %.2f.", areaFerradura); // Exibe a mensagem com a area da ferradura calculada
	
	getch(); // Aguarda o usuario digitar uma tecla qualquer para encerrar a execucao do programa
}
