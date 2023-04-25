#include<stdio.h>

main() {
    int i;
    char palavra[3][30];

    // Laco for para receber as tres palavras
    for(i = 0; i < 3; i++) {
        printf("Digite uma palavra: ");
        gets(palavra[i]);
    }

    // Laco for para exibir as palavras na ordem inversa
    printf("\nEm ordem inversa: ");
    for(i = 2; i >= 0; i--) {
        printf("\n%s", palavra[i]);
    }
}