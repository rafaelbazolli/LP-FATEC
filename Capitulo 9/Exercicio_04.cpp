#include <stdio.h>
#include <string.h>

main() {
    char palavra1[20], palavra2[20], letras[4], palavraFinal[25];

    printf("Digite a primeira palavra: ");
    gets(palavra1);
    printf("Digite a segunda palavra: ");
    gets(palavra2);

    // Copiando para a string letras, os 3 primeiros caracteres da palavra1
    // Note que, estamos usando as variaveis sem o [], nesse caso esses parâmetros sao ponteiros pra primeira posicao(0) da string
    strncpy(letras, palavra1, 3);

    // Concatenando palavra2 com a string letras
    // strcat so concatena duas strings de cada vez, entao passamos palavra2 para a final, e depois letas para a final 
    strcat(palavraFinal, palavra2);
    strcat(palavraFinal, letras);

    // Exibindo as palavras
    printf("\n\nPalavras digitadas: ");
    printf("\nPrimeira palavra: %s\nSegunda palavra: %s", palavra1, palavra2);
    printf("\nTres primeiras letras da primeira palavra: %s", letras);
    printf("\nConcatenando a segunda palavra com as 3 letras: %s", palavraFinal);
}