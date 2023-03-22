#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<time.h>

main() {
	int vc1, vc2, vc3, vc4, vc5, pc1, pc2, pc3, pc4, pc5, somaVC = 0, somaPC = 0, opcaoSortearNovamente, sorteioAtual = 0;
	bool fim = false, finalizando = false;  // booleano pra encerrar o programa por estourar pontuacao, ou por pedido do usuario

	srand(time(NULL));  // Semente random

	// Sorteio inicial, 2 valores para voce, 2 valores para o PC
	vc1 = (rand() % 10) + 1;
	vc2 = (rand() % 10) + 1;
	pc1 = (rand() % 10) + 1;
	pc2 = (rand() % 10) + 1;
	somaVC = somaVC + vc1 + vc2;
	somaPC = somaPC + pc1 + pc2;
	sorteioAtual = 1;

	menu:
	system("cls");
	printf("\nPrograma 21\n\n");
	if(sorteioAtual == 1) {
		if(finalizando == true) {
			printf("\nVC = %d + %d = %d", vc1, vc2, somaVC);
			printf("\nPC = %d + %d = %d", pc1, pc2, somaPC);

			goto validarVencedor;
		} else {
			printf("\nVC = %d + %d = %d", vc1, vc2, somaVC);
			printf("\nPC = X + X = X");
		}
	} else if (sorteioAtual == 2) {
		if((finalizando == true) || (fim == true)) {
			printf("\nVC = %d + %d + %d = %d", vc1, vc2, vc3, somaVC);
			printf("\nPC = %d + %d + %d = %d", pc1, pc2, pc3, somaPC);

			if(finalizando == true) {
				goto validarVencedor;
			} else if(fim == true) {
				goto validarQuemEstourou;
			}
		} else {
			printf("\nVC = %d + %d + %d = %d", vc1, vc2, vc3, somaVC);
			printf("\nPC = X + X + X = X");
		}		
	} else if(sorteioAtual == 3) {
		if((finalizando == true) || (fim == true)) {
			printf("\nVC = %d + %d + %d + %d = %d", vc1, vc2, vc3, vc4, somaVC);
			printf("\nPC = %d + %d + %d + %d = %d", pc1, pc2, pc3, pc4, somaPC);

			if(finalizando == true) {
				goto validarVencedor;
			} else if(fim == true) {
				goto validarQuemEstourou;
			}
		} else {
			printf("\nVC = %d + %d + %d + %d = %d", vc1, vc2, vc3, vc4, somaVC);
			printf("\nPC = X + X + X + X = X");
		}
	} else if(sorteioAtual == 4) {
		if((finalizando == true) || (fim == true)) {
			printf("\nVC = %d + %d + %d + %d = %d", vc1, vc2, vc3, vc4, somaVC);
			printf("\nPC = %d + %d + %d + %d = %d", pc1, pc2, pc3, pc4, somaPC);

			if(finalizando == true) {
				goto validarVencedor;
			} else if(fim == true) {
				goto validarQuemEstourou;
			}
		} else {
			printf("\nVC = %d + %d + %d + %d + %d = %d", vc1, vc2, vc3, vc4, vc5, somaVC);
			printf("\nPC = X + X + X + X + X = X");
		}		
	}
	
	menuSortearNovamente:
	printf("\n\nDeseja sortear mais um numero? \nDigite (1 - SIM || 2 - NAO)\n");
	scanf("%d", &opcaoSortearNovamente);

	if(opcaoSortearNovamente == 1) {
		if(sorteioAtual == 1) {
			sorteioAtual = 2; // Chegando nesse ponto, o sorteio atual e 1, agora falta setar como o segundo sorteio
			vc3 = (rand() % 10) + 1;
			pc3 = (rand() % 10) + 1;
			somaVC = somaVC + vc3;
			somaPC = somaPC + pc3;

			if((((somaVC > 21) && (somaPC > 21))) || (somaPC > 21) || (somaVC > 21)) {  // Se alguma soma ultrapassou 21, 'fim' e alterada para true
				fim = true;
			}
			goto menu;

		} else if(sorteioAtual == 2) {
			sorteioAtual = 3;
			vc4 = (rand() % 10) + 1;
			pc4 = (rand() % 10) + 1;
			somaVC = somaVC + vc4;
			somaPC = somaPC + pc4;

			if((((somaVC > 21) && (somaPC > 21))) || (somaPC > 21) || (somaVC > 21)) {
				fim = true;
			}
			goto menu;

		} else if(sorteioAtual == 3) {
			sorteioAtual = 4;
			vc5 = (rand() % 10) + 1;
			pc5 = (rand() % 10) + 1;
			somaVC = somaVC + vc5;
			somaPC = somaPC + pc5;

			if((((somaVC > 21) && (somaPC > 21))) || (somaPC > 21) || (somaVC > 21)) {
				fim = true;
			}
			goto menu;
		}
	} else if (opcaoSortearNovamente == 2) {   // Se o usuario nao quer mais sortear outro numero, variavel booleana 'finalizando' e alterada
		finalizando = true;
		goto menu;
	} else {   // Se o usuario digitar uma opcao diferente de 1 ou 2 na linha 80, entra no bloco e retorna para pedir a opcao novamente
		goto menuSortearNovamente;
	}

	validarVencedor:  // So vem pra esse trecho se nenhuma soma passou de 21, e o encerramento veio por acao do usuario digitando opcao 2
	if(somaVC > somaPC) {
		printf("\nVoce GANHOU!!! Sua pontuacao foi maior que a do PC!");
		goto fim;
	} else if (somaPC > somaVC) {
		printf("\nVoce PERDEU!!! Sua pontuacao foi menor que a do PC!");
		goto fim;
	} else {
		printf("\nEMPATE!!! Sua pontuacao foi a mesma a do PC!");
		goto fim;
	}

	validarQuemEstourou:  // So vem para esse trecho se alguma das duas somas, a do jogador ou do PC, for maior que 21
	if((somaPC > 21) && (somaVC > 21)) {
		printf("\nAmbos PERDERAM!!! A sua pontuacao e a do PC ultrapassaram 21!");
		goto fim;
	} else if(somaPC > 21) {
		printf("\nVoce GANHOU!!! A pontuacao do PC ultrapassou 21!");
		goto fim;
	} else if(somaVC > 21) {
		printf("\nVoce PERDEU!!! Sua pontuacao ultrapassou 21!");
		goto fim;
	}
	fim:
	getch();
}
