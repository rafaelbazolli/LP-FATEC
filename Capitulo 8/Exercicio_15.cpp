#include <stdio.h>  // Responsavel pelos comandos printf, scanf
#include <windows.h> // Responsavel pelo comando system

int main() {
    int i, j, k, matriz[4][4], matrizNova[4][4], aux[4];

    // Laco for para receber os numeros da primeira matriz
    printf("\nMatriz Principal\n");
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            printf("Insira o numero na posicao [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    system("cls");

    // Criando a matriz nova
    for(i = 0; i < 4; i++) {
        if(i == 0) {     // Primeira linha da matriz nova
            for(j = 0; j < 4; j++) {
                matrizNova[0][j] = matriz[3][j];  // Na matriz nova, a primeira linha vai receber os elementos da ultima(-1) da matriz
            }
        }
        if(i == 1){   // Segunda linha da matriz nova
            for(k = 0, j = 3; j >= 0; k++, j--) {    // Enquanto i sera usado para iterar de 0 a 3 na matriz nova, j sera usado para ir de 3 a 0, para inverter a linha da matriz
                matrizNova[1][k] = matriz[1][j];
            }
        }
        if(i == 2) {  // Terceira linha da matriz nova
            for(k = 0, j = 3; j >= 0; k++, j--) {   // Enquanto i sera usado para iterar de 0 a 3 na matriz nova, j sera usado para ir de 3 a 0, para inverter a linha da matriz
                matrizNova[2][k] = matriz[2][j];
            }
        } 
        if(i == 3) {  // Ultima linha da matriz nova, a que deve receber a primeira linha da matriz1
            for(j = 0; j < 4; j++) {
                matrizNova[3][j] = matriz[0][j];  // Na matriz nova, a ultima linha vai receber a primeira linha da matriz
            } 
        }
    }

    // Exibindo a matriz original
    printf("\nMatriz Principal\n");
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            printf("%d  ", matriz[i][j]);
        }
        printf("\n");
    }

    // Exibindo a nova matriz
    printf("\n\nNova Matriz\n");
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            printf("%d  ", matrizNova[i][j]);
        }
        printf("\n");
    }
}
