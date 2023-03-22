#include<stdio.h> // Responsavel pelos comandos printf e scanf
#include<conio.h> // Responsavel pelo comando getch
#include<windows.h> // Responsavel pelo comando system

main() {
	float nota1, nota2, media;  // Declarando as variaveis tipo real(ponto flutuante)
	char conceito;  // Declarando a variavel tipo caractere, que recebera a nota conceito
	
	menu:    // Local para onde o goto da linha 36 aponta, caso os valores das notas sejam fora do range considerado valido
	system("cls");  // Limpa a tela do prompt
	printf("Programa que calcula a media e nota conceito!\n\n"); // Imprime o texto na tela
	printf("Digite a primeira nota: ");   // Imprime o texto na tela
	scanf("%f", &nota1);  // Recebe a nota1 digitada pelo usuario
	printf("Digite a segunda nota: ");   // Imprime o texto na tela
	scanf("%f", &nota2);  // Recebe a nota1 digitada pelo usuario
	
	media = (nota1 + nota2) / 2;  // Calcuala a media das notas
	
	if((media >= 0) && (media < 4)) { 
		conceito = 'E';  // Altera o valor da variavel para a nota conceito correspondente
	} 
	else if((media >= 4) && (media < 6)) { 
		conceito = 'D';  // Altera o valor da variavel para a nota conceito correspondente
	} 
	else if((media >= 6) && (media < 7.5)) { 
		conceito = 'C';  // Altera o valor da variavel para a nota conceito correspondente
	}
	else if((media >= 7.5) && (media < 9)) { 
		conceito = 'B';  // Altera o valor da variavel para a nota conceito correspondente
	}
	else if((media >= 9) && (media <= 10)) { 
		conceito = 'A';  // Altera o valor da variavel para a nota conceito correspondente
	} else {   // Caso a nota de maior que 10, ou menor que 0, o usuario digitou notas invalidas. Nesse caso, executa o bloco abaixo
		printf("Desculpe, mas alguma das notas digitadas foi incorreta, informe as notas novamente.");
		Sleep(2000);  // Aguarda 2 segundos antes de seguir para a proxima instrucao
		goto menu;  // Retorna para o menu(linha 9), e solicita novamente as notas para o usuario
	}
	
	printf("\nMedia = %.2f\nNota Conceito = %c", media, conceito);
	
	getch();  // Aguarda o usuario digitar uma tecla qualquer para encerrar a execucao do programa
}

