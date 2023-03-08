#include<stdio.h>
#include<conio.h>
#include<windows.h>

main() {
	/* Criar tres programas em linguagem C que identifique e que ordene 2, 3 e 4 numeros em ordem decrescente. */	
	int quant;
	float num1, num2, num3, num4, maior, menor, meio, meio2;
	/* A sequencia no decorrer do programa sera: menor meio meio2 maior */
	

	// Selecionar quantos valores deseja ordenar
	menu:
	system("cls");
	printf("Programa para ordenar valores\n");
	printf("\nQuantos valores voce deseja ordenar(2, 3 ou 4)? ");
	scanf("%i", &quant);

	if(quant > 4 || quant < 2) {
		printf("Voce inseriu um valor invalido, tente novamente.");
		Sleep(1500);
		goto menu;
	}
	else {
		printf("\nDigite o primeiro numero: ");
		scanf("%f", &num1);

		// Como num1 e unico, entao ele e o maior e o menor ate o momento
		maior = num1;
		menor = num1;

		printf("\nDigite o segundo numero: ");
		scanf("%f", &num2);

		//Nesse ponto ocorre a comparacao inicial
		if(num2 > maior) {
			maior = num2;
		}
		else
			if(num2 < menor) {
				menor = num2;
			}
		// Para caso num1 == num2, as associacoes acima nao terao impacto, pois qualquer que seja o maior ou menor nao muda nada

		if (quant == 2) { // Se a quantidade de valores a ordenar for 2
			//Exibir os resultados
			if (num1 == num2) {
				printf("Os dois valores sao iguais, ambos sao %f.", num1);
			}
			else {
			printf("\n\n %f %f", maior, menor);
			}
		}
		else 
			if(quant == 3) { // Se a quantidade de valores a ordenar for 3
				printf("\nDigite o terceiro numero: ");
				scanf("%f", &num3);

				if(num3 > maior) {
					meio = maior;
					maior = num3;
				} 
				else
					if(num3 < menor){
						meio = menor;
						menor = num3;
					}
					else { // Se num3 nao for menor, nem maior, entao ele e igual aos outros, e assume a posicao do meio
						meio = num3;
					}
				// Exibir os resultados 
				if (maior == menor == meio) {
					printf("Os tres valores sao iguais, ambos sao %f.", num1);
				}
				else {
					printf("\n\n %f %f %f", maior, meio, menor);
				}	

			}
			else
				if(quant == 4) { // Se a quantidade de valores a ordenar for 4
					printf("\nDigite o terceiro numero: ");
					scanf("%f", &num3);
					printf("\nDigite o quarto numero: ");
					scanf("%f", &num4);

					// Verificando se sao iguais
					if(num3 == num4) {
						meio = num3;
						meio2 = num4;
					}
					
					// Verificando qual e o maior
					if(num3 > num4 && num3 > maior) {
						meio2 = maior;
						maior = num3;
					}

					if(num4 > num3 && num4 > maior) {
						meio2 = maior;
						maior = num4;
					}
					
					// Verificando qual e o menor 
					if(num3 < num4 && num3 < menor) {
						meio2 = meio;
						meio = menor;
						menor = num3;
					} 

					if(num4 < num3 && num4 < menor) {
						meio2 = meio;
						meio = menor;
						menor = num4;
					}
					
					// Entre num3 e num4, se nenhum deles for o menor ou o maior de todos...


					// Exibir os resultados
					if (num1 == num2 == num3 == num4) {
						printf("Os quatro valores sao iguais, ambos sao %f.", num1);
					}
					else {
						printf("\n\n%f %f %f %f", maior, meio, meio2, menor);
					}	

				}
		}
	getch();
}
