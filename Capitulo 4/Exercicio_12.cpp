#include<stdio.h> // Responsavel pelos comandos printf e scanf
#include<conio.h> // Responsavel pelo comando getch
#include<windows.h> // Responsavel pelo comando system

main() {
	/* Crie um programa em Linguagem C, usando laco FOR, que receba a distancia percorrida e o consumo(Km/L) de 5 veiculos de uma empresa.
	Ao final, mostre a distancia media percorrida pelos veiculos e o consumo medio deles.  */
	
	float distancia, consumo, distanciaMedia, consumoMedio, distanciaTotal = 0, consumoTotal = 0;  // Declarando as variaveis do tipo real
	
	printf("Programa para gerenciar consumo | distancia percorrida pelos veiculos da frota!\n\n"); // Imprime a mensagem na tela
	
	for(int i = 1; i <= 3; i++) {
		printf("\nDigite a distancia percorrida pelo veiculo %d: ", i);  // Imprime a mensagem na tela, contendo o numero da iteracao atual
		scanf("%f", &distancia);  // Recebe o valor da distancia fornecido pelo usuario
		printf("\nDigite o consumo do veiculo %d: ", i);  // Imprime a mensagem na tela, contendo o numero da iteracao atual
		scanf("%f", &consumo);  // Recebe o valor do consumo fornecido pelo usuario
		
		distanciaTotal += distancia;  // Acumulador, seria a mesma coisa de fazer distanciaTotal = distanciaTotal + distancia
		consumoTotal += consumo;   // Acumulador, seria a mesma coisa de fazer consumoTotal = consumoTotal + consumo
	}
	distanciaMedia = distanciaTotal / 3;  // Calcula a distancia media, dividindo a distancia total percorrida pela quantidade de carros
	consumoMedio = consumoTotal / 3;  // Calcula o consumo medio, dividindo o consumo total pela quantidade de carros
	
	printf("\n\nDistancia media percorrida pelos veiculos: %.2f Km", distanciaMedia);
	printf("\nConsumo medio dos veiculos: %.2f Km/L", consumoMedio);
	// Os comandos acima(linha 25 e 26) imprimem a mensagem na tela, e tambem a distancia media e consumo ja calculados nas linhas 22 e 23	
	
	getch();  // Aguarda o usuario digitar uma tecla qualquer para encerrar a execucao do programa
}

