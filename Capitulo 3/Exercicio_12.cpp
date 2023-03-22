#include<stdio.h> // Responsavel pelos comandos printf e scanf
#include<math.h>  // Responsavel pelo comando pow
#include<conio.h> // Responsavel pelo comando getch
#include<windows.h> // Responsavel pelo comando system

main() {
	float peso, altura, imc;  // Declarando as variaveis do tipo real(ponto flutuante)
	
	printf("Programa para calcular IMC!\n\n");  // Imprime o texto na tela
	printf("Digite a altura(m): ");    // Imprime o texto na tela
	scanf("%f", &altura);  	// Recebe o valor da altura digitada pelo usuario
	printf("Digite o peso(kg): ");     // Imprime o texto na tela
	scanf("%f", &peso);  // Recebe o valor do peso digitado pelo usuario
	
	imc = peso / (pow(altura, 2));  // Calcula o IMC, baseado na formula IMC = peso / (altura * altura)
	
	if(imc < 18.5) {  // Se o peso for menor que 18.5, executa o bloco
		printf("\n\nIMC = %f\nAbaixo do Peso ideal!", imc); // Imprime na tela o IMC, e a mensagem correspondente a classificacao
	} 
	else if((imc >= 18.5) && (imc < 25)) {  
		printf("\n\nIMC = %.2f\nPeso ideal!", imc);  // Imprime na tela o IMC, e a mensagem correspondente a classificacao
	} 
	else if((imc >= 25) && (imc < 30)) {  
		printf("\n\nIMC = %.2f\nSobrepeso!", imc);  // Imprime na tela o IMC, e a mensagem correspondente a classificacao
	}
	else if((imc >= 30) && (imc < 35)) {  
		printf("\n\nIMC = %.2f\nObesidade Grau I!", imc);  // Imprime na tela o IMC, e a mensagem correspondente a classificacao
	}
	else if((imc >= 35) && (imc < 40)) {  
		printf("\n\nIMC = %.2f\nObesidade Grau II!", imc);  // Imprime na tela o IMC, e a mensagem correspondente a classificacao
	}
	else {  // Se o peso nao atendeu a nenhuma das condicoes anteriores, ele e maior que 40. Logo, o programa segue para execucao do bloco abaixo
		printf("\n\nIMC = %.2f\nObesidade Grau III!", imc);  // Imprime na tela o IMC, e a mensagem correspondente a classificacao
	}	
	
	getch();  // Aguarda o usuario digitar uma tecla qualquer para encerrar a execucao do programa
}

