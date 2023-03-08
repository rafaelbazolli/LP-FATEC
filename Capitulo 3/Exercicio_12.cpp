#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<time.h>

main(){
	/* PROGRAMA para jogar 21
	1) Os números não podem ser iguais entre eles.
	2) Os números a serem sorteados são de 01 a 10.
	3) Nenhum dos números podem ser 0.
	4) Responder: Quem ganhou ?
	5) Por que ganhou ? */

	// v1 ao v6 sao os valores aleatorios para voce, p1 ao p6 sao os valores para o PC. x1 ao x4 sao os valores iniciais obriatorios
	int outroNumero, voce = 0, pc = 0, x1, x2, x3, x4, v1, v2, v3, v4, v5, v6, p1, p2, p3, p4, p5, p6;

	printf("Programa 21\n");
	
	gerarNumero:
	srand(time(NULL));
	x1 = (rand() % 10) + 1;
	x2 = (rand() % 10) + 1;
	x3 = (rand() % 10) + 1;
	x4 = (rand() % 10) + 1;

	voce = voce + x1 + x2;
	pc = pc + x3 + x4;

	exibicao1:
	printf("VC = %f + %f = %f", x1, x2, voce);
	printf("\nPC = X + X = X");
	printf("\nDeseja sortear mais um numero? (1 - SIM // 2 - NAO) \n ");
	scanf("%i", outroNumero);
	goto validarOpcaoDoUsuario;


	exibicao2:
	printf("VC = %f + %f = %f", x1, x2, voce);
	printf("\nPC = X + X = X");
	printf("\nDeseja sortear mais um numero? (1 - SIM // 2 - NAO) \n ");
	scanf("%i", outroNumero);
	goto validarOpcaoDoUsuario;


	exibicao3:
	printf("VC = %f + %f = %f", x1, x2, voce);
	printf("\nPC = X + X = X");
	printf("\nDeseja sortear mais um numero? (1 - SIM // 2 - NAO) \n ");
	scanf("%i", outroNumero);
	goto validarOpcaoDoUsuario;
	
	exibicao4:
	printf("VC = %f + %f = %f", x1, x2, voce);
	printf("\nPC = X + X = X");
	printf("\nDeseja sortear mais um numero? (1 - SIM // 2 - NAO) \n ");
	scanf("%i", outroNumero);
	goto validarOpcaoDoUsuario;

	exibicao5:
	printf("VC = %f + %f = %f", x1, x2, voce);
	printf("\nPC = X + X = X");
	printf("\nDeseja sortear mais um numero? (1 - SIM // 2 - NAO) \n ");
	scanf("%i", outroNumero);
	goto validarOpcaoDoUsuario;

	exibicao6:
	printf("VC = %f + %f = %f", x1, x2, voce);
	printf("\nPC = X + X = X");
	printf("\nDeseja sortear mais um numero? (1 - SIM // 2 - NAO) \n ");
	scanf("%i", outroNumero);
	goto validarOpcaoDoUsuario;


	validarOpcaoDoUsuario:

	if(outroNumero == 1) {

	}
	else 
		if(outroNumero != 2) {
			printf("Por favor, digite uma opcao valida!");
			Sleep(1000);
			goto exibicao1:
		}
		else {
			printf("VC = %f + %f = %f", x1, x2, voce);
	printf("\nPC = X + X = X");
		}




	getch();
}
