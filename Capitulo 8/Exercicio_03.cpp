#include <stdio.h>
#include <string.h>

int main() {
    int i, j, letrasA = 0, letrasE = 0, aux;
    char palavra[3][50];

    // Laco for para receber os tres nomes
    for(i = 0; i < 3; i++) {
        printf("Digite uma palavra: ");
        gets(palavra[i]);

        aux = strlen(palavra[i]);

        for(j = 0; j < aux; j++) {
            letrasA += ((palavra[i][j] == 'a') || (palavra[i][j] == 'A')) ? 1 : 0;
            letrasE += ((palavra[i][j] == 'e') || (palavra[i][j] == 'E')) ? 1 : 0;
        }
    }

    // Exibe o resultado da soma das letras A e E de todas as palavras
    printf("\n\n");
    printf("As palavras tem ao total %d letras A e %d letras E\n", letrasA, letrasE);
}
