#include <stdio.h>

int contarLetras(char *letras, int contadorLetrasA) {
    for(int i = 0; i < 20; i++) {
        contadorLetrasA += ((letras[i] == 'a') || (letras[i]) == 'A') ? 1 : 0;
    }
    // Como o valor de cont foi alterado em me
    return contadorLetrasA;
}

int main() {
    char palavra[20];
    int letrasA = 0, contador;

    printf("Digite uma palavra: ");
    gets(palavra);

    // Chamando a funcao para contar letras, e passando como parametro os ponteiros pra string palavra, e o ponteiro pro contador
    contador = contarLetras(palavra, letrasA);

    printf("\n\nA palavra %s tem %d letras 'a'. ", palavra, contador);
}
