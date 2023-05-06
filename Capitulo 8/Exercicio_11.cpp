#include <stdio.h>  // Responsavel pelos comandos printf, scanf
#include <string.h>  // Responsavel pelos comandos gets 
#include <windows.h> // Responsavel pelo comando system


int main() {
    int i, j, codigoPedido[10], qtd, pedidoMaiorVenda, pedidoMenorVenda;
    float  menorVenda, valor[10], mediaFaturamento, valorUnit, aux, maiorVenda = 0, faturamentoTotal = 0;
    char pizza[10][30];
    
    // Laco for para realizar a leitura dos pedidos
    for(i = 0; i < 10; i++) {
        system("cls");
        printf("Digite o numero do pedido: ");
        scanf("%d", &codigoPedido[i]);
        fflush(stdin);
        printf("Digite o sabor da pizza: ");
        gets(pizza[i]);
        printf("Quantas pizzas foram vendidas nesse pedido: ");
        scanf("%d", &qtd);
        printf("Digite o valor unitario da pizza: ");
        scanf("%f", &valorUnit);

        aux = (qtd * valorUnit);  // Calculando o valor total e armazenando em aux
        valor[i] = (aux > 200) ? (aux * 0.9) : aux;  // Validando se o valor passou de 200, e aplicando o desconto de 10% 
        faturamentoTotal += valor[i];    // Acumulador para o valor total do faturamento no dia

        
        // Validando se a venda atual e maior que a atual maior
        if(valor[i] > maiorVenda) {
            maiorVenda = valor[i];
            pedidoMaiorVenda = codigoPedido[i];
        }

        // Validando se a venda atual e menor que a atual menor
        if(i = 0)
            menorVenda = valor[i];
        else {
            if(valor[i] < menorVenda) {
                menorVenda = valor[i];
                pedidoMenorVenda = codigoPedido[i];
            }
        }
    }

    mediaFaturamento = (faturamentoTotal / 10);  // Calculando a media de faturamento no dia
    system("cls");
    printf("\nPedidos\n");
    // Laco for para exibir todos os pedidos 
    for(i = 0; i < 10; i++) {
        printf("[%d] - %d pizzas de %s || Total = R$ %.2f\n", codigoPedido[i], qtd, pizza[i], valor[i]);
    }
    printf("\nA maior venda foi o pedido %d, no valor de R$ %.2f.", pedidoMaiorVenda, maiorVenda);
    printf("\nA menor venda foi o pedido %d, no valor de R$ %.2f.", pedidoMenorVenda, menorVenda);
    printf("\nA media de faturamento no dia foi de R$ %.2f.", mediaFaturamento);
    printf("\nTotal de faturamento: R$ %.2f.", faturamentoTotal);
}
