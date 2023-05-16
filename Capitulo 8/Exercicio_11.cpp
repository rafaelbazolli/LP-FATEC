#include <stdio.h>
#include <string.h>
#include <windows.h>


int main() {
    int i, j, posicaoMaisCaro, posicaoMaisBarato;
    char pizza[10][30], maisCaro[30], maisBarato[30], auxPizza[30];
    float valores[10], aux = 0, valorMaisCaro = 0, valorMaisBarato;

    // Laco for para receber os valores
    for(i = 0; i < 10; i++) {
        fflush(stdin);
        printf("Digite o sabor da pizza: ");
        gets(pizza[i]);
        printf("Digite o valor da pizza(R$): ");
        scanf("%f", &valores[i]);

        // Validando se o valor recebido e o mais caro ate o momento
        if(valores[i] > valorMaisCaro) {
            valorMaisCaro = valores[i];
            strcpy(maisCaro, pizza[i]);
            posicaoMaisCaro = i; 
        }

        // Validando se o valor recebido e o mais barato ate o momento
        if(i == 0) {  // Se estiver na primeira iteracao do laco, o valor atual sera sempre o mais barato ate o momento
            valorMaisBarato = valores[i];
            strcpy(maisBarato, pizza[i]);
            posicaoMaisBarato = i;
        } else {  // Nas demais iteracoes, sera necessario comparar se o valor atual lido e menor que o valorMaisBarato 
            if(valores[i] < valorMaisBarato) {
                valorMaisBarato = valores[i];
                strcpy(maisBarato, pizza[i]);
                posicaoMaisBarato = i;
            }
        }
    }

    // Trocando as posicoes
    if(valorMaisCaro == valorMaisBarato);   // Se os valores forem iguais, nao ha necessidade de inverter posicoes
    else {
        // Invertendo o nome da pizza mais cara com a mais barata
        strcpy(auxPizza, pizza[posicaoMaisCaro]);  // Armazenando na variavel auxiliar a pizza que esta na posicao do mais caro
        strcpy(pizza[posicaoMaisCaro], pizza[posicaoMaisBarato]); // Armazenando a pizza mais barata no lugar da mais cara
        strcpy(pizza[posicaoMaisBarato], auxPizza); // Armazenando a pizza mais cara, que estava na variavel auxiliar, no lugar da mais barata

        // Invertendo o preco da pizza mais cara com a mais barata
        aux = valores[posicaoMaisCaro];  // Armazenando na variavel auxiliar o valor mais caro
        valores[posicaoMaisCaro] = valores[posicaoMaisBarato]; // Armazenando o valor mais barato no lugar do mais caro
        valores[posicaoMaisBarato] = aux;  // Armazenando o valor do mais caro, que estava na variavel auxiliar, no lugar da variavel mais barata
    }

    // Laco for para exibir o cardapio
    printf("\n\n-=-=-=-=-=-=-==-=-=-=-=-==-=-=-==-=-=-=-\n\tCARDAPIO\n");
    for(i = 0; i < 10; i++) {
        printf("Pizza de %s || R$ %.2f\n", pizza[i], valores[i]);
    }

}