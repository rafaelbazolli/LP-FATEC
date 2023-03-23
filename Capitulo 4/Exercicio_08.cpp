#include<stdio.h> // Responsavel pelos comandos printf e scanf
#include<windows.h> // Responsavel pelo comando system

/* Criar em programa (CALCULADORA) em linguagem C, utilizando FUNCAO, em que calcule 
	as quatro operacoes basicas. ( + , - , / e * ).*/

// Declaracao de todas as funcoes usadas
void soma() {   // Declarando a funcao de soma. 
	//As variaveis declaradas dentro do corpo da funcao possuem escopo de funcao, ou seja, so existem aqui dentro. 
	// Portanto, dentro de outras funcoes podemos ter variaveis com os mesmos nomes, que uma nao ira interferir na outra
	float num1, num2, resultado;  // Declarando as variaveis tipo real(ponto flutuante)
	
	printf("\nDigite um numero: ");  // Imprime a mensagem na tela
	scanf("%f", &num1);  // Recebe o primeiro  numero digitado pelo usuario
	printf("\nDigite outro numero: ");  // Imprime a mensagem na tela
	scanf("%f", &num2);  // Recebe o segundo numero digitado pelo usuario
	
	resultado = num1 + num2;  // Calcula a soma, e armazena o valor em 'resultado'
	
	printf("\n%.2f + %.2f = %.2f", num1, num2, resultado);  // Exibe na tela os numeros e o resultado da soma
}

void subtracao() {  // Declarando a funcao de subtracao
	float num1, num2, resultado;  // Declarando as variaveis tipo real(ponto flutuante)
	// Note que aqui temos variaveis com os mesmos nomes da funcao soma, mas elas nao interferem nas outras devido ao seu escopo
	
	printf("\nDigite um numero: ");  // Imprime a mensagem na tela
	scanf("%f", &num1);  // Recebe o primeiro numero digitado pelo usuario
	printf("\nDigite outro numero: ");  // Imprime a mensagem na tela
	scanf("%f", &num2);  // Recebe o segundo numero digitado pelo usuario
	
	resultado = num1 - num2;  // Calcula a subtracao, e armazena o valor em 'resultado'
	
	printf("\n%.2f - %.2f = %.2f", num1, num2, resultado); // Exibe na tela os numeros e o resultado da subtracao 
}

void multiplicacao() {  // Declarando a funcao de multiplicacao
	float num1, num2, resultado;  // Declarando as variaveis tipo real(ponto flutuante)
	
	printf("\nDigite um numero: ");  // Imprime a mensagem na tela
	scanf("%f", &num1);  // Recebe o primeiro numero digitado pelo usuario
	printf("\nDigite outro numero: ");  // Imprime a mensagem na tela
	scanf("%f", &num2);  // Recebe o segundo numero digitado pelo usuario
	
	resultado = num1 * num2;  // Calcula a multiplicacao, e armazena o valor em 'resultado'
	
	printf("\n%.2f * %.2f = %.2f", num1, num2, resultado);  // Exibe na tela os numeros e o resultado da multiplicacao
}

void divisao() {  // Declarando a funcao de divisao
	float num1, num2, resultado;  // Declarando as variaveis tipo real(ponto flutuante)
	
	printf("\nDigite um numero: ");  // Imprime a mensagem na tela
	scanf("%f", &num1);  // Recebe o primeiro numero digitado pelo usuario
	printf("\nDigite outro numero: ");  // Imprime a mensagem na tela
	scanf("%f", &num2);  // Recebe o segundo numero digitado pelo usuario
	
	resultado = num1 / num2;  // Calcula a divisao, e armazena o valor em 'resultado'
	
	printf("\n%.2f / %.2f = %.2f", num1, num2, resultado);  // Exibe na tela os numeros e o resultado da divisao
}

int encerrarPrograma() {  // Declarando a funcao que encerra a execucao do programa
	printf("Encerrando o programa...");  // Imprime a mensagem na tela
		Sleep(500);  // Aguarda 0.5 segundos ate seguir para a proxima execucao
		return 0;  // Retorna 0 para a funcao main, encerrando assim a execucao atual do programa
}

main() {   // Funcao principal do programa em C
	
	int opcao, opcaoDeRetorno;  // Declarando as variaveis do tipo inteiro
	
	menu:  // Local para onde o comando goto ira apontar, caso o usuario queira retornar ao menu ou caso a opcao seja invalida
	system("cls");  // Limpa a tela do prompt
	printf("Programa CALCULADORA\n\n");  // Imprime a mensagem na tela
	printf("1 - Adicao\n2 - Subtracao\n3 - Multiplicacao\n4 - Divisao\n\n5 - Sair do programa\n\n");  // Imprime a mensagem na tela
	printf("Digite a opcao desejada: ");  // Imprime a mensagem na tela
	scanf("%i", &opcao);  // Recebe a opcao do usuario de qual operacao ele deseja realizar, ou se deseja sair do programa
	
	if(opcao == 5) {  // Se o usuario digitar a opcao 5, ele deseja sair do programa, entao executa esse bloco
		encerrarPrograma();   // Executa a funcao de encerramento do programa, que foi declarada nas linhas 63 a 66
	}
	else if((opcao <= 0) || (opcao > 5)) {  // Caso a opcao seja menor ou igual a zero, ou maior que 5, ela e invalida..
		printf("\nPor favor, selecione uma opcao valida!!!");  // Imprime a mensagem na tela
		Sleep(1000);  // Aguarda por 1 segundo ate seguir para a proxima sentenca de codigo
		goto menu;  // Aponta para a linha 73, onde o usuario vai digitar novamente uma opcao de operacao, ou saira do programa
	}
	else {  // Caso a opcao digitada pelo usuario na linha 78 seja uma operacao(digitou algo entre 1 e 4), executa o bloco
		if(opcao == 1) {  // Se o usuario digitou a opcao de adicao
			soma();  // Executa a funcao soma, que foi declarada nas linhas 8 a 20
		}
		else if(opcao == 2) {  // Se o usuario digitou a opcao de subtracao
			subtracao();  // Executa a funcao subtracao, que foi declarada nas linhas 23 a 34
		}	
		else if(opcao == 3) {  // Se o usuario digitou a opcao de multiplicacao
			multiplicacao();  // Executa a funcao de multiplicacao, que foi declarada nas linhas 37 a 48
		}
		else if(opcao == 4) {  // Se o usuario digitou a opcao de divisao
			divisao();  // Executa a funcao de divisao, que foi declarada nas linhas 50 a 61
		}
		
		menuOpcaoDeRetorno:  // Local para onde o goto da linha 113 ira apontar, caso o usuario digite uma opcao invalida de retorno
		printf("\nDeseja retornar para o menu? (1 - SIM || 2 - NAO)\n ");  // Imprime a mensagem na tela
		scanf("%i", &opcaoDeRetorno);  // Recebe a opcao do usuario de retornar ou nao para o menu
	
		if(opcaoDeRetorno == 1) {  // Se o usuario deseja retornar para o menu, executa o bloco
			goto menu;   // Aponta para a linha 73, onde o usuario ira acessar o menu e pode selecionar outras operacoes ou sair
		}
		else if(opcaoDeRetorno == 2) {  // Se o usuario nao quer retornar ao menu, ele deseja encerrar o programa
			encerrarPrograma();  // Executa a funcao de encerramento do programa, que foi declarada nas linhas 63 a 66
		}
		else {
			goto menuOpcaoDeRetorno;  // Aponta para a linha 102, onde o usuario vai digitar novamente a opcao de retorno ou nao ao menu
		}
	}
}
