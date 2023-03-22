#include<stdio.h> // Responsavel pelos comandos printf e scanf
#include<conio.h> // Responsavel pelo comando getch
#include<windows.h> // Responsavel pelo comando system
#include<time.h>  // Responsavel pelo comando Time

main() {
	// Variaveis
	// Declarando as variaveis inteira, vc1 ao vc5 sao minhas jogadas, pc1 ao pc5 sao jogadas do PC
	int vc1, vc2, vc3, vc4, vc5, pc1, pc2, pc3, pc4, pc5, somaVC = 0, somaPC = 0, opcaoSortearNovamente, sorteioAtual = 0;
	bool fim = false, finalizando = false;  // booleano pra encerrar o programa por estourar pontuacao, ou por pedido do usuario

	srand(time(NULL));  // Semente do random para gerar novos aleatorios a cada execucao do programa

	// Sorteio inicial, 2 valores para voce, 2 valores para o PC, e suas atribuicoes na variavel de soma
	vc1 = (rand() % 10) + 1;  // Dessa forma o rand sorteia um valor entre 0 e 9, e adiciona 1 ao final, entao sera 0, nem maior que 10
	vc2 = (rand() % 10) + 1;
	pc1 = (rand() % 10) + 1;
	pc2 = (rand() % 10) + 1;
	somaVC = somaVC + vc1 + vc2;  // Acumulador, somatoria do jogador
	somaPC = somaPC + pc1 + pc2;  // Acumulador, somatoria do PC
	sorteioAtual = 1;

	menu:   // Local para onde a maior parte dos goto do programa sao apontados. Visualmente e onde o programa para o usuario
	system("cls");  // Limpa a tela do prompt
	printf("\nPrograma 21\n\n");  // Imprime o texto na tela
	if(sorteioAtual == 1) {  // Nesse ponto a unica coisa que ocorreu foi o sorteio inicial(linha 15 a 21), entao ele executa o bloco abaixo
		if(finalizando == true) {  // Nesse ponto, se o usuario optou por nao sortear mais, vai exibir somente o que ocorreu no sorteio inicial(linhas 15 a 21) e entra no bloco
			printf("\nVC = %d + %d = %d", vc1, vc2, somaVC);  // Imprime na tela os sorteados na rodada inicial para voce
			printf("\nPC = %d + %d = %d", pc1, pc2, somaPC);  // Imprime na tela os sorteados na rodada inicial para o PC
			goto validarVencedor;  // Vai para a linha 152, validar qual dos dois ganhou, ou se houve empate

		} else {
			printf("\nVC = %d + %d = %d", vc1, vc2, somaVC);
			printf("\nPC = X + X = X", pc1, pc2, somaPC);
		}
	} else if (sorteioAtual == 2) {
		if(finalizando == true) {
			printf("\nVC = %d + %d + %d = %d", vc1, vc2, vc3, somaVC);
			printf("\nPC = %d + %d + %d = %d", pc1, pc2, pc3, somaPC);

			goto validarVencedor; // Vai para a linha 152, validar qual dos dois ganhou, ou se houve empate
		}
		if(fim == true) { 
			printf("\nVC = %d + %d + %d = %d", vc1, vc2, vc3, somaVC);
			printf("\nPC = %d + %d + %d = %d", pc1, pc2, pc3, somaPC);
			
			goto validarQuemEstourou;  // Vai para a linha 161, validar qual dos dois perdeu, ou se ambos perderam
		} else {
			printf("\nVC = %d + %d + %d = %d", vc1, vc2, vc3, somaVC);
			printf("\nPC = X + X + X = X", pc1, pc2, pc3, somaPC);
		}		
	} else if(sorteioAtual == 3) {
		if(finalizando == true) {
			printf("\nVC = %d + %d + %d + %d = %d", vc1, vc2, vc3, vc4, somaVC);
			printf("\nPC = %d + %d + %d + %d = %d", pc1, pc2, pc3, pc4, somaPC);

			goto validarVencedor; // Vai para a linha 152, validar qual dos dois ganhou, ou se houve empate
		}
		if(fim == true) { 
			printf("\nVC = %d + %d + %d + %d = %d", vc1, vc2, vc3, vc4, somaVC);
			printf("\nPC = %d + %d + %d + %d = %d", pc1, pc2, pc3, pc4, somaPC);
			goto validarQuemEstourou;  // Vai para a linha 161, validar qual dos dois perdeu, ou se ambos perderam
		} else {
			printf("\nVC = %d + %d + %d + %d = %d", vc1, vc2, vc3, vc4, somaVC);
			printf("\nPC = X + X + X + X = X");
		}
	} else if(sorteioAtual == 4) {
		if(finalizando == true) {
			printf("\nVC = %d + %d + %d + %d + %d = %d", vc1, vc2, vc3, vc4, vc5, somaVC);
			printf("\nPC = %d + %d + %d + %d + %d = %d", pc1, pc2, pc3, pc4, pc5, somaPC);

			goto validarVencedor;  // Vai para a linha 152, validar qual dos dois ganhou, ou se houve empate
		}
		if(fim == true) { 
			printf("\nVC = %d + %d + %d + %d + %d = %d", vc1, vc2, vc3, vc4, vc5, somaVC);
			printf("\nPC = %d + %d + %d + %d + %d = %d", pc1, pc2, pc3, pc4, pc5, somaPC);
			goto validarQuemEstourou;  // Vai para a linha 161, validar qual dos dois perdeu, ou se ambos perderam
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

			if(((somaVC > 21) || (somaPC > 21))) {
				fim = true;
				goto menu;
			} else if((somaVC > 21) && (somaPC > 21)) {
				fim = true;
				goto menu;
			}

			goto menu;

		} else if(sorteioAtual == 2) {
			sorteioAtual = 3;
			vc4 = (rand() % 10) + 1;
			pc4 = (rand() % 10) + 1;
			somaVC = somaVC + vc4;
			somaPC = somaPC + pc4;

			if(((somaVC > 21) || (somaPC > 21))) {
				fim = true;
				goto menu;
			} else if((somaVC > 21) && (somaPC > 21)) {
				fim = true;
				goto menu;
			}

			goto menu;

		} else if(sorteioAtual == 3) {
			sorteioAtual = 4;
			vc5 = (rand() % 10) + 1;
			pc5 = (rand() % 10) + 1;
			somaVC = somaVC + vc5;
			somaPC = somaPC + pc5;

			if(((somaVC > 21) || (somaPC > 21))) {
				fim = true;
				goto menu;
			} else if((somaVC > 21) && (somaPC > 21)) {
				fim = true;
				goto menu;
			}

			goto menu;
			
		}
	} else if (opcaoSortearNovamente == 2) {
		finalizando = true;
		goto menu;
	} else {
		goto menuSortearNovamente;
	}

	validarVencedor:
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

	validarQuemEstourou:
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
