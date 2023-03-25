#include<stdio.h> // Responsavel pelo comando printf e scanf
#include<conio.h> // Responsavel pelo comando getch
#include<windows.h> // Responsavel pelo comando system

main() {
	/* Uma pizzaria precisa de um programa em C, usando WHILE, que leia as vendas realizadas no dia, recebendo o numero do pedido, e seu valor total. 
	Ao final mostre a maior venda, a menor venda, quantos pedidos foram registrados, e a média do valor das vendas. Condição de parada é o numero do pedido = 0. */
	
	int numeroPedido, contPedidos = 0;  // Declarando as variaveis do tipo inteiro
	float valor, maiorVenda, menorVenda, totalVendas = 0, mediaVendas;  // Declarando as variaveis do tipo real(ponto flutuante)
	printf("\nPrograma para gerenciar pedidos da Pizzaria!\n\n");  // Imprime a mensagem na tela
	
	while(true) {  // Cria um laco infinito
		//system("cls");  // Limpa a tela do prompt
		
		printf("\nDigite o numero do pedido: ");  // Imprime a mensagem na tela
		scanf("%d", &numeroPedido);  // Recebe o numero do pedido fornecido pelo usuario
		
		if(numeroPedido == 0) {  // Se o numero do pedido for 0, e a condicao de saida do programa. Executa o bloco abaixo
			break;  // Comando break interrompe a execucao do laco, e salta para fora do while
		}
		
		printf("Digite o valor da venda(R$): ");  // Imprime a mensagem na tela
		scanf("%f", &valor);  // Recebe o numero do pedido fornecido pelo usuario
		
		contPedidos += 1;  // Contador para o numero de pedidos
		totalVendas += valor;  // Acumulador para o valor das vendas
		
		if(contPedidos == 1) {  // Na primeira iteracao, qualquer que seja o valor digitado pelo usuario, sera o maior e o menor ate o momento
			maiorVenda = valor;
			menorVenda = valor;
		}
		
		if(valor > maiorVenda) {  // Se  o valor digitado for maior que a maior venda, executa o bloco
			maiorVenda = valor;
		} else if(valor < menorVenda) {  // Se o valor digitado for menor que a menor venda, executa o bloco
			menorVenda = valor;
		}
	}
	
	mediaVendas = totalVendas / contPedidos;  // Calcula a media de valor das vendas no dia
	
	printf("\n---*---*---*---*---*---*---*\n");  // Imprime a mensagem na tela
	printf("\nMaior venda: R$ %.2f\nMenor venda: R$ %.2f\nPedidos Registrados: %d\nValor medio das vendas: %.2f", maiorVenda, menorVenda, contPedidos, mediaVendas);
	// O comando acima exibe a mensagem com todos os valores ja calculados
	
	getch(); // Aguarda o usuario digitar uma tecla qualquer para encerrar a execucao do programa
}

