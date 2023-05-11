#include <stdio.h>  // Responsavel pelos comandos printf, scanf
#include <string.h>  // Responsavel pelos comandos gets 
#include <windows.h> // Responsavel pelo comando system


int main() {
    int i, j, medalhas[10][3], maiorOuro = 0, maiorPrata = 0, maiorBronze = 0, indiceMelhor;  // medalhas[x][0] = ouro, medalhas[x][1] = prata, medalhas[x][2] = bronze
    float custoTotal = 0, custos[3];
    char pais[10][30], melhor[30];

    // Laco for para receber as informacoes de cada pais
    for(i = 0; i < 10; i++) {
        fflush(stdin);
        printf("Digite o nome do [%d] Pais: ", i+1);
        gets(pais[i]);
        printf("Medalhas de ouro: ");
        scanf("%d", &medalhas[i][0]);
        printf("Medalhas de prata: ");
        scanf("%d", &medalhas[i][1]);
        printf("Medalhas de bronze: ");
        scanf("%d", &medalhas[i][2]);
        system("cls");

        if(medalhas[i][0] > maiorOuro) {  // Se as medalhas de ouro do atual forem maiores que a anterior, armazena o indice dele
            indiceMelhor = i;
            maiorOuro = medalhas[i][0];
            maiorPrata = medalhas[i][1];
            maiorBronze = medalhas[i][2];
        } else if(medalhas[i][0] == maiorOuro) {   // Se as medalhas de ouro do atual forem iguais as do maior, precisa validar as de prata
            if(maiorPrata < medalhas[i][1]) {
                indiceMelhor = i;
                maiorPrata = medalhas[i][1];
                maiorBronze = medalhas[i][2];
            } else if(maiorPrata == medalhas[i][1]) { // Se as medalhas de prata tambem forem iguais a do maior, precisa validar as de bronze
                if(maiorBronze < medalhas[i][2]) {
                    indiceMelhor = i;
                    maiorBronze = medalhas[i][2];
                }
            }
        }
    }

    // Laco for para calcular os custos
    for(i = 0; i < 10; i++) {     
        // Medalhas de ouro
        custos[0] += medalhas[i][0] * 110;   // Posicao 0 do array de custo vai armazenar o valor total das medalhas ouro
        // Medalhas de prata
        custos[1] += medalhas[i][1] * 75.5;  // Posicao 1 do array de custo vai armazenar o valor total das medalhas prata
        // Medalhas de bronze
        custos[2] += medalhas[i][2] * 42;  // Posicao 2 do array de custo vai armazenar o valor total das medalhas bronze
    }
    custoTotal = (custos[0] + custos[1] + custos[2]);
	
    printf("\n\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n\nTotal de custos das premiacoes:\n\n");
    printf("\nCusto das medalhas de Ouro: R$ %.2f", custos[0]);
    printf("\nCusto das medalhas de Prata: R$ %.2f", custos[1]);
    printf("\nCusto das medalhas de Bronze: R$ %.2f", custos[2]);
    printf("\nCusto total: R$ %.2f", custoTotal);
    
    printf("\n\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n\nVencedor da Competicao:\n\n");
    printf("Pais: %s\nMedalhas de Ouro = %d", pais[indiceMelhor], maiorOuro);
    printf("\nMedalhas de Prata = %d", maiorPrata);
    printf("\nMedalhas de Bronze = %d", maiorBronze);
    
    
}
