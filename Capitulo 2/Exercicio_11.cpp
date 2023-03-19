#include<stdio.h> // Responsavel pelos comandos printf e scanf
#include<windows.h> // Responsavel pelo comando system 

main() {

	system("cls");  // Limpa a tela do prompt 
	
	float horas, velmedia, medcons, dist, consumoFinal;
	
	printf("Programa consumo de combustivel!\n\n"); // Imprime o texto para o usuario
	printf("Digite a quantidade de horas: \n");  // Imprime o texto para o usuario
	scanf("%f",&horas);  // Recebe a quantidade de horas
	printf("Digite a velocidade media: \n");  // Imprime o texto para o usuario
	scanf("%f", &velmedia);  // Recebe a velocidade media 
	printf("Digite a media cosnumo: \n");  // Imprime o texto para o usuario
	scanf("%f", &medcons);  // Recebe o valor da media de consumo 
	
	dist = velmedia * horas;  // Calcula a distancia percorrida pelo veiculo
	consumoFinal = dist / medcons;  // Calcula o consumo final de combustivel

	printf("O consumo medio de combustivel em KM por Litro: %.2f\n", consumoFinal); // Exibe para o usuario a mensagem contendo o consumo final calculado
	
	system("pause"); // Aguarda o usuario pressionar Enter para encerrar a execucao do programa

}

