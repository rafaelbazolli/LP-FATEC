#include<stdio.h> // Responsavel pelos comandos printf e scanf
#include<conio.h> // Responsavel pelo comando getch
#include<windows.h> // Responsavel pelo comando system

main(){
	/* Criar um programa em linguagem C que para ajudar um comerciante que comprou um produto e quer vendê-lo com lucro de 45% se o valor da
	compra for menor que R$ 20,00; caso contrário, o lucro será de 30%. Entrar com o valor do produto e imprimir o valor da venda.*/
	
	float valorProduto, valorVenda;  // Declarando as variaveis do tipo real(ponto flutuante)
	
	printf("\nDigite o valor do produto: "); // Imprime a mensagem na tela
	scanf("%f", &valorProduto);  // Recebe o valor do produto digitado pelo usuario
	
	if(valorProduto >= 20) {  // Se o valor for maior ou igual a 20, executa o bloco
		valorVenda = valorProduto * 1.3;
	}
	else { // Se o  valor nao atendeu a condicao acima, executa o bloco abaixo
		valorVenda = valorProduto * 1.45;
	}
	
	printf("\n\nO valor da venda e R$ %.2f", valorVenda); // Imprime a mensagem na tela com o valor da venda ja calculado
	
	getch(); // Aguarda o usuario digitar uma tecla qualquer para encerrar a execucao do programa
}

