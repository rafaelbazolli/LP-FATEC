#include <stdio.h>
#include <math.h>

int main() {
    float matriz[4][3], novaMatriz[4][3];
    int i, j;

    // Recebendo os dados na matriz principal
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 3; j++) {
            printf("Digite o elemento na posicao [%d][%d]: ", i, j);
            scanf("%f", &matriz[i][j]);
        }
    }

    // Gerando a nova matriz com a raiz quadrada dos numeros
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 3; j++) {
            novaMatriz[i][j] = sqrt(matriz[i][j]);
        }
    }

    // Exibindo a nova matriz 
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 3; j++) {
            printf("%.2f\t", novaMatriz[i][j]);
        }
        printf("\n");
    }    
}