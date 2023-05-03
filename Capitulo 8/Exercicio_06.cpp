#include <stdio.h>   // Responsavel pelos comandos printf e scanf

int main() {
    int matriz[3][3], novaMatriz[3][3], i, j;
    
    // Recebendo os dados na matriz principal
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("Digite o elemento de posicao [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Gerando a nova matriz, com os numeros sendo multiplicados por 5
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            novaMatriz[i][j] = matriz[i][j] * 5;
        }
    }

    // Exibindo a matriz principal
    printf("\nMatriz original:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    // Exibindo a nova matriz 
    printf("\n\nNova matriz:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d ", novaMatriz[i][j]);
        }
        printf("\n");
    }
}