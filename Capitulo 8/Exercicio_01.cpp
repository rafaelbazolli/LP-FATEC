#include<stdio.h>

main() {
    int i;
    char palavra[3][20];

    // Laco for para receber as tres palavras
    for(i = 0; i < 3; i++) {
        printf("Digite uma palavra: ");
        gets(palavra[i]);
    }

    // Laco for para exibir as palavras
    printf("\nAs palavras digitadas foram: ");
    for(i = 0; i < 3; i++) {
        printf("\n%s", palavra[i]);
    }
}