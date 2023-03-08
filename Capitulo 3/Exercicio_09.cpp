#include<stdio.h>
#include<windows.h>
#include<conio.h>

main(){
	/* Criar um programa em linguagem C que para ajudar um comerciante que comprou um produto e quer vendê-lo com lucro de 45% se o valor da
	compra for menor que R$ 20,00; caso contrário, o lucro será de 30%. Entrar com o valor do produto e imprimir o valor da venda.*/
	
	float valorProduto, valorVenda;
	
	printf("\nDigite o valor do produto: ");
	scanf("%f", &valorProduto);
	
	if(valorProduto >= 20) {
		valorVenda = valorProduto * 1.3;
	}
	else {
		valorVenda = valorProduto * 1.45;
	}
	
	printf("\n\nO valor da venda e R$ %.2f", valorVenda);
	
	getch();
}
