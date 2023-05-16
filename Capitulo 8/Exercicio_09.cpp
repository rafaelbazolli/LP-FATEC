#include <stdio.h>
#include <string.h>  // Responsavel pelos comandos gets e strlen
#include <ctype.h>  // Responsavel pelo comando tolower

int main() {
    int i, j, vogais = 0, tamanho;
    char  palavras[5][30];

    // Laco for para receber as 6
    for(i = 0; i < 5; i++) {
        fflush(stdin);
        printf("Digite uma palavra: ");
        gets(palavras[i]);
    }

    // Laco para percorrer as palavras, contabilizar as vogais e substituir as letras
    for(i = 0; i < 5; i++) {
        
        tamanho = strlen(palavras[i]);  // Armazenando o tamanho da palavra atual que esta sendo iterada

        for(j = 0; j < tamanho; j++) {
            
            // A linha abaixo usa a funcao tolower(da lib ctype.h) para transformar as letras em minusculo e fazer uma unica comparacao para ver onde ha vogais
            vogais += (tolower(palavras[i][j]) == 'a' || tolower(palavras[i][j]) == 'e' || tolower(palavras[i][j]) == 'i' || tolower(palavras[i][j]) == 'o' || tolower(palavras[i][j]) == 'u') ? 1 : 0;

            // Trocando as letras 'a' ou 'A' por 'X'
            if(tolower(palavras[i][j] == 'a'))
                palavras[i][j] = 'X';
        }
    }

    // Exibindo as palavras apos as alteracoes, e tambem o contador de vogais
    printf("\n\nForam encontradas ao total %d vogais nas palavras fornecidas.", vogais);
    printf("\n\nPalavras apos a substituicao das letras: ");
    // Laco for para exibir as palavras
    for(i = 0; i < 5; i++) {
        printf("%s\n", palavras[i]);
    }
}
