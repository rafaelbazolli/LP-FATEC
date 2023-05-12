#include <stdio.h>
#include <string.h>

main() {
    int tamanhoTotal = 0, i;
    char palavras[4][20];

    for(i = 0; i < 4; i++) {
        
        printf("Digite a %d palavra: ", i + 1);
        gets(palavras[i]);
        fflush(stdin);  // Limpa o buffer do teclado

        tamanhoTotal += strlen(palavras[i] + 1);  // Somando o tamanho das palavras num acumulador
    }

    // Declarando a variavel 'frase' com tamanho suficiente para conter as palavras que foram digitadas pelo usuario
    char frase[tamanhoTotal] = {};  // Inicializando vazio para evitar do buffer armazenar algum valor no array sem que seja solicitado

    // Concatenando as palavras digitadas
    for(i = 0; i < 4; i++) {
        strcat(frase, palavras[i]);
    }
	
	// Exibindo a frase
    printf("\nFrase:\n%s", frase);    
}
