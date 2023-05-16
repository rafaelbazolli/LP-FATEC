#include <stdio.h>
#include <windows.h>

int main() {
    int i, j, k, matrizA[3][3], matrizB[3][3], matrizAB[3][3] = {0};

    // Laco for para receber os numeros da primeira matriz(A)
    printf("Matriz A\n\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("Digite o numero da posicao [%d][%d]: ", i, j);
            scanf("%d", &matrizA[i][j]);
        }
    }

    // Laco for para receber os numeros da primeira matriz(B)
    system("cls");
    printf("Matriz B\n\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("Digite o numero da posicao [%d][%d]: ", i, j);
            scanf("%d", &matrizB[i][j]);
        }
    }

    // Calculando a matriz AB
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            for(k = 0; k < 3; k++) {
                matrizAB[i][j] += matrizA[i][k] * matrizB[k][j];
            }
        }
    }
    

    /*Tambem pode ser resolvido sem usar um terceiro laco for, fazendo diretamente a multiplicacao:
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            matrizAB[i][j] = ((matrizA[i][0] * matrizB[0][j]) +  (matrizA[i][1] * matrizB[1][j]) + (matrizA[i][2] * matrizB[2][j]));
        }
    }
    */

    // Exibindo a matriz AB
    system("cls");
    printf("Matriz AB\n\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d  ", matrizAB[i][j]);
        }
        printf("\n");
    }   
}
