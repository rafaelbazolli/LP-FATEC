#include <stdio.h>

int exibirPalavra(char *palavraLida) {
    printf("\n\n%s", palavraLida);
}

int main() {
    char palavra[20];

    printf("Digite uma palavra: ");
    gets(palavra);

    // Chamando a funcao que ira exibir a palavra
    exibirPalavra(palavra);
}
