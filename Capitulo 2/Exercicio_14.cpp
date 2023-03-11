#include<stdio.h> // Responsavel pelos comandos printf e scanf
#include<conio.h> // Responsavel pelo comando getch
#include<windows.h> // Responsavel pelo comando system

main(){
	/* Crie um programa em C que receba a temperatura em °C(graus Celsius), e converta para Fahrenheit e para Kelvin. */

	system("cls"); // Limpa a tela do prompt 
	
	float celsius, fah, kelvin; // Declaracao das variaveis do tipo real(ponto flutuante)
	
	printf("Conversor de Temperaturas \n"); // Imprime o texto para o usuario
	printf("Digite a temperatura em graus celsius(C): \n"); // Imprime o texto para o usuario
	scanf("%f", &celsius);   // Recebe o valor da temperatura fornecida pelo usuario
		
	fah = (1.8 * celsius) + 32;  // Calcula a conversao de celsius para fahrenheit
	kelvin = celsius + 273; // Calcula a conversao de celsius para kelvin
	
	printf("Temperatura em:\nCelsius: %.2f\nFahrenheit: %.2f\nKelvin: %.2f", celsius, fah, kelvin); 
	// O comando acima exibe a mensagem com as conversoes ja calculadas 
	
	getch(); // Aguarda o usuario digitar uma tecla qualquer para encerrar a execucao do programa
}


