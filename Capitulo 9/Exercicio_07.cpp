#include <stdio.h>
#include <string.h>
#include <ctype.h>

main() {
    int i, palavraEncontrada = 0;
    char palavras[5][20], palavrasConvertido[5][20], buscar[20], buscarConvertido[20];

    // Recebendo as palavras do usuario
    for(i = 0; i < 4; i++) {
        printf("Digite a %d palavra: ", i + 1);
        gets(palavras[i]); 
        fflush(stdin);  // Limpa o buffer do teclado
    }

    // Recebendo a palavra a ser buscada
    printf("Digite a palavra a ser buscada: ");
    gets(buscar);
    
    // Convertendo a variavel aux em minúscula com a função tolower()
    for(i = 0; i < 20; i++) {
        buscarConvertido[i] = tolower(buscar[i]);
    }
    
    // Percorrendo o array de palavras e convertendo cada letra para minuscula com a função tolower()
    for(i = 0; i < 5; i++) {
        for(int j = 0; j < 20; j++) {
            palavrasConvertido[i][j] = tolower(palavras[i][j]);
        }
    }

    // Buscando a palavra dentro do array de palavras ja convertido
    for(i = 0; i < 4; i++) {
        palavraEncontrada += (strstr(palavrasConvertido[i], buscarConvertido)) ? 1 : 0;
    }

    // Exibindo o resultado
    printf("\n\nForam encontradas %d vezes a palavra %s.", palavraEncontrada, buscar);  
}
