#include <stdio.h>
#include <string.h>

main() {
    int i, palavraEncontrada = 0;
    char palavras[5][20], buscar[20];

    // Recebendo as palavras do usuario
    for(i = 0; i < 4; i++) {
        printf("Digite a %d palavra: ", i + 1);
        gets(palavras[i]);
        fflush(stdin);  // Limpa o buffer do teclado
    }

    // Recebendo a palavra a ser buscada
    printf("Digite a palavra a ser buscada: ");
    gets(buscar);

    // Realizando a busca. A expressao strstr(palavras[i], aux) retorna verdadeiro caso encontre a string de aux dentro de palavra
    // Nesse caso, se encontrar a strind dentro, retornara 1 que sera somado ao contado pelo operador ternario
    for(i = 0; i < 4; i++) {
        palavraEncontrada += (strstr(palavras[i], buscar)) ? 1 : 0;
    }

    // Exibindo o resultado
    printf("\n\nForam encontradas %d vezes a palavra %s.", palavraEncontrada, buscar);  
}
