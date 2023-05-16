#include <stdio.h> 

int main() {
    int matriz[4][4], lin, col, aux;

    for(lin = 0; lin < 4; lin++) {  // Percorendo as linhas da matriz
        for(col = 0; col < 4; col++) { // Percorrendo as colunas da matriz
            printf("Digite o elemento da posicao [%d][%d]: ", lin, col);
            scanf("%d", &matriz[lin][col]);
        }
    }

    // Mostrando a matriz completa
    printf("Matriz:\n");
    for(lin = 0; lin < 4; lin++) {
        for(col = 0; col < 4; col++) {
            printf("%d ", matriz[lin][col]);
        }
        printf("\n");
    }

    // Mostrando os elementos da diagonal principal
    printf("\nDiagonal Principal:\n");
    for(aux = 0; aux < 4; aux++) {  // Percorre as linhas da matriz
        printf("%d\n", matriz[aux][aux]);  // Cada linha tera uma impressao somente, e ela deve ser [0][0],[1][1],[2][2],[3][3]
        for(int i = 0; i <= aux; i++) {  // Para cada elemento impresso, completa o espaco anterior com print vazio " "
            printf("  ");
        }
    }
}